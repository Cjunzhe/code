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
    printf("����N\n");
    scanf("%d",&N);
    float a[N+1],fx,x;
    printf("����x��ֵ");
    scanf("%f",&x);
    for(i=0;i<N+1;i++)
    {
        printf("����x��%d�η���ϵ��",i);
        scanf("%f",&a[i]);

    }

    printf("����ֵΪ%f",power(a,x,N));

}

//ʱ�临�Ӷ�O��n��//
