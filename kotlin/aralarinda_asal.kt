/*Verilen iki sayının aralarında asal olup olmadığını
kontrol eden program.*/

fun main(){
    var a = readLine()!!.toInt()
    var b = readLine()!!.toInt()

    var door = true

    for(t in 2..a){
        if(a%t == 0 && b%t == 0) {
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