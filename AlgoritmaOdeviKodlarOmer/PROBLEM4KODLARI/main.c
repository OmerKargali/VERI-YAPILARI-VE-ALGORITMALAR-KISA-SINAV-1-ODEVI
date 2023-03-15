#include <stdio.h>
struct student {
    char Isim[20];
    char Soyisim[20];
    char bolum[30];
    char il[20];
    char ilce[20];
    char sokak[20];
    char mahalle[20];
    int roll;
    int no;
    int daireNo;
} s[5];

int main() {
    int x;
    printf("******************************\n");
    printf("5 adet ogrencinin bilgilerini alýp depolayan tekrar ekranda gosteren program \n");
    printf("******************************\n\n");

    printf("Ilk olarak kisisel bilgileri kullanýcýdan isteyecegiz\n\n");
    for (x = 0;x < 5; ++x) {
        s[x].roll = x + 1;

        printf("\n Ogrenci bilgileri %d: \n", s[x].roll);
        printf("Lutfen Isim Giriniz : ");
        scanf("%s", s[x].Isim);
        printf("Lutfen Soyisim Giriniz: ");
        scanf("%s", s[x].Soyisim);
        printf("Lutfen Okudugunuz Bolumu Giriniz: ");
        scanf("%s", s[x].bolum);
        printf("Lutfen Okul Numaranýzý Giriniz : ");
        scanf("%d", &s[x].no);
        printf("\n Lutfen asagida adres bilgilerinizi giriniz \n\n");
        printf("Yasadiginiz ili Giriniz: ");
        scanf("%s", s[x].il);
        printf("Yasadiginiz ilceyi Giriniz: ");
        scanf("%s", s[x].ilce);
        printf("Yasadiginiz mahalleyi Giriniz: ");
        scanf("%s", s[x].mahalle);
        printf("Yasadiginiz sokagi Giriniz: ");
        scanf("%s", s[x].sokak);

    }
    printf("*****");
    printf("\n\n Bilgiler Ekrana Yazdiriliyor:\n\n");


    for (x = 0; x < 5; ++x) {
        printf("Ogrenci: %d\n\n", x + 1);
        printf("Isim: ");
        puts(s[x].Isim);
        printf("Soyisim: ");
        puts(s[x].Soyisim);
        printf("Bolum: ");
        puts(s[x].bolum);
        printf("Numara: %.1d", s[x].no);
        printf("\n");

        printf("Il: ");
        puts(s[x].il);
        printf("Ilce: ");
        puts(s[x].ilce);
        printf("Mahalle: ");
        puts(s[x].mahalle);
        printf("Sokak: ");
        puts(s[x].sokak);
        //printf("Daire No: %.1d", s[i].daireNo);
    }
}
