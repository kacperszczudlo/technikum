package exercises

fun main(){
    isPrimal(23);
}
fun isPrimal(number: Int):Boolean {
    if(number==1) return false;
    var i =2;
    while(i*i <= number) {    // for( i = 2 ; i*i <= number;i++)

        if(number % i++ == 0 ) return false;
    }
    return true;
}