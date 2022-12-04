window.onload = function () {
    document.querySelector("#text").onkeyup = function (e) {
        console.log(e);
        console.log("#onkeyup");
    };
    document.querySelector("#text").onkeydown = function (e) {
        console.log(e);
        console.log("#onkeydown");  
    };
    document.querySelector("#text").onkeypress = function (e) {
        console.log(e);
        console.log("#onkeypress");
        document.querySelector("#wynik").innerHTML += "<b>" + e.key ;
    };

};
