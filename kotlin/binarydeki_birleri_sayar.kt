/*  n adet verilen her bir sayının, binary'sindeki 1 rakamı
    adetini veren program */

import java.util.*

fun main() {
    val input = Scanner(System.`in`)
    print("Kaç adet sayı girmek istediğinizi yazınız:")
    val n = input.nextInt()

    for (i in 0 until n) {
        var count = 0
        val number = input.nextLong().toString(2) // Gelen sayıyı binary'e çevirdim

        for(a in 0..number.length-1){ // Tüm karakterleri tek tek kontrol ediyorum

            if(number[a] == '1'){
                count +=1
            }

        }

        println(count)

    }

}