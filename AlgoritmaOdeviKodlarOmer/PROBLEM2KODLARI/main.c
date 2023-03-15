#include <stdio.h>

int main(){

    printf("*********\n");
    printf("Dizideki en kucuk degeri bulma \n");
    printf("*********\n");

    int girilenelemansayisi; //Kullanýcýnýn kaç eleman gireceðini burada alýyoruz. Bu iþlem 1 saniyede gerçekleþecektir.

    printf("Kac adet sayi degeri gireceksiniz ? :"); //Bu iþlem bir saniyede gerçekleþecektir.
    scanf("%d",&girilenelemansayisi); //Bu iþlem bir saniyede gerçekleþecektir.
    printf("\n");

     int girilensayilar[girilenelemansayisi],ksayi; //Burada deðiþkenleri tanýmlýyoruz. Bu iþlem 1 saniyede gerçekleþecektir.

     for(int i=0 ; i<girilenelemansayisi ; i++){ // Bu iþlem n+1 saniyede gerceklesir  her bir elemaný sorup tek tek alabilmesi için kodu for döngüsüne soktuk.

          printf("%d. sayiyi giriniz : ",i+1); //  Bu iþlem 1 saniyede gerçekleþecektir. Ve ..'inci elemaný bir arttýrýp tekrar soruyoruz.
          scanf("%d", &girilensayilar[i]); //Scanf fonksiyonu ile elemanlarý alýyoruz. Bu iþlem 1 saniyede gerçekleþecektir.
     }

     ksayi = girilensayilar[0]; //Ýlk olarak en küçük deðerimizi elemanýmýzýn ilk elemanýna eþitliyoruz. Daha sonra tekrar for döngüsü açýyoruz. Bu iþlem 1 saniyede gerçekleþecektir.

     for(int i=0 ; i<girilenelemansayisi ; i++){//Bu iþlem n+1 saniyede gerçekleþir.Þuan en küçük deðerimiz birinci eleman eðer girilen ikinci sayi en küçük sayýdan küçükse bu sefer en küçük sayý deðerimiz ikinci sayý olacaktýr.

          if(ksayi > girilensayilar[i]) // Bu iþlem n saniyede gerçekleþir.
               ksayi = girilensayilar[i]; // Burada eðer en küçük sayýdan baþka küçük bir deðer girilir ise bu sefer o deðer en küçük deðer olacaktýr. Bu iþlem 1 saniyede gerçekleþecektir.
     }

     printf("\n\nGirdiginiz degerler arasýnda en kücügü : %d", ksayi); // Burada bulunan en küçük sayý deðerini printf fonksiyonu ile ekrana yazdýrýyoruz. Bu iþlem 1 saniyede gerçekleþecektir.

     printf("\n\n\n\n\n\n");

 }
