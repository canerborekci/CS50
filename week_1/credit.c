#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long number;
    do{
      number = get_long("Number: \n");
    }
    while(number<=0);
        long deger= number;
        int toplam1 = 0;
        int toplam2 = 0;

        while(deger>0){
            int mod = deger % 10;
            toplam1 = toplam1 + mod;
            deger = deger / 100;
        }
        
        deger = number / 10;
        
        while(deger>0){
            int mod = deger % 10;
            int carp = mod * 2;
            toplam2 = toplam2 + (carp % 10) + (carp /10);
            deger = deger / 100;

        }
        int sonuc = toplam1 + toplam2;
        sonuc = sonuc % 10;
        deger = number;
        int lenght = 0;
        while(deger>0){
            lenght++;
            deger = deger /10;
            
        }
        deger = number;
        long ilkiki = deger;
        int i ;
        for(i = lenght; i > 2; i--){
            ilkiki = ilkiki / 10;
        }
        int ilk = ilkiki / 10;
        if(sonuc == 0){
            if((ilkiki == 34 || ilkiki == 37) && lenght == 15 ){
                printf("AMEX\n");
            }
            else if((ilkiki == 50 || ilkiki == 51 || ilkiki == 52 || ilkiki == 53 || ilkiki == 54 || ilkiki == 55) && lenght == 16){
                printf("MASTERCARD\n");
            }
            else if((lenght == 13 || lenght == 16) && ilk == 4){
                printf("VISA\n");
            }else{
                printf("INVALID\n");
            }
        }else{
            printf("INVALID\n");
        }
}



