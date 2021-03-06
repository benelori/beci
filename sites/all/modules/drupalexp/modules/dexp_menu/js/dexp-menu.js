jQuery(document).ready(function($) {
    $.each($('.dexp-dropdown').find('a.w2, a.w3'), function(index, element) {
        var w = $(element).attr('class').match(/w(\d)/);
        $(element).parent('li').find('>ul').addClass(w[0]);
    });
    $('.dexp-dropdown a.active').each(function() {
        $(this).parents('li.expanded').addClass('active');
    });
    $('.dexp-dropdown li.expanded').each(function() {
        var $this = $(this), $toggle = $('<span class="menu-toggler fa fa-angle-right"></span>');
        $toggle.click(function() {
            $(this).toggleClass('fa-angle-right fa-angle-down');
            $this.find('>ul').toggleClass('menu-open');
        });
        $this.append($toggle);
    });
    $('.dexp-menu-toggler').click(function() {
        var $menu = $($(this).data('target'));
        if ($menu != null) {
            $menu.toggleClass('mobile-open');
        }
        return false;
    });
    $('.dexp-dropdown ul li').hover(function() {
        var container_width = $('.container').width();
        var $submenu = $(this).find('>ul,>.dexp-menu-mega').not('.container'), ww = $(window).width(), innerw = ww - (ww - container_width) / 2;
        if ($submenu.length === 0)
            return;
        /*RTL*/
        if($('body').hasClass('rtl')){
            var limit = (ww - container_width)/2;
            var offsetX = limit-$submenu.offset().left;
            if(offsetX > 0){
                var transformX = offsetX + 'px';
                $submenu.css({
                    transform: 'translateX('+transformX+')'
                });
            }
        }else{
            /*LTR*/
            var offsetX = $submenu.offset().left + $submenu.width() - innerw;
            if (offsetX > 0) {
                var transformX = 0 - offsetX + 'px';
                $submenu.css({
                   transform: 'translateX('+transformX+')'
                });
            }
        }
    }, function() {
        var $submenu = $(this).find('>ul,>.dexp-menu-mega');
        if ($submenu.length === 0)
            return;
        $submenu.css({
            transform: 'translateX(0)'
        });
    });
    $('.dexp-dropdown ul ul li').hover(function() {
        var $submenu = $(this).find('>ul'), ww = $(window).width(), innerw = ww - (ww - $('.dexp-body-inner').width()) / 2;
        if ($submenu.length == 0)
            return;
        if ($submenu.offset().left + $submenu.width() > innerw) {
            $submenu.addClass('back');
        }
    }, function() {
        var $submenu = $(this).find('>ul');
        if ($submenu.length == 0)
            return;
        $submenu.removeClass('back');
    });
})