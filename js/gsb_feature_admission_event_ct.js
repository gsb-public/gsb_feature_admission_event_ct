(function ($) {
  Drupal.behaviors.gsb_feature_admission_event_ct = {
    attach: function (context, settings) {

    // function to hide the vertical tabs
    var cleanupFieldsets = function($event) {
    // tabs to be hidden
      var hide_fieldgroups = {
        node_admission_event_form_group_description: "node_admission_event_form_group_description",
        node_admission_event_form_group_speakers: "node_admission_event_form_group_speakers",
        node_admission_event_form_group_registration: "node_admission_event_form_group_registration",
        node_admission_event_form_group_schedule: "node_admission_event_form_group_schedule",
        node_admission_event_form_group_contact: "node_admission_event_form_group_contact"
      };

      $("fieldset").each(function(){
        var fieldset = $(this);
        var data = fieldset.data();
        // Vertical tab support
        if (data && data.verticalTab) {
          for (var key in hide_fieldgroups) {
            if (hide_fieldgroups.hasOwnProperty(key)) {
              if (data.verticalTab.fieldset[0].id === hide_fieldgroups[data.verticalTab.fieldset[0].id] && $event == 1) {
                fieldset.data('verticalTab').item.hide();
              }
              else {
                fieldset.data('verticalTab').item.show();
              }
            }
          }
        }
      });
    } // end of cleanupFieldsets

    $(document).ready(function() {
      $("[id^=edit-field-event-detail-und-]").change(function () {
        cleanupFieldsets($(this).val());
        // hide the asterix for URL(open new window checkbox)
        if ($('#edit-field-event-detail-und-1').is(':checked')) {
          $("label[for=edit-field-link-single-und-0-attributes-target]").children().hide();
        }
      });
      $("label[for=edit-field-link-single-und-0-attributes-target]").children().hide();
      // hide vertical tabs
      cleanupFieldsets($("input[type='radio'][name='field_event_detail[und]']:checked").val());
    });

      // attach speakers lookup
      $("input[name$='[field_person_ref][und][0][target_id]']").each(function() {
        var index = Drupal.gsb_feature_admission_event_ct.get_speaker_index($(this));
        if (index != -1) {
           $(this).data('item_index', index);
        }
      });

      $("input[name$='[field_person_ref][und][0][target_id]']").on('blur', function(e) {
        $(this).addClass('speaker-completed');
        setTimeout("Drupal.gsb_feature_admission_event_ct.lookup_speaker()", 100);
      });
    }
  }

  Drupal.gsb_feature_admission_event_ct = Drupal.gsb_feature_admission_event_ct || {}

  // speaker functions
  Drupal.gsb_feature_admission_event_ct.get_speaker_index = function(element) {
    var index = -1;
    var name = $(element).attr('name');
    var find = 'field_event_speakers[und][';
    var part1 = name.indexOf(find);
    if (part1 != -1) {
      name = name.replace(find, '');
    }
    var part2 = name.indexOf(']');
    if (part2 != -1) {
      index = name.substring(0, part2);
    }
    return index;
  }

  Drupal.gsb_feature_admission_event_ct.lookup_speaker = function() {
    var speaker_info = $('.speaker-completed').val();
    if (speaker_info == undefined) {
      return;
    }
    var pos_start = speaker_info.indexOf(' (');
    var pos_end = speaker_info.indexOf(')', speaker_info.length - 1);
    var nid = -1;
    if (pos_start != -1 && pos_end != -1) {
      nid = speaker_info.substring(pos_start + 2, pos_end);
    }
    var index = $('.speaker-completed').data('item_index');
    $.getJSON(Drupal.settings.basePath + 'gsb_feature_event_ct_speaker_lookup/' + nid + '/' + index, function(data) {
      $("input[id^='edit-field-event-speakers-und-" + data.index + "-field-title-und-0-value']").val(data.title);
    });
    $('.speaker-completed').removeClass('speaker-completed');
  }

})(jQuery);
