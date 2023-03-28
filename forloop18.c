#include <stdio.h>
int main()
{
    printf("Enter value for sum:");
    int i,c,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
       c+=i;
    }
    printf("%d",c);
    return 0;
}
