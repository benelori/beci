$(document).ready(function(){
        FB.api(
            "/954967854514776/photos",
            function (response) {
                if (response && !response.error) {
                    console.log(response);
                }
            }
        );
}
);