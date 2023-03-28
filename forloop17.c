#include <stdio.h>
int main()
{
    printf("Enter value:");
    int i;
    for(i=2000;i<=3000;i++)
    {
        if(i%4==0){
            printf("%d is a leap year.\n",i);
        }
    }
    return 0;
}
