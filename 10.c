#include <stdio.h>
int main()
{
    printf("Which multiplication table do you want?:");
    int i = 1,a;
    scanf("%d",&a);
    do{
        printf("%d X %d = %d\n",a,i,a*i);
        i++;
    }while(i<=10);
    return 0;
}
