#include<stdio.h>
int main()
{
       int a[30],n,e,fa=0,f=0,i,j,k,c;
       printf("enter the no.of elements");
       scanf("%d",&e);
       for(i=0;i<e;i++)
       {
              scanf("%d",&a[i]);
       }
       printf("enter the no.of frames");
       scanf("%d",&n);
       int x[n];
       for(i=0;i<n;i++)
       {
              x[i]=-1;
       }
       printf("\t");
       for(i=0;i<n;i++)
       {
              printf("\t%d\t",x[i]);
       }
       printf("\n");
       x[0]=a[0];
       printf("%d\t",a[0]);
       for(i=0;i<n;i++)
       {
              printf("\t%d\t",x[i]);
       }
       printf("\n");
       fa++;f++;
       for(i=1;i<e;i++)
       {
              int z=0;
              for(j=0;j<n;j++)
              {
                     if(x[j]==a[i])
                     {
                            z=1;
                     }
              }
              if(z==0)
              {
                     printf("%d\t",a[i]);
                     fa++;
                     if(f<n)
                     {
                            x[f]=a[i];
                            f++;
                     }
                     else
                     {
                            for(k=0;k<n-1;k++)
                            {
                                   x[k]=x[k+1];
                            }
                            x[k]=a[i];
                     }
                     for(k=0;k<n;k++)
                     {
                            printf("\t%d\t",x[k]);
                     }
                     printf("\tmiss");
                     printf("\n");
              }
              else
              {
                     printf("%d\t",a[i]);
                     for(k=0;k<n;k++)
                     {
                            printf("\t%d\t",x[k]);
                     }
                     printf("\thit");
                     printf("\n");
              }

       }
       printf("no.of page faults are %d",fa);
}
