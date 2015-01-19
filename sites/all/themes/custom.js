(function ($) {
    // Store our function as a property of Drupal.behaviors.
    Drupal.behaviors.destination_navigation = {
        attach: function (context, settings) {

            var pathname = window.location.pathname; // Returns path only
            var url      = window.location.href;     // Returns full URL

            if (pathname == '/contact-success') {
                var delay = 3000;

                setTimeout(function() {
                    window.location = "/";
                }, delay);
            }
        }
    }
}(jQuery));
