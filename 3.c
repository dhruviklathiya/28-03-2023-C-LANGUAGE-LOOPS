#include <stdio.h>
int main()
{
    printf("Enter value:");
    int i = 1,a;
    scanf("%d",&a);
    do{
        printf("%d\n",i);
        i++;
    }while(i<=a);
    return 0;
}
