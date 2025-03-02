#include <stdio.h>
#include <stdlib.h>
int main()
{
        int dama;

    int sp;
    printf("Enter sp:");
    scanf("%u",&sp);

    int m;
    printf("Enter m:");
    scanf("%u",&m);

    int n;
    printf("Enter n:");
    scanf("%u",&n);

    while(1)
    {
         
        printf("Enter dama:");
        scanf("%u",&dama);

        if(dama>(sp+n))
        {
            printf("cooler on");
        }

        if(dama<(sp-m))
        {
            printf("cooler off");
        } 
    }


    return 0;
}