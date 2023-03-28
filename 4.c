#include <stdio.h>
int main()
{
    printf("Enter value:");
    int a;
    scanf("%d",&a);
    int i = a;
    do{
        printf("%d\n",i);
        i--;
    }while(i>=1);
    return 0;
}
