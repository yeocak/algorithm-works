//Kullanıcıdan alınan bir cümlenin içindeki birden fazla tekrar eden en uzun aralığı yazdırır.
//Örnek: "Merhaba123Merhab" girdisine "Merhab" şeklinde cevap verir.

fun main() {
    val text = readLine()!!.toLowerCase()

    var kelime = ""

    for(a in 0..text.length-2){

        for(e in a+1..text.length-2){

            for(i in e+1..text.length-1){

                if(text.substring(e+1, i+1).contains(text.substring(a, e+2))){
                    if(kelime.length < text.substring(a, e+2).length){
                        kelime = text.substring(a, e+2)
                    }
                }

            }

        }

    }
    if(kelime == ""){
        print("None")
    }
    else{
        print(kelime)
    }
}
