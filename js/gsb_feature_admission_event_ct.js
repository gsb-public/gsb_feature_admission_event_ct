(function ($) {
  Drupal.behaviors.gsb_feature_admission_event_ct = {
    attach: function (context, settings) {
      var cleanupFieldsets = function($event) {
        var hide_fieldgroups = {
          node_admission_event_form_group_description: "node_admission_event_form_group_description",
          node_admission_event_form_group_speakers: "node_admission_event_form_group_speakers",
          node_admission_event_form_group_registration: "node_admission_event_form_group_registration",
          node_admission_event_form_group_schedule: "node_admission_event_form_group_schedule",
          node_admission_event_form_group_contact: "node_admission_event_form_group_contact"
        };

        $("fieldset").each(function(){
          var fieldset = $(this);
          // Find out if the fieldset contains only elements that are hidden,
          // regardless of the fieldset itself being hidden.
          var countShownSubFields = 0;
          $(fieldset).find('div.form-wrapper').each(function(){
            if ($(this).css('display') === 'block'){
              countShownSubFields++;
            }
          });
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
      }

       $(document).ready(function() {
          $("[id^=edit-field-event-detail-und-]").change(function () {
            cleanupFieldsets($(this).val());
            if ($('#edit-field-event-detail-und-1').is(':checked')) {
              $("label[for=edit-field-link-single-und-0-attributes-target]").children().hide();
            }
          });
       });
    }
  }

})(jQuery);
