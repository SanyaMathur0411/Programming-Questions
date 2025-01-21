//X pattern 
#include <stdio.h>

int main() 
{
    char str[100];
    int n;
    scanf("%s%n",str,&n);
    for(int i=1;i<n;i++)
    {
        printf("%*c%*c\n",i,str[i-1],n*2-2*i,str[i-1]);
    }
    printf("%*c\n",n,str[n-1]);
    for(int i=n-1;i>=1;i--)
    {
        printf("%*c%*c\n",i,str[i-1],n*2-2*i,str[i-1]);
    }
   }
