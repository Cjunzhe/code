#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3],i,j,t;
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    for(i=0;i<2;i++)
    {
        for(j=0;j<2-i;j++)
        {
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        printf("%d",a[i]);
    }
}



float power(float a[],float x,int n)
{
    int i;
    float f=a[n];
    for(i=n;i>0;i--)
    {
        f=a[i-1]+x*f;
    }
    return f;
}
int main()
{
    int N,i;
    printf("输入N\n");
    scanf("%d",&N);
    float a[N+1],fx,x;
    printf("输入x的值");
    scanf("%f",&x);
    for(i=0;i<N+1;i++)
    {
        printf("输入x的%d次方的系数",i);
        scanf("%f",&a[i]);

    }

    printf("函数值为%f",power(a,x,N));

}

//时间复杂度O（n）//
