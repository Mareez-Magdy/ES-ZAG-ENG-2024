#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,f;
    f=1;
    i=1;
    printf("Enter the number ");
    scanf("%d",&n);
    while(i<=n)
    {
        f*=i;
        i++;
    }
    printf(" %d! = %d",n,f);
    return 0;

}
