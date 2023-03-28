#include <stdio.h>
int main()
{
    printf("Enter value:");
    int i,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(i%2==0){}
        else{
            printf("%d\n",i);
        }
    }
    return 0;
}
