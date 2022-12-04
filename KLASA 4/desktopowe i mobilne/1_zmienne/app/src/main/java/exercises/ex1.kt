package exercises


import java.math.RoundingMode
import java.text.DecimalFormat
import kotlin.ArithmeticException


fun main(){
    println(cw1());
    try {
        val df = DecimalFormat("#.##")
        df.roundingMode = RoundingMode.HALF_EVEN;

        println(DoIt2(23.0,89.0,'+'));
    }catch (e:ArithmeticException){
        println(e.message)
    } 
}
fun cw1():String{
    val a = 34; // val - niezmienialna
    var b :Double = 34.0; // var - zmienialna
    b = 56.0;
    //var isChecked = true;
    return (a+b).toString();
}
fun DoIt(a:Double,b:Double,operator:Char='+'):Double{
    if (operator=='+') return a+b;
    if (operator=='-') return a-b;
    if (operator=='*') return a*b;
    if (operator=='/' && b!=0.0) return a/b
    else throw ArithmeticException("By zero or wrong operator!!!");
}
fun DoIt2(a:Double,b:Double,operator:Char='+'):Double {
    return when (operator) {
        '+' -> return a + b;
        '-' -> return a - b;
        '*' -> return a * b;
        '/' -> {
            return if (b != 0.0) a / b else throw ArithmeticException("By zero");
        };
        else -> throw ArithmeticException("wrong operator!!!");
    }
}