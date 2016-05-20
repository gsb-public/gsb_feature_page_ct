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
    $('.slick-list').prepend('<div class="arrow-wrapper"></div>');
    var prev_arrow = $('.flex-prev.slick-arrow').detach();
    var next_arrow = $('.flex-next.slick-arrow').detach();
    $('.arrow-wrapper').prepend(next_arrow);
    $('.arrow-wrapper').prepend(prev_arrow);
  }
};

}(jQuery));