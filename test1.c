#define CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main ()
//{
//	printf("hello world!\n");
//	return 0;
//}

//1. ��ӡ100~200 ֮�������
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

//2. ����˷��ھ���
//#include <stdio.h>
//int main()
//{
//  int i,j;
//  for(i=1;i<=9;i++)
//    {
//       for(j=1;j<=i;j++)
//       printf(" %d��%d=%d",j,i,i*j);
//       printf("\n");
//    }
//  return 0;
//}

//3. �ж�1000��---2000��֮�������
// (1.�ܱ�400���������; 2.�ܱ�4������ͬʱ���ܱ�100���������)
#include<stdio.h>
int main()
{
 int year;
 int count=0;
 for(year=1000;year<=2000;year++)
  {
	if(year%4==0&&year%100!=0||year%400==0)
	{
		printf("%d ",year,count++); 
	}
	/*���û������ж�����ÿ�������м��ÿո����*/
  }
  printf("\ncount=%d\n",count);/*��һ�����1000-2000�����������ܸ���*/
  return  0;
}

//1.������ջ֡��(esp/ebp/pc/eax call ret , arg )

//2.ʹ��main�����Ĳ�����ʵ��һ��������������������Խ���������������һ��������-a��ѡ��
//ִ�мӷ�,��-s��ѡ��ִ�м�������-m��ѡ��ִ�г˷�����-d��ѡ��ִ�г�����������������Ϊ������
//���磺����test.exe -a 1 2
//      ִ��1+2���3

//3.дð�������������һ���������顣
a
x
c

s

df
b
c
b
f
gf
gf
s

s
f
d

t
g
dsc

dfg

fs
e

r
g
hy
u
yh


w

f
rt

j


g
t
trt


hh

y
r

t
tt

f
s
y
hh
yi
uk

mu
i
t
g
t6
5
