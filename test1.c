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
//#include <stdio.h>
//int main()
//{
//  int i,j;
//  for(i=1;i<=9;i++)
//    {
//       for(j=1;j<=i;j++)
//       printf(" %d×%d=%d",j,i,i*j);
//       printf("\n");
//    }
//  return 0;
//}

//3. 判断1000年---2000年之间的闰年
// (1.能被400整除的年份; 2.能被4整除但同时不能被100整除的年份)
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
//	/*运用或运算判断闰年每个数字中间用空格隔开*/
//  }
//  printf("\ncount=%d\n",count);/*下一行输出1000-2000年间是闰年的总个数*/
//  return  0;
//}

//1.画函数栈帧。(esp/ebp/pc/eax call ret , arg )

//2.使用main函数的参数，实现一个整数计算器，程序可以接受三个参数，第一个参数“-a”选项
//执行加法,“-s”选项执行减法，“-m”选项执行乘法，“-d”选项执行除法，后面两个参数为操作数
//例如：输入test.exe -a 1 2
//      执行1+2输出3
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
//    printf("请输入要计算的算式：\n");  
//    scanf("%d%c%d",&num1,&a,&num2);  //录入算式，num1,num2为操作数，a保存的是操作符  
//    while (1)      //分别对参数指针p赋值
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
//    ret = my_math(p, num1, num2);    //函数调用，得到结果。  
//    printf("%d%c%d=%d\n",num1,a,num2,ret);  //分别输出  
//    return 0;  
//} 


//3.写冒泡排序可以排序一个整型数组。
//#include<stdio.h>
//#include<stdlib.h>
//void bubble(int str[],int len)
//{
//    int i,j,temp;
//    for(i=0;i<len-1;i++)//进行len-1趟比较
//    {
//        for(j=0;j<len-1-i;j++)//进行len-1-i次两两比较
//        {
//            if(str[j]>str[j+1])
//            {
//                temp=str[j];//交换两个数
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

//1. 给定两个整形变量的值，将两个值的内容进行交换。
//#include<stdio.h>
//int main()
//{
//	int a=8,b=3,c;
//	c=a;
//	a=b;
//	b=c;//找一个中间变量交换值
//	printf("a=%d\nb=%d\n",a,b);
//    return 0;
//}

//2. 不允许创建临时变量，交换两个数的内容（附加题）
//#include <stdio.h>
//int main()
//{
//	int a=3,b=5;
//	a=a*b;
//	b=a/b;
//	a=a/b;//也可以用加减法（a=a+b;b=a-b;a=a-b）
//	printf("a=%d\nb=%d\n",a,b);
//    return 0;
//}

//1.调整数组使奇数全部都位于偶数前面。
//题目：输入一个整数数组，实现一个函数，来调整该数组中数字的顺序
//使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分。
//廖雪峰git
//第一种。。。。。。。错误
//#include <stdio.h>
//void sort(int *p, int len)
//{
//    int *end = p;    //中间的没有交换过来？？？需要完善
//	int tmp;
//    end = p + len - 1;
//    while (p<end)
//    {
//        if (*p % 2 == 0)
//        {
//            while (end)
//            {
//                if (*end % 2 == 1)
//                {
//                    break;
//                }
//                end--;
//            }
//            tmp = *end;
//            *end = *p;
//            *p = tmp;
//            p++;
//        }
//        else
//        {
//            p++;
//        }  
//     }
//}
//int main()
//{
//	int i = 0;
//    int arr[] = {1,2,3,4,5,6,7,8,9,0};
//    int len = sizeof(arr) / sizeof(arr[0]);
//    sort(arr,len);
//    for (i = 0; i < len; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//	printf("\n");
//    return 0;
//}

//第二种
//#include<stdio.h>
//#include<assert.h>
//void sort(int arr[], int len)
//{
//	int begin = 0;
//    int a = 0;
//    int end = len - 1;
//	int j = 0;
//	assert(arr);
//    if (arr == NULL || len <= 0)
//    {
//        return;
//    }
//    while (begin<end)
//    {
//        while (begin<end && arr[begin] % 2 != 0) //向后移动begin，直到它指向偶数
//        {
//            begin++;
//        }
//        while (begin<end && arr[end] % 2 == 0)   // 向前移动End，直到它指向奇数
//        {
//            end--;
//        }
//        if (begin<end)
//        {
//            a = arr[begin];     // 交换偶数和奇数
//            arr[begin] = arr[end];
//            arr[end] = a;
//        }
//    }
//    for (j = 0; j<len; j++)
//        {
//            printf("%d ", arr[j]);
//        }
//}
//
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,0};
//    int len = sizeof(arr) / sizeof(arr[0]);
//    sort(arr, len);
//	printf("\n");
//    return 0;
//}

//终极代码
//#include<stdio.h>  
//#include<stdlib.h>  
//void adjust_arr(int arr[],int sz)  
//{  
//    int tmp=0;  
//    int left=0;  
//    int right=sz-1;  
//    while(left<right)  
//    {  
//        while((left<right)&&(arr[left]%2==1))   //此处left<rigft防止left++产生溢出  
//        {  
//            left++;  
//        }  
//        while((left<right)&&(arr[right]%2==0))  
//        {  
//            right--;  
//        }  
//        if(left<right)  
//        {  
//            tmp=arr[left];  
//            arr[left]=arr[right];  
//            arr[right]=tmp;  
//        }  
//    }  
//}  
//int main()  
//{  
//    int arr[10]={0,1,2,3,4,5,6,7,8,9};  
//    int i=0;  
//    adjust_arr(arr,10);  
//    for(i=0;i<10;i++)  
//    {  
//       printf("%d ",arr[i]);  
//    }  
//    printf("\n");
//    return 0;  
//} 

