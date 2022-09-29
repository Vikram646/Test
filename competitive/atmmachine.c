#include<stdio.h>
int main()
{
    
        int t;
        scanf("%d",&t);
        for(int i =0;i<t;i++)
        {
            int n,k;
            scanf("%d", &n);
            scanf("%d", &k);
            int a[n];
            for(int i = 0;i<n;i++)
            {
               scanf("%d", &a[i]);
            }
            for(int i =0;i<n;i++)
            {
                if(a[i]<= k)
                {
                    k = k - a[i];
                    printf("1");
                }
                else
                printf("0");
            }
        }
        return 0;
    }
    

