#define CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main ()
//{
//	printf("hello world!\n");
//	return 0;
//}

//1. 打印100~200 之间的素数

#include <stdio.h>

#include <math.h>

int main()

{

    int i,n,k;

    for(n=100;n<201;n++)

    {

       k=sqrt(n);

    for(i=2;i<=k;i++)

           if(n%i==0)break;

       if(i>k)

           printf("%d\n",n);

    }

    return 0;

}