jQuery(document).ready(function($){
  $('.dtooltip').tooltip();
  /* Zoom image */
  var native_width = 0;
  var native_height = 0;
  $(".magnify").mousemove(function(e) {
    if (!native_width && !native_height)
    {
        var image_object = new Image();
        image_object.src = $(".small", this).attr("src");
        native_width = image_object.width;
        native_height = image_object.height;
    }
    else
    {
      var magnify_offset = $(this).offset();
      var mx = e.pageX - magnify_offset.left;
      var my = e.pageY - magnify_offset.top;
      if (mx < $(this).width() && my < $(this).height() && mx > 0 && my > 0)
      {
          $(".large", this).fadeIn(100);
      }
      else
      {
          $(".large", this).fadeOut(100);
      }
      if ($(".large", this).is(":visible"))
      {
        var rx = Math.round(mx / $(".small", this).width() * native_width - $(".large", this).width() / 2) * -1;
        var ry = Math.round(my / $(".small", this).height() * native_height - $(".large", this).height() / 2) * -1;
        var bgp = rx + "px " + ry + "px";

        var px = mx - $(".large", this).width() / 2;
        var py = my - $(".large", this).height() / 2;
        $(".large", this).css({left: px, top: py, backgroundPosition: bgp});
      }
    }
  })
  /* End Zoom image */
});