#include <stdio.h>
int main()
{
    printf("Enter value till which you want sum:");
    int i = 1,a,c;
    scanf("%d",&a);
    do{
        c+=i;
        i++;
    }while(i<=a);
    printf("%d",c);
    return 0;
}