//2.有一个二维数组.----杨氏矩阵
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//1 2 3
//4 5 6
//7 8 9
//第一种
//#include <stdio.h>  
//#define ROW 4  
//#define COL 4  
//int Yang(int arr[ROW][COL],int val)  
//{  
//    int i = 0;  
//    int j = COL - 1;  
//    int tmp = arr[i][j];  
//    while(1)  
//    {  
//        if(tmp == val)  
//        {  
//            return 1;  
//        }  
//        else if(tmp < val && j >= 0)  
//        {  
//            tmp = arr[++i][j];  
//        }  
//        else if(tmp > val &&j >= 0)  
//        {  
//            tmp = arr[i][--j];  
//        }  
//        else  
//        {  
//            return 0;  
//        }  
//    }       
//}  
//int main()  
//{  
//    int a[ROW][COL] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};  
//    int i = 0;  
//    int j = 0;  
//    int num;  
//    printf("数组为:\n");  
//    for(i = 0; i<ROW; i++)  
//    {  
//        for(j = 0; j < COL; j++)  
//        {  
//            printf("%5d",a[i][j]);  
//        }  
//        printf("\n");  
//    }  
//    printf("Please Enter:");  
//    scanf("%d",&num);  
//    if(Yang(a,num))  
//    {  
//        printf("%d在该数组中\n",num);  
//    }  
//    else  
//    {  
//        printf("%d不在该数组中\n",num);  
//    }    
//    return 0;  
//}

//第二种
/*#include <stdio.h>  
#define col 4  
#define rol 4  
  
int yang(int(*p)[col], int num)  
{  
    int i = 0;  
    int j = col - 1;  
    while (j+1)  
    {  
        int *q = &(p[i][j]);  
        if (*q == num)  
            return 1;  
        else if (*q < num)  
        {  
            p++;  
        }  
        else if (*q > num)  
        {  
            q--;  
            j--;  
        }  
    }  
    return -1;  
}  
  
int main()  
{  
    int arr[rol][col] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, \
	{ 9, 10, 11, 12 }, { 13, 14, 15, 16 } };  
    printf("%d\n", yang(arr, 6));  
    printf("%d\n", yang(arr, 15));  
    printf("%d\n", yang(arr, 20));  
    printf("%d\n", yang(arr, 1));  
    printf("%d\n", yang(arr, 16));  
    return 0;  
}*/ 

//时间复杂度小于O(N)
//#include<stdio.h>  
//#include<stdlib.h>  
//int find_num(int arr[][3],int rows,int cols,int key) //以右上角开始查找  
//{  
//    int row=0;  
//    int col=cols-1;  
//    while((row<=rows-1)&&(col>=0))  
//    {  
//        if(arr[row][col]==key)
//		{
//            return 1;
//		}
//        else if(arr[row][col]>key)  
//        {  
//            col--;  
//        }  
//        else  
//        {  
//            row++;  
//        }  
//    }  
//    return 0;  
//}  
//*以左下角开始查找 
//int find_num(int arr[][3],int rows,int cols,int key) 
//{ 
//    int row=rows-1; 
//    int col=0; 
//    while((row>0)&&(col<=cols-1)) 
//    { 
//        if(arr[row][col]==key) 
//            return 1; 
//        else if(arr[row][col]>key) 
//        { 
//            row--; 
//        } 
//        else 
//        { 
//            col++; 
//        } 
//    } 
//    return 0; 
//} */ 
//int main()  
//{  
//    int arr[][3]={1,2,3,2,3,4,5,6,7};  
//    int key=0;  
//    int ret=0;  
//    printf("请输入一个要查找的数：\n");  
//    scanf("%d",&key);  
//    ret=find_num(arr,3,3,key);  
//    if(ret==1)  
//    {  
//        printf("查找成功！\n");  
//    }  
//    else  
//    {  
//        printf("查找失败！\n");  
//    }  
//    return 0;  
//} 

//3.一个字符串中查找第一个只出现一次的字符。
//要求复杂度为O(N).

//第一种：遍历两次，复杂度O(N^2)
//#include "stdio.h"
//#include "stdlib.h"
//char firstSingle(char * str)
//{
//	//ASCII表有255个字符，创建一个255个元素的映射数组初始为0
//	int asc[255] = {0};
//	int i;
//	//遍历字符串，同时做字符的ASCII值映射到数组下标统计出现次数；
//	for(i=0;str[i]!='\0';i++)
//		asc[str[i]]++;
//	//再次遍历，找到第一个出现一次的字符即为所求
//	for(i=0;str[i]!='\0';i++)
//		if(asc[str[i]] == 1)
//			return str[i];
//	//否则返回空
//	return '\0';
//}
//
//int main(void)
//{
//	char str[] = "abaccdeffb";
//	char tmp = firstSingle(str);
//	printf("%c\n",tmp);
//	return 0;
//}

//O(n)的时间复杂度，O(1)的空间复杂度
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
void findSingle(char *arr, int len)  
{  
    int hashtable[256] = {0};  
    int i;
    for(i=0;i<len;i++)
	{
        hashtable[arr[i]-'0']++;
	}
    for(i=0;i<len;i++)  
    {  
        if(hashtable[arr[i]-'0'] == 1)  
        {  
            printf("%c\n",arr[i]);  
            break;  
        }  
    }  
    if(i >= len)  
    {  
        printf("无满足字符\n");  
    }  
} 
  
int main()  
{  
    char str[] = "a6arccdeff";  
    findSingle(str,strlen(str));  
    return 0;  
}


//4.模拟实现以下函数：
//strcpy

//strncpy

//strcat

//strncat

//strcmp

//strncmp

//memcpy

//memmove
