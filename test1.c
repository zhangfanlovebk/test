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
//#include<stdio.h>
//int main()
//{
// int year;
// int count=0;
// for(year=1000;year<=2000;year++)
//  {
//	if(year%4==0&&year%100!=0||year%400==0)
//	{
//		printf("%d ",year,count++); 
//	}
//	/*���û������ж�����ÿ�������м��ÿո����*/
//  }
//  printf("\ncount=%d\n",count);/*��һ�����1000-2000�����������ܸ���*/
//  return  0;
//}

//1.������ջ֡��(esp/ebp/pc/eax call ret , arg )

//2.ʹ��main�����Ĳ�����ʵ��һ��������������������Խ���������������һ��������-a��ѡ��
//ִ�мӷ�,��-s��ѡ��ִ�м�������-m��ѡ��ִ�г˷�����-d��ѡ��ִ�г�����������������Ϊ������
//���磺����test.exe -a 1 2
//      ִ��1+2���3
//#include<stdio.h>  
//#include<stdlib.h>  
//#include<assert.h>  
//int my_math(char *p, int num1, int num2)  
//{  
//    assert(p);  
//    if (p == "-a")  
//        return num1 + num2;  
//    else if (p == "-s")  
//        return num1 - num2;  
//    else if (p == "-m")  
//        return num1*num2;  
//    else if (p == "-d")  
//        return num1 / num2;  
//    else return 0;  
//}  
//int main()  
//{  
//    char a,b;  
//    char *p=&b;  
//    int num1 = 0;  
//    int num2 = 0;
//	int ret;
//    printf("������Ҫ�������ʽ��\n");  
//    scanf("%d%c%d",&num1,&a,&num2);  //¼����ʽ��num1,num2Ϊ��������a������ǲ�����  
//    while (1)      //�ֱ�Բ���ָ��p��ֵ
//    {  
//        if (a == '+')  
//        {  
//            p= "-a" ;  
//            break;  
//        }  
//        else if (a == '-')  
//        {  
//            p = "-s";  
//            break;  
//        }  
//        else if (a == '*')  
//        {  
//            p = "-m";  
//            break;  
//        }  
//        else if (a == '/')  
//        {  
//            p = "-d";  
//            break;  
//        }  
//        else *p = '\0';  
//    }  
//    ret = my_math(p, num1, num2);    //�������ã��õ������  
//    printf("%d%c%d=%d\n",num1,a,num2,ret);  //�ֱ����  
//    return 0;  
//} 


//3.дð�������������һ���������顣
//#include<stdio.h>
//#include<stdlib.h>
//void bubble(int str[],int len)
//{
//    int i,j,temp;
//    for(i=0;i<len-1;i++)//����len-1�˱Ƚ�
//    {
//        for(j=0;j<len-1-i;j++)//����len-1-i�������Ƚ�
//        {
//            if(str[j]>str[j+1])
//            {
//                temp=str[j];//����������
//                str[j]=str[j+1];
//                str[j+1]=temp;
//            }
//        }
//    }
//}
//
//int main()
//{
//    int arr[10],len,i;
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    len=sizeof(arr)/sizeof(arr[0]);
//    bubble(arr,len);
//    for(i=0;i<len;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//	printf("\n");
//    return 0;
//}

//1. �����������α�����ֵ��������ֵ�����ݽ��н�����

#include<stdio.h>

int main()

{

int a=8,b=3,c;

c=a;

a=b��

b=c;//��һ���м��������ֵ

printf("a=%d\nb=%d\n",a,b);

   return 0;

}


//2. ����������ʱ���������������������ݣ������⣩

#include <stdio.h>

int main()

{

int a=3,b=5;

a=a*b;

b=a/b;

a=a/b;//Ҳ�����üӼ�����a=a+b;b=a-b;a=a-b��

printf("a=%d\nb=%d\n",a,b);

   return 0;

}