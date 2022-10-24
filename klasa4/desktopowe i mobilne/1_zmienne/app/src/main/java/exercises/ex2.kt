package exercises

import java.util.*

fun main(){
    cw22();
}
    //pomoca for wyswietlia 30 liczb podzielnych przez 4
    fun cw21(){
        println("podaj ile liczb: ");
        val sc = Scanner(System.`in`);
        val howMany = sc.nextInt();
        println("podaj przez ile podzielne: ");
        val dividedBy = sc.nextInt();
        for (i in 1..howMany) {
            println(i*dividedBy);
        }
    }
    //pomoca while
    //wyswietlia 30 liczb podzielnych przez 4
fun cw22(){
    println("podaj ile liczb: ");
    val sc = Scanner(System.`in`);
    val howMany = sc.nextInt();
    println("podaj przez ile podzielne: ");
    val dividedBy = sc.nextInt();
    var i = 0;
    while (i++<howMany) {
        println(i*dividedBy);
    }
}

