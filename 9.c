#include <stdio.h>
int main()
{
    printf("Enter value for which you need factorial:");
    int i = 1,a,c=1;
    scanf("%d",&a);
    do{
        c*=i; 
        i++;
    }while(i<=a);
    printf("Factorial is: %d",c);
    return 0;
}
