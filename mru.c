#include<stdio.h>
int main()
{
    int n,f,i;
    printf("enter the no.of pages");
    scanf("%d",&n);
    int p[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("enter the no.of frames");
    scanf("%d",&f);
    int x[f],s=0,fa=0;
    x[0]=p[0];s++;fa++;
    int j,k,z;
    for(i=1;i<n;i++)
    {
        z=0;
        for(j=0;j<s;j++)
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
                s++;
            }
            else
            {
                x[f-1]=p[i];
            }
        }
        else
        {
            for(k=j;k<f-1;k++)
            {
                x[k]=x[k+1];
            }
            x[k]=p[i];
        }
        for(k=0;k<f;k++)
        {
            printf("\t%d",x[k]);
        }
        printf("\n");
    }
    printf("no.of page faults are %d",fa);
}
