#include<stdio.h>
int main()
{
    int n,i,j,f;
    printf("enter the no.of pages");
    scanf("%d",&n);
    int p[n];
    printf("enter the pages");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("enter the no.of frames");
    scanf("%d",&f);
    int x[f],fa=0,s=0,t[f],z,m,r,k,a;
    x[0]=p[0];t[0]=1;
    fa++;s++;
    for(i=1;i<n;i++)
    {
        z=0;
        for(j=0;j<f;j++)
        {
            if(x[j]==p[i])
            {
                z=1;
                break;
            }
        }
        if(z==0)
        {
            fa++;
            if(s<f)
            {
                x[s]=p[i];
                t[s]=1;
                s++;
            }
            else
            {
                m=t[0];r=0;
                for(k=0;k<f;k++)
                {
                    if(m>t[k])
                    {
                        m=t[k];
                        r=k;
                    }
                }
                for(k=r;k<f-1;k++)
                {
                    x[k]=x[k+1];
                    t[k]=t[k+1];
                }
                x[k]=p[i];
                t[k]=1;
            }
        }
        else
        {
            printf("%d is found at %d",p[i],j);
            t[j]++;

        }
        for(a=0;a<f;a++)
        {
            printf("\t%d %d",x[a],t[a]);
        }
        printf("\n");

    }
    printf("\nno.of page faults are %d",fa);
}
