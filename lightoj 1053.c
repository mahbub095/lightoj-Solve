#include<stdio.h>
int main()
{
    int t,a,b,c,i;
    scanf("%d",&t);
    if(t<=200)
    {
        for(i=0;i<t;i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            if(a<=40000&&b<=40000&&c<=40000&&a>=1&&b>=1&&c>=1)
            {
                if((a*a)+(b*b)==(c*c))
                {
                    printf("Case %d:yes\n",i+1);
                }
               else  if((a*a)+(c*c)==(b*b))
                {
                    printf("Case %d:yes\n",i+1);
                }
               else  if((c*c)+(b*b)==(a*a))
                {
                    printf("Case %d:yes\n",i+1);
                }
                else {
                    printf("Case %d:no\n",i+1);
                }
            }
        }
    }
}
