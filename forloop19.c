#include <stdio.h>
int main()
{
    printf("Enter value for factorial:");
    int i,c=1,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
       c*=i;
    }
    printf("Factorial of %d is: %d",a,c);
    return 0;
}
