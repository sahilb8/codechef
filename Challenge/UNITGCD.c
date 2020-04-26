#include <stdio.h>

int main()
{
    int t,i,n;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d",&n);
       if(n==1)
         printf("%d\n",n);
       else
         printf("%d\n",n/2);

       if(n<=3)
       {
         printf("%d",n);
         for(i=1;i<=n;i++)
            printf(" %d",i);
          printf("\n");
       }
       else
       {
       printf("3 1 2 3\n");
         i=4;
         while(i+1<=n)
         {
            printf("2 %d %d\n",i,i+1);
            i+=2;
         }
         if(i<=n)
            printf("1 %d\n",i);
       }
    }
    return 0;
}
