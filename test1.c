#define CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main ()
//{
//	printf("hello world!\n");
//	return 0;
//}

//1. 打印100~200 之间的素数
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int i,n,k;
//	int count=0;
//    for(n=100;n<201;n++)
//    {
//       k=sqrt(n);
//	   for(i=2;i<=k;i++)
//	   {
//		   if(n%i==0)
//		   {
//			   break;
//		   }  
//	   }
//	   if(i>k)
//		   {
//			   printf("%d ",n);
//			   count++;
//		   }
//    }
//	printf("\ncount:%d\n",count);
//    return 0;
//}

//2. 输出乘法口诀表

#include <stdio.h>

int main()

{

  int i,j;

  for(i=1;i<=9;i++)

    {

       for(j=1;j<=i;j++)

       printf(" %d×%d=%d",j,i,i*j);

       printf("\n");

    }

  return 0;

}

//2.使用main函数的参数，实现一个整数计算器，程序可以接受三个参数，第一个参数“-a”选项
//执行加法,“-s”选项执行减法，“-m”选项执行乘法，“-d”选项执行除法，后面两个参数为操作数
//例如：输入test.exe -a 1 2
//      执行1+2输出3


//3.写冒泡排序可以排序一个整型数组。