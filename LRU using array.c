#include<stdio.h>
int main()
{
    int n,i,f=0,fr,fault=0,a[50],s,j,k;
    printf("enter the no.of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the no.of frames");
    scanf("%d",&fr);
    int x[fr];
    for(i=0;i<fr;i++)
    {
           x[i]=-1;
    }
    printf("\t");
    for(i=0;i<fr;i++)
    {
           printf("\t%d\t",x[i]);
    }
    printf("\n");
    x[0]=a[0];
    printf("%d\t",a[0]);
    for(i=0;i<fr;i++)
    {
           printf("\t%d\t",x[i]);
    }
    printf("\n");
    f++;
    fault++;
    for(i=1;i<n;i++)
    {
        int z=0;
        for(j=0;j<f;j++)
        {
            if(x[j]==a[i])
            {
                z=1;
                break;
            }
        }
        if(z==0)
        {
               printf("%d\t",a[i]);
            fault++;
            if(f<fr)
            {
                x[f]=a[i];
                f++;
            }
            else
            {
                for(s=0;s<f-1;s++)
                {
                       x[s]=x[s+1];
                }
                x[s]=a[i];
            }
            for(k=0;k<fr;k++)
              {
                     printf("\t%d\t",x[k]);
              }
              printf("\tmiss");
              printf("\n");
        }
        else
        {
               printf("%d\t",a[i]);
            for(k=j;k<f-1;k++)
            {
                x[k]=x[k+1];
            }
            x[k]=a[i];
            for(k=0;k<fr;k++)
              {
                     printf("\t%d\t",x[k]);
              }
              printf("\thit");
              printf("\n");
        }
    }
    printf("no.of faults is %d",fault);
return 0;
}
