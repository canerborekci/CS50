#include <cs50.h>
#include <stdio.h>

int get_height(void);

int main(void)
{
    int i = get_height();
        for(int n = 1; n <= i; n++){
        for(int m = i; m > n; m--){
            printf(" ");
            }
        for(int b = 0; b < n; b++){
            printf("#");
        }
        printf("  ");
        for (int c = 0; c < n; c++){
            printf("#");
        }
        printf("\n");
    }
}

int get_height(void){
    
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while(n < 1 || n > 8);
    return n;
    }

        