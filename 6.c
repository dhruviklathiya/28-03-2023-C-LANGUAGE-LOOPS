#include <stdio.h>
int main()
{
    printf("Enter value:");
    int a;
    scanf("%d",&a);
    int i = a;
    do{
        if(i%2==0){
        printf("%d\n",i);
        }
        i--;
    }while(i>=1);
    return 0;
}
