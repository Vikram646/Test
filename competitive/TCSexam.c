#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
        for(int i =1;i<=t;i++)
        {
            int a,b,c,d,e,f;
            scanf("%d", &a);
            scanf("%d", &b);
            scanf("%d", &c);
            scanf("%d", &d);
            scanf("%d", &e);
            scanf("%d", &f);
            if(a+b+c > d+e+f)
            {
                printf("Dragon");
            }
            else if(a+b+c<d+e+f)
            {
                printf("Sloth");
            }
            else if(a>d)
            {
            printf("Dragon");
            }
            else if(b>e)
            {
            printf("Dragon");
            }
            else if(a<d)
            {
                printf("Sloth");
            }
            else if(b<e)
            {
                printf("Sloth");
            }
            else 
            printf("Tie");
        }
    return 0;
}
