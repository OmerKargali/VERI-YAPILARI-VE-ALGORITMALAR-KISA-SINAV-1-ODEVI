#include <stdio.h>

int main(){

    printf("*********\n");
    printf("Dizideki en kucuk degeri bulma \n");
    printf("*********\n");

    int girilenelemansayisi; //Kullan�c�n�n ka� eleman girece�ini burada al�yoruz. Bu i�lem 1 saniyede ger�ekle�ecektir.

    printf("Kac adet sayi degeri gireceksiniz ? :"); //Bu i�lem bir saniyede ger�ekle�ecektir.
    scanf("%d",&girilenelemansayisi); //Bu i�lem bir saniyede ger�ekle�ecektir.
    printf("\n");

     int girilensayilar[girilenelemansayisi],ksayi; //Burada de�i�kenleri tan�ml�yoruz. Bu i�lem 1 saniyede ger�ekle�ecektir.

     for(int i=0 ; i<girilenelemansayisi ; i++){ // Bu i�lem n+1 saniyede gerceklesir  her bir eleman� sorup tek tek alabilmesi i�in kodu for d�ng�s�ne soktuk.

          printf("%d. sayiyi giriniz : ",i+1); //  Bu i�lem 1 saniyede ger�ekle�ecektir. Ve ..'inci eleman� bir artt�r�p tekrar soruyoruz.
          scanf("%d", &girilensayilar[i]); //Scanf fonksiyonu ile elemanlar� al�yoruz. Bu i�lem 1 saniyede ger�ekle�ecektir.
     }

     ksayi = girilensayilar[0]; //�lk olarak en k���k de�erimizi eleman�m�z�n ilk eleman�na e�itliyoruz. Daha sonra tekrar for d�ng�s� a��yoruz. Bu i�lem 1 saniyede ger�ekle�ecektir.

     for(int i=0 ; i<girilenelemansayisi ; i++){//Bu i�lem n+1 saniyede ger�ekle�ir.�uan en k���k de�erimiz birinci eleman e�er girilen ikinci sayi en k���k say�dan k���kse bu sefer en k���k say� de�erimiz ikinci say� olacakt�r.

          if(ksayi > girilensayilar[i]) // Bu i�lem n saniyede ger�ekle�ir.
               ksayi = girilensayilar[i]; // Burada e�er en k���k say�dan ba�ka k���k bir de�er girilir ise bu sefer o de�er en k���k de�er olacakt�r. Bu i�lem 1 saniyede ger�ekle�ecektir.
     }

     printf("\n\nGirdiginiz degerler aras�nda en k�c�g� : %d", ksayi); // Burada bulunan en k���k say� de�erini printf fonksiyonu ile ekrana yazd�r�yoruz. Bu i�lem 1 saniyede ger�ekle�ecektir.

     printf("\n\n\n\n\n\n");

 }
