var sira = 0
var sira2 = 0
var sabit = 0
var cift = true

fun main (args: Array<String>) {
    println("Bu program kum saati yazdırmaya yarar.")
    println("Kum saati büyüklüğü için bir sayı yazın:")
    var buyukluk = readLine()!!.toInt()
    sabit = buyukluk
    if(buyukluk % 2 == 1){
        buyukluk+=1
        cift = false
    }
    buyukluk/=2
    sagasatir(buyukluk)
    solasatir(buyukluk)
}

fun sagasatir(buyuk: Int){
    for(i in 1..buyuk){
        for(a in 1..sira){
            print(" ")
        }
        for(e in 1..sabit-(sira*2)){
            print("*")
        }
        print("\n")
        sira+=1
    }
}

fun solasatir(buyuk: Int){
    if(cift == true){
        sira2= 2
    }
    else{
        sira2 = 3
    }

    for(i in 1..buyuk-1){
        for(a in sira-2 downTo 1){
            print(" ")
        }

        if(cift == true){
            for(i in 1..sira2*2){
                print("*")
            }
            sira2+=1
        }
        else{
            for(e in 1..sira2){
                print("*")
            }
            sira2+=2
        }

        print("\n")
        sira-=1
    }
}