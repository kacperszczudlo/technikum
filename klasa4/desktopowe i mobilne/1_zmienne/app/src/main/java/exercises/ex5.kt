package exercises

import java.util.*
import kotlin.random.Random.Default.nextInt

fun main(){
    ex5();
}
fun ex5() {
    val sc = Scanner(System.`in`);
    print("Podaj rozmiar tablicy: ");
    val size = sc.nextInt();
    val rnd = Random();
    val numbers = IntArray(size)
    for (i in 0..size - 1) {
        //numbers[i]=(2..Int.MAX_VALUE).random()
        numbers[i] = nextInt(2, 200)

    }
    val primals = numbers.filter { isPrimal(it) }
    println("wszystkie")
    for (i in numbers) {
        print(i.toString() + " ")
    }
    println("\n\tpierwsze")
    for (i in primals) {
        print(i.toString() + " ")
    }
    println("Ilość liczb pierwszych: " + primals.size)
}