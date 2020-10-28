/*Verilen iki sayının aralarında asal olup olmadığını
kontrol eden program.*/

fun main(){
    var a = readLine()!!.toInt()
    var b = readLine()!!.toInt()

    var door = true

    for(t in 2..a){ // a ya da b'ye kadar ilerleyebiliriz, hangisi olduğu farketmez.
        if(a%t == 0 && b%t == 0) { // eğer ikisinin de tam bölündüğü bir sayı mevcutsa door'u false olarak işaretliyoruz
            door = false
        }
    }
    if(door){
        print("Aralarında asal")
    }
    else{
        print("Aralarında asal değil")
    }
}
