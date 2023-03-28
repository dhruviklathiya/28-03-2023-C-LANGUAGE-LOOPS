#include <stdio.h>
int main()
{
    printf("Enter value:");
    int i,a;
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}
