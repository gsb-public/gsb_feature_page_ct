(function ($) {

Drupal.behaviors.gsb_feature_page_ct_slideshow_slick = {
  attach: function (context, settings) {
    if ($('.panels-ipe-editing').length > 0) {
      return;
    }
    $('.hero-region-slideshow-wrapper').slick({
      swipe: false,
      easing: 'slide',
      prevArrow: '<a class="flex-prev" href="#">Previous</a>',
      nextArrow: '<a class="flex-next" href="#">Next</a>',
    });
  }
};

}(jQuery));