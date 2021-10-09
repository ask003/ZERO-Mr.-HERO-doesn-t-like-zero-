
#include <stdio.h>
#define MAX 10000
int main()
{
   int n,dig,i=0,j;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&n);
    int a[MAX];
    while(n>0)
    {
        dig = n%10;
      if(dig == 0)
      {
          n = n/10;
          continue;
      }
      else
       a[i] = dig;
       i++;
       n = n/10;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d,",a[j]);
    }
    return 0;
}