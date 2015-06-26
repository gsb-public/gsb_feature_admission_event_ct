(function ($) {
  Drupal.behaviors.gsb_feature_admission_event_ct = {
    attach: function (context, settings) {
      var currentNid = Drupal.settings.gsb_feature_admission_event_ct.currentNid;
      if (currentNid == null) {
        $('#edit-field-date-time-und-0-value-timeEntry-popup-1').val('');
      }
    }
  }
})(jQuery);
