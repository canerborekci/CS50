#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{   if(argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    int a = 0;
    for(int i=0; i < strlen(argv[1]); i++){
        if(isdigit(argv[1][i]) == 0){
            a++;
        }
    }
    if(a != 0 )
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    int girdi = atoi(argv[1]);

    string al = get_string("plaintext: ");
    if(strlen(al)<0){
        return 1;
    }
    printf("ciphertext: ");
    for (int i = 0; i < strlen(al); i++){
        if(65 <= al[i] && al[i] <= 90){
            if(al[i] + girdi > 90){
                al[i] = ((al[i] - 65 + girdi)%26)+65;
            }else{
                al[i] = al[i] + girdi;
            }
        }else if(97 <= al[i] && al[i] <=122){
            if(al[i] + girdi > 122){
                al[i] = ((al[i] - 97 + girdi)%26)+97;
            }else{
                al[i] = al[i] + girdi;
            }
        }else{
            al[i] = al[i];
        }
        
        
        printf("%c",al[i]);
        
        }
        printf("\n");
        return 0;
    }
    
    

