$(document).ready(function() {
    $('#rozmiar1').click(function() {
        $('.txt').css('fontSize','11px');
        $('#MenuRozmiaru .lit').removeClass('selected');
        $(this).addClass('selected');
    });
    $('#rozmiar2').click(function() {
        $('.txt').css('fontSize','13px');
        $('#MenuRozmiaru .lit').removeClass('selected');
        $(this).addClass('selected');
    });
    $('#rozmiar3').click(function() {
      $('.txt').css('fontSize','15px');
        $('#MenuRozmiaru .lit').removeClass('selected');
        $(this).addClass('selected');
    });
});