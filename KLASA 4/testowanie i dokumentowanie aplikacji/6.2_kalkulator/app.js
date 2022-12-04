(function(){
    //definiujemy screen gdzię będą wyświetlane liczby
    let screen = document.querySelector('.screen');
    //definiujemy przyciski żeby reagowały na kliknięcie
    let buttons = document.querySelectorAll('.btn');
    //definiujemy przycisk resetujący
    let clear = document.querySelector('.btn-clear');
    //definiujemy przycisk " = "
    let equal = document.querySelector('.btn-equal');

     /******************************************************
       nazwa funkcji : buttons.forEach
       argumenty : function(button)
       typ zwracany : int, value
       informacje : < wpisywanie cyfry po kliknięciu odpowiedniego przycisku do screena >
       autor : <Kacper Szczudło>
       *****************************************************/
    buttons.forEach(function(button){
        button.addEventListener('click', function(e){
            let value = e.target.dataset.num;
            screen.value += value;
        })
    });
     /******************************************************
       nazwa funkcji : equal.addEventListener
       argumenty : click, function(e)
       typ zwracany : int, answer
       informacje : < wykonywanie działań po kliknięciu przycisku " = " w screenie >
       autor : <Kacper Szczudło>
       *****************************************************/
    equal.addEventListener('click', function(e){
        if(screen.value === ''){
            screen.value = "Please enter";
        }else{
            let answer = eval(screen.value);
            screen.value = answer;
        }
    })
    /******************************************************
       nazwa funkcji : clear.addEventListener
       argumenty : click, function(e)
       typ zwracany : int
       informacje : < wyczyszczenie screena do domyślnej wartości po kliknięciu przycisku " C " >
       autor : <Kacper Szczudło>
       *****************************************************/
    clear.addEventListener('click', function(e){
        screen.value = "";
    })

})();