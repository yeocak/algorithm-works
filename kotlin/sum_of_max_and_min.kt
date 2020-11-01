/* Verilen sayılardan en büyük ve en küçüğün toplamını bulan
   program. Önce kaç adet olduğunu, sonra numaraları boşluklar
   bırakarak girin.*/

import java.util.*

fun main() {
    val input = Scanner(System.`in`)

    val n = input.nextInt()
    val dizi = mutableListOf<Int>()

    for (i in 1..n) {
        val x = input.nextInt()
        dizi.add(x)
    }

    dizi.sort()
    print(dizi[0]+dizi[dizi.size-1])
}