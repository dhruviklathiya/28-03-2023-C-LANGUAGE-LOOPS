#include <stdio.h>
int main()
{
    printf("Enter value:");
    int i = 1,a;
    scanf("%d",&a);
    do{
        if(i%2==0){}
        else
        {
        printf("%d\n",i);
        }
        i++;
    }while(i<=a);
    return 0;
}
