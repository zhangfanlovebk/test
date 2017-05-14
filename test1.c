#define CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)

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
//   /*以左下角开始查找 
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
//#include <stdio.h>  
//#include <stdlib.h>  
//#include <string.h>  
//void findSingle(char *arr, int len)  
//{  
//    int hashtable[256] = {0};  
//    int i;
//    for(i=0;i<len;i++)
//	{
//        hashtable[arr[i]-'0']++;
//	}
//    for(i=0;i<len;i++)  
//    {  
//        if(hashtable[arr[i]-'0'] == 1)  
//        {  
//            printf("%c\n",arr[i]);  
//            break;  
//        }  
//    }  
//    if(i >= len)  
//    {  
//        printf("无满足字符\n");  
//    }  
//} 
//  
//int main()  
//{  
//    char str[] = "a6arccdeff";  
//    findSingle(str,strlen(str));  
//    return 0;  
//}


//4.模拟实现以下函数：
//strcpy
//从src地址开始且含有'\0'结束符的字符串复制到以dest开始的地址空间
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src) //const使在函数中不能修改*src原先的值 
//{
//    char* strdest = dest;    //保存原始指针地址
//    assert(dest);    //两次断言-->检验参数，增加代码健壮性 
//    assert(src);
//    while (*src)
//    {
//        *dest++ = *src++;
//    }
//    *dest = '\0';
//    return strdest;
//}
//
//int main()
//{
//	char arr1[]="hello123";
//	char arr2[10];
//	//char *ret=*my_strcpy(arr2,arr1);
//	printf("%s\n",my_strcpy(arr2,arr1));
//	return 0;
//}
//
//strncpy
//把src所指向的字符串中以src地址开始的前n个字节复制到dest所指的数组中，并返回dest
//#include <stdio.h>
//#include <string.h>
//char *mystrncpy(char s1[],char s2[],int n)  
//{  
//    int i;  
//    char *p=s1;
//    if(n>strlen(s2))
//	{
//        return p;
//	}
//    else  
//    {  
//        //s2[n]='\0';  
//        for(i=0;i<n;i++)
//		{
//            s1[i]=s2[i];
//		}
//    }  
//}
//
//int main()  
//{
//    char s1[50]="hello";  
//    char s2[50]="welcome to my home";  
//    mystrncpy(s1,s2,7);  
//    puts(s1);
//    return 0;  
//}  
//
//
//strcat
//把src所指字符串添加到dest结尾处(覆盖dest结尾处的'\0')
//#include <stdio.h>
//#define MAXNUM 200
//void mystrcat(char str1[],char str2[])
//{
//	int i,j;/*计算str1的长度，循环结束后i的值等于str1的长度加1*/
//	for(i=0; str1 [i]!='\0';i++)/*在str1后添加str2的每个字符*/
//	{
//		;
//	}
//	for(j=0; str2 [j]!='\0';j++)/*最后一定要加上字符串结束符*/
//	{
//	  str1 [i+j]= str2 [j];
//	}
//	str1 [i+j]='\0';
//}
//
////void mystrcat(char *pstr1,char *pstr2)
////{
////	while(*pstr1)//将指针pstr1拨到字符串末尾
////	{
////		pstr1++;
////	}
////	while(*pstr1++=* pstr2++)//在pstr2后添加pstr2的每个字符，注意循环最后一次拷贝了'\0'
////	{
////		;
////	}
////}
//
//int main()
//{
//	char str1[MAXNUM],str2[MAXNUM];/*定义字符数组str1和str2，str1要能容纳连接后的字符串*/
//	printf("\nPlease input str1:\n");
//	gets(str1);
//	printf("Please input str2:\n");
//	gets(str2);
//	mystrcat(str1,str2);
//	printf("Ret str=%s\n",str1);
//	return 0;
//} 
//
//strncat
//把src所指字符串的前n个字符添加到dest结尾处
//#include <stdio.h>
//#include <assert.h>  
//char *mystrncat(char *dest,const char *src,int n)  
//{  
//     char *strDest=dest;  
//     assert((dest!=NULL)&&(src!=NULL));  
//     while(*dest !='\0')  
//     {  
//         dest++;  
//     }  
//     while(n && ((*dest++ = *src++)!='\0'))  
//     {  
//         n--;  
//     }  
//     *dest='\0';  
//     return strDest;  
//}
//
//int main(void)  
//{  
//    char d[50]="hello ! ";  
//    char *s="everyone ,let go !"; 
//    /*　 
//    s字符串中只有前n个字符被追加到d字符串，复制过来的s字符串的第一个字符覆盖了 
//    d字符串结尾的空字符。s字符串中的空字符及其后的任何字符都不会被复制，并且追加 
//    一个空字符到所得结果后面。返回值是d。 
//    */  
//    mystrncat(d,s,8);  
//    printf("%d\n",strlen(d));  
//    printf("%s\n",d);  
//    getch();  
//    return 0;  
//} 
//
//strcmp
//比较两个字符串
//若str1=str2，则返回零；若str1<str2，则返回负数；若str1>str2，则返回正数
//#include <stdio.h>
//#include <assert.h>
//int mystrcmp(const char *str1, const char *str2)  
//{  
//    int i = 0;  
//    while(str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])  
//    {  
//        i++;  
//    }  
//    return (str1[i] == str2[i] ? 0 : (str1[i] > str2[i] ? 1 : -1));  
//}
//
////int mystrcmp(const char *str1,const char *str2)
////{
////	assert(str1);
////	assert(str2);
////	while (*str1 != '\0' && *str2 != '\0')
////	{
////		if (*str1 == *str2)
////		{
////			str1++, str2++;
////		}
////		else if ( *str1 > *str2 )
////		{
////			return 1;
////		}
////		else
////		{
////			return -1;
////		}
////	}
////	if ( *str1 != '\0' && *str2 == '\0')
////	{
////		return 1;
////	}
////	if ( *str1 == '\0' && *str2 != '\0')
////	{
////		return -1;
////	}
////	return 0;
////}
//
//int main ()
//{
//	char *str1="abcde";
//	char *str2="abcde";
//	printf("%d\n",mystrcmp(str1,str2));
//	return 0;
//}
//
//strncmp
//比较的两个字符串前n个字符（相等为0，不等比较asc值）
//#include<stdio.h>
//#include<assert.h>
//int mystrncmp(const char *s1,const char *s2,int n)
//{
//	assert((s1!=NULL)&&(s2!=NULL));
//	while(*s1!='\0'&&*s2!='\0'&&n)//字符串前面部分都相同
//	{
//		if(*s1-*s2>0)
//			return 1;
//		if(*s1-*s2<0)
//			return -1;
//		s1++;
//		s2++;
//		n++;
//	}
//	if(*s1=='\0'&&*s2!='\0')//谁先为'\0',谁就小
//	{
//		return -1;
//	}
//	if(*s2=='\0'&&*s1!='\0')
//	{
//		return 1;
//	}
//	return 0;              //同时为'\0'  
//}
//
//int main()
//{
//	char *str1="ab3cde";
//	char *str2="ab7cde";
//	printf("%d\n",mystrncmp(str1,str2,3));
//	return 0;
//}
//
//memcpy
//从源src所指的内存地址的起始位置开始拷贝n个字节到目标dest所指的内存地址的起始位置中
//#include <stdio.h>  
//#include <string.h> 
//
//void * my_memcpy(void * dst, const void * src, int count)  
//{  
//    void *ret = dst;  
//    while (count--)  
//    {  
//        *(char *)dst = *(char *)src;  
//        dst=(char *)dst+1;  
//        src=(char *)src+1;  
//    }  
//    return ret;  
//} 
//
////void *my_memcpy(void *dest, const void *src, size_t n)
////{
////    char *d = dest;
////    const char *s = src;
////    int *di;
////    const int *si;
////    int r = n % 4;
////    
////    while (r--)
////        *d++ = *s++;
////    di = (int *)d;
////    si = (const int*)s;
////    n /= 4;
////    while (n--)
////        *di++ = *si++;
////
////    return dest;
////}
//
//int main()  
//{  
//    char p[] = "abcdef";
//    char *a = "123456";  
//    my_memcpy(p, a, 3);
//    printf("%s\n", p);  //123def
//    return 0;  
//}
//
//
//memmove
//由src所指内存区域复制count个字节到dest所指内存区域
//
//#include <stdio.h>  
//#include <assert.h>  
//#include <string.h> 
//
//void * memmove(void * dst, const void * src, int count)  
//{  
//    void * ret = dst;  
//    assert(dst);  
//    assert(src);  
//    if (dst <= src || (char *)dst >= ((char *)src + count))//正常情况不发生重叠，从低到高  
//    {  
//        while (count--)   
//        {  
//            *(char *)dst = *(char *)src;  
//            dst = (char *)dst + 1;  
//            src = (char *)src + 1;  
//        }  
//    }  
//    else                                                   //发生重叠，从低到高  
//    {  
//        dst = (char *)dst + count - 1;  
//        src = (char *)src + count - 1;  
//        while (count--)   
//        {  
//            *(char *)dst = *(char *)src;  
//            dst = (char *)dst - 1;  
//            src = (char *)src - 1;  
//        }  
//    }  
//    return ret;  
//} 
//
////void *mymemmove(void *dest, const void *src, size_t n)
////{
////    char temp[10];
////    int i;
////    char *d = dest;
////    const char *s = src;
////
////    for (i = 0; i < n; i++)
////        temp[i] = s[i];
////    for (i = 0; i < n; i++)
////        d[i] = temp[i];
////
////    return dest;
////}
//
//int main()  
//{  
//    char p[] = "hello";  
//    char *q = "world";  
//    memmove(p, q,strlen(q)+1 );  
//    printf("%s\n", p);  //world
//    return 0;  
//} 

//1.算法实现选择排序
//#include <stdio.h>
//void select_(int arr[],int num)
//{
//	int m,n,k,tmp;
//	for(m=0;m<num;m++)
//	{
//		tmp=arr[m];
//		k=m;
//		for(n=m+1;n<num;n++)
//		{
//			if(arr[n]<tmp)
//			{
//				tmp=arr[n];
//				k=n;
//			}
//		}
//		if(k!=m)
//		{
//			tmp=arr[k];
//			arr[k]=arr[m];
//			arr[m]=tmp;
//		}
//	}
//}
//
//int main ()
//{
//	int arr[10]={2,5,6,9,-55,3,47,8,22,43};
//	int i=0;
//	select_(arr,10);
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//2.递归实现n的k次方
//#include <stdio.h>  
//int my_pow(int n,int k)  
//{  
//    if(k == 0)  
//    {  
//        return 1;  
//    }  
//    if(k >= 1)  
//    {  
//        return (n*my_pow(n,k-1));  
//    }  
//}
//
//int main(void)  
//{
//	int x,y;
//	scanf("%d%d",&x,&y);
//	printf("%d\n",my_pow(x,y));  
//    return 0;  
//} 

//3.用递归方法求一个数各个位数字之和
//#include<stdio.h>
//int main()
//{
//    int n,s=0;
//    scanf("%d",&n);
//    while(n)
//    {
//        s+=n%10;
//        n/=10;
//    }
//    printf("s=%d\n",s);
//    return 0;
//}


//#include <stdio.h>  
//int Sum(int n)     
//{  
//    int num = 0;  
//    if( n == 0)  
//    {  
//        return num;  
//    }  
//    else
//	{    
//		num += n%10;  
//		n /= 10; 
//	}
//    return (num + Sum(n));  
//}  
//  
//int main()  
//{  
//    int n;  
//    printf("请输入一个非负整数：");  
//    scanf("%d",&n);  
//    printf("%d\n",Sum(n));  
//    return 0;  
//}

//1. 求10 个整数中最大值。
//#include <stdio.h>
//int main()
//{
//	 int i, MAX,a[10];
//	 printf("请输入十个整数:\n");
//	 for(i=0; i<10; i++)
//	 {
//		 scanf("%d", &a[i]);
//	 }
//	 MAX = a[0];
//	 for(i=0; i<10; i++)
//	 {
//		if(a[i] > MAX)
//		{
//			MAX = a[i];
//		}
//	 }
//	 printf("十个数中最大值为：%d\n", MAX);
//	 return 0;
//}

//2. 写一个函数返回参数二进制中 1 的个数
//#include <stdio.h>
//int count_one_bits(unsigned int value)
//{
//	int count =0;
//	while(value)
//	  {
//	   if(value%2==1)
//		{
//		  count++;
//		 }
//	   value/=2;
//	  }
//	return count;
//}
//
//int main()
//{
//	unsigned int a=0;
//	int ret=0;
//	scanf("%d",&a);
//	ret=count_one_bits(a);
//	printf("count=%d\n",ret);
//	return 0;
//}

//1.将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//#include <stdio.h>
//int main()
//{
//	int a[10]={1,2,3,4,5,6,7,8,9,10};
//	int b[10]={10,9,8,7,6,5,4,3,2,1};
//	int i=0;
//	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
//	{
//		a[i]=a[i]+b[i];
//		b[i]=a[i]-b[i];
//		a[i]=a[i]-b[i];
//	}
//	printf("a[10]=");
//	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
//	printf("%d ",a[i]);
//	printf("\nb[10]=");
//	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
//	printf("%d ",b[i]);
//    return 0;
//}

//2.获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列
    //（先求出32位比特位，在循环每次减2，分别输出奇、偶序列。方法二）
//方法一
//#include <stdio.h>
//int main()
//{
//     int a,i=0;
//     int arr1[16],arr2[16];
//     scanf("%d",&a);
//     while(i<32)
//     {
//          arr1[i/2]=a%2;
//          a=a>>1;
//          i++;
//          arr2[(i-1)/2]=a%2;
//          a=a>>1;
//          i++;
//     }
//     printf("奇数列二进制序列为:");
//     for(i=15;i>=0;i--)
//     {   
//          printf("%d ",arr1[i]);
//     }
//     printf("\n偶数列二进制序列为:");
//     for(i=15;i>=0;i--)
//     {
//          printf("%d ",arr2[i]);
//     }
//	 printf("\n");
//	 return 0;
//}
//
//方法二（推荐）
//#include <stdio.h>
//int main()
//{	
//	int a[32];						//整形有32个比特位；
//	int i = 0;
//	int data = 0;
//	printf("please enter data:");
//	scanf("%d", &data);
//	for (i = 0; i < 32; i++)
//	{
//		a[i] = data % 2;			//求比特位；
//		data /= 2;
//	}
//	printf("输出偶数序列：\n");
//	for (i = 31; i >= 0; i -= 2)	//i = 31;偶数的最高位；
//	{
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	printf("输出奇数序列：\n");
//	for (i = 30; i >= 0; i -= 2)	//i = 30;奇数的最高位；
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}


//方法三
//#include<stdio.h>  
//#include<stdlib.h>  
//int main()  
//{  
//    int num, i;  
//    printf("please enter a number:\n");  
//    scanf("%d", &num);  
//    printf("偶数序列为:\n");  
//    for (i = 31; i >= 1; i -= 2)  
//    {  
//        if ((num >> i) & 0x1)  //按位与（有0为0）每循环一次打印一个
//        {  
//            printf("1 ");  
//        }  
//        else
//		{
//            printf("0 ");
//		}
//    }  
//    printf("\n奇数序列为:\n");  
//    for (i = 30; i >= 0; i -= 2)  
//    {  
//        if ((num >> i) & 0x1)  
//        {  
//            printf("1 ");  
//        }  
//        else
//		{
//            printf("0 ");
//		}
//    }  
//    printf("\n");  
//    return 0;  
//}

//1.将三个数按从大到小输出
//#include<stdio.h>
//int main()
//{
//	int a,b,c,n;
//	printf("请输入三个数:\n");
//	scanf("%d %d %d",&a,&b,&c);
//	if(a<b)
//	  {
//		n=a;
//		a=b;
//		b=n;
//	   }
//	if(a<c)
//	  {
//		n=a;
//		a=c;
//		c=n;
//	   }
//	if(b<c)
//	  {
//		n=b;
//		b=c;
//		c=n;
//	   }
//	printf("三个数从大到小为：\n");
//	printf("%d %d %d\n",a,b,c);
//    return 0;
//}

//2.求两个数的最大公约数。
//#include<stdio.h>
//void main()
//{
//	int m,n,p;
//	printf("请输入两个数字:\n");
//	scanf("%d%d",&m,&n);
//	while(m%n != 0)
//	   {
//		  p = m%n;
//		  m = n;
//		  n = p;
//	   }
//	printf("最大公约数是%d\n",n);
//}

// 输出一个整数的每一位
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	printf("请输入一个非负整数：");
//	scanf("%d", &num);
//	while (num)
//	  {
//	   printf("%d\n",num%10);
//	   num = num/10;
//	  }
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
//#include<stdio.h>
//int main()
//{
//	double sum;
//	int i;
//	for(sum=0,i=1;i<=100;i++)
//	{
//		 if(i%2==1)
//		 {
//			 sum+=1.0/i;
//		 }
//		 else if (i%2==0)
//		 {
//			 sum-=1.0/i;
//		 }
//	}
//	printf("result：%lf\n",sum);
//	return 0;
//}

//编写程序数一下 1到 100 的所有整数中出现多少次数字 9
//#include <stdio.h>
//int main()
//{
//	int n=1;
//	int count=0;            /*count是数字9出现的个数*/
//	while(n<100)
//	{          
//		if(n%10==9)/*个位上含数字9的*/
//		{
//			count++;
//		}
//		 if(n-n%10==90) /*十位上含数字9的个数*/
//		 {
//			 count++;
//		 }
//		 n++;
//	}
//	printf("9出现的次数：%d\n",count);
//	return 0;
//}

//1.使用qsort排序一个整形数组，一个浮点型数组，一个字符串数组。
//#include <stdio.h>  
//#include <stdlib.h>
//#include <string.h>
//
//int int_cmp ( const void *a , const void *b ) //整形数组排序
//{ 
//	return *(int *)a - *(int *)b; 
//} 
//
//int dou_cmp( const void *a , const void *b ) //浮点型数组排序
//{ 
//	return *(double *)a > *(double *)b ? 1 : -1; 
//} 
//
//int str_cmp(const void * a,const void *b) //字符串数组排序  
//{  
//    return strcmp((char *)a,(char *)b) ; //字典序从小到大  
//    //return strcmp((char *)b,(char *)a) ; //字典序从大到小  
//}
////int str_cmp( const void *a , const void *b ) 
////{ 
////	return *(char *)a - *(char *)b; 
////} 
//
//int main()  
//{   
//	int i =0;
//    int s1[6]={13,4,834,234,5,66};
//	double s2[6]={2.78,7.92,2.00,13.2,732.6,79.12};
//	char s3[6][6]={"d","gs","jr","a","nad","wef"};  
//	qsort(s1,6,sizeof(s1[0]),int_cmp);//用s[i]表某字符串，每组大小是sizeof()
//	for(i=0;i<6;i++)
//	{
//        printf("%d ",s1[i]);
//	}
//	printf("\n");
//	qsort(s2,6,sizeof(s2[0]),dou_cmp);
//	for(i=0;i<6;i++)
//	{
//		printf("%lf ",s2[i]);
//	}
//	printf("\n");
//	qsort(s3,6,sizeof(s3[0]),str_cmp);
//	for(i=0;i<6;i++)
//	{
//		printf("%s ",s3[i]);
//	}
//	printf("\n");
//    return 0;  
//} 

//2.自己实现一个bubble_sort（冒泡排序），可以完成不同类型数据的排序。
//#include <stdio.h>
//#include <assert.h>
//int intCmp(void *x, void *y)
//{
//	int *_x = (int *)x;
//	int *_y = (int *)y;
//	return *_x - *_y;
//}
//
//void bubbleSort(void *data, int nums, int width, int (*cmp)(void *, void*))
//{
//	int i = 0;
//	assert(data);
//	for (i = 0; i < nums - 1; i++)
//	{
//		int j = 0;
//		int flag = 0;
//		char *start = (char*)data;
//		for (j = 0; j < nums - 1 - i; j++)
//		{
//			if ( cmp(start, start+width) > 0 )
//			{
//				int k = 0;
//				for (k = 0; k < width; k++)
//				{
//					start[k] ^= start[k+width];
//					start[k + width] ^= start[k];
//					start[k] ^= start[k + width];
//				}
//				flag = 1;
//			}
//			start += width;
//		}
//		if (!flag)
//		{
//			break;
//		}
//	}
//}
//
//void show(int arr[], int len)
//{
//	
//	int i = 0;
//	assert(arr);
//	for (; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = {45,4,3,23,34,287,45,888,6,75,68,9};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("before:\n");
//	show(arr, len);
//	bubbleSort(arr, len, sizeof(int), intCmp);
//	printf("after:\n");
//	show(arr, len);
//	return 0;
//}

//方法二
//#include <stdio.h>
//void swap(int *a,int *b)//该函数用于交换两个变量的值
//{
//    int temp=*a;
//    *a=*b;
//    *b=temp;
//}
//
//void Bubble_Sort(int a[],int n)//冒泡排序核心代码
//{
//    int i,j;
//    for(i=n-1;i>=0;--i)
//    {
//        int flag=0;
//        for(j=0;j<i;++j)
//        {
//            if(a[j]>a[j+1])
//            {
//                flag=1;
//                swap(&a[j],&a[j+1]);
//            }
//        }
//        if(flag==0)//没有交换，排序完成
//		{
//			break;
//		}
//    }
//}
//
//int main()
//{
//    int a[]={1,3,63,5,78,9,12,52,8};
//    int n=sizeof(a)/sizeof(int),i;
//    Bubble_Sort(a,n);
//    for(i=0;i<n;i++)
//	{
//        printf("%d ",a[i]);
//	}
//	printf("\n");
//    return 0;
//}

//结构体内存对齐
//结构体内存对其规则：
//1.第一个成员在与结构体变量偏移量为0的地址处。
//2.其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
//    //对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。
//    VS中默认的值为8
//    linux中的默认值为4
//3.结构体总大小为最大对齐数（每个成员变量除了第一个成员都有一个对齐数）的整数倍。
//4.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的
//整数倍处，结构体的整体大小就是所有最大对齐数（含嵌套结构体的对
//齐数）的整数倍

//#include <stdio.h>
//#pragma pack(4)  //#pragma pack (value)时的指定对齐值value。
//#pragma pack()   //#pragma pack () 取消指定对齐，恢复缺省对齐
//
////16 4
//struct A{
//    char a;//1
//    double b;//8 和上一个对其需上一个开辟7,8+8=16
//    int c;//4 （16是）4的整数倍，16+4=20（除过第一个最大为8,8的最小倍数24）
//};
//
//struct B{
//    int a1;//4
//    char b1;//1 可对齐4+1=5
//    double c1;//8 上一个5不是8的倍数，最小为8 ；8+8=16
//    struct A obj;//24 可对齐16+24=40
//    struct A *objp;//4 可对齐40+4=44
//    struct A objarr[2];//48 上一个44不是8的倍数，最小为48 ；48+48=96
//    char *d1;//4 可对齐96+4=100（100不是8的倍数，最小为104）
//};
//
//int main()
//{
//	struct B obj;
//    printf("%d %d\n", sizeof(struct A), sizeof(struct B));//24  104
//}

//编写代码，演示多个字符从两端移动，向中间汇聚
//#include <stdio.h>   
//#include <windows.h> 
//int main() 
//{ 
//    char arr1[] = { "welcome to xi'an!" }; 
//    char arr2[] = { "#################" }; 
//    int left = 0; 
//    int  right = strlen(arr1) - 1;
//    printf("%s\n", arr2);
//    while (left <= right) 
//    { 
//        Sleep(100);//每向中间汇聚一次，停100毫秒 
//        arr2[left] = arr1[left]; 
//        arr2[right] = arr1[right]; 
//        left++; 
//        right--; 
//        printf("%s\n", arr2); 
//    }  
//    return 0; 
//}

//实现一个通讯录；
//通讯录可以用来存储1000个人的信息，每个人的信息包括：
//姓名、性别、年龄、电话、住址
//
//提供方法：
//1.    添加联系人信息
//2.    删除指定联系人信息
//3.    查找指定联系人信息
//4.    修改指定联系人信息
//5.    显示所有联系人信息
//6.    清空所有联系人
//7.    以名字排序所有联系人
//#include <stdio.h>
//#include <string.h>
//#include <>


//#ifndef __CONTACT_H_
//#define __CONTACT_H_
//#define NAME_MAX 20
//#define SEX_MAX 10
//#define TEL_MAX 15
//#define ADDR_MAX 50
//#define PEO_MAX 1000
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//typedef struct People
//{
//	char name[NAME_MAX];
//	char sex[SEX_MAX];
//	int age;
//	char tel[TEL_MAX];
//	char addr[ADDR_MAX];
//}People,*peo;
//
//typedef struct Contact
//{
//	int count;
//	struct People people[PEO_MAX];
//}*pCon;
//
//void add_peo(pCon pcon);
//void del_peo(pCon pcon);
//void find_peo(pCon pcon);
//void modify_peo(pCon pcon);
//void show_peo(pCon pcon);
//void clear_peo(pCon pcon);
//void sort_peo(pCon pcon);
//#endif
//
//
////#include "contact.h"
//int search(pCon pcon,char *name)
//{
//	int i = 0;
//	for(; i < pcon->count; i++)
//	{
//		if(strcmp(name,pcon->people[i].name) == 0)
//			return i;
//	}
//	return -1;
//}
//
//void add_peo(pCon pcon)							//添加联系人
//{
//	if(pcon->count == PEO_MAX)
//	{
//		printf("The contact has fullen.");
//		return ;
//	}
//	printf("please input name:  ");
//	scanf("%s",(pcon->people[pcon->count]).name);
//	printf("please input sex :  ");
//	scanf("%s",(pcon->people[pcon->count]).sex);
//	printf("please input age:  ");
//	scanf("%d",&((pcon->people[pcon->count]).age));
//	printf("please input tel:  ");
//	scanf("%s",(pcon->people[pcon->count]).tel);
//	printf("please input address:  ");
//	scanf("%s",(pcon->people[pcon->count]).addr);
//	pcon->count++;
//}
//void del_peo(pCon pcon)							//删除联系人
//{
//	int i;
//	char name[NAME_MAX];
//	printf("please input the people you want to delete:");
//	scanf("%s",name);
//	i = search(pcon,name);
//	if( i == -1)
//		printf("The people doesn't exsit.\n");
//	else if(i == 1000)
//		pcon->count--;
//	else
//	{
//		for(; i < pcon->count; i++)
//			pcon->people[i] = pcon->people[i+1];
//		pcon->count--;
//	}
//}
//void find_peo(pCon pcon)						//查找联系人
//{
//	int i;
//	char name[NAME_MAX];
//	printf("please input the people you want to find:");
//	scanf("%s",name);
//	i = search(pcon,name);
//	if( i == -1)
//		printf("The people doesn't exsit.\n");
//	else
//		printf("%s\t%s\t%d\t%s\t%s\n",
//			pcon->people[i].name,
//			pcon->people[i].sex,
//			pcon->people[i].age,
//			pcon->people[i].tel,
//			pcon->people[i].addr);
//}
//void modify_peo(pCon pcon)						//修改联系人
//{
//	int i;
//	char name[NAME_MAX];
//	printf("please input the people you want to modify:");
//	scanf("%s",name);
//	i = search(pcon,name);
//	if( i == -1)
//		printf("The people doesn't exsit.\n");
//	else
//		printf("please input name:  ");
//	scanf("%s",(pcon->people[i]).name);
//	printf("please input sex :  ");
//	scanf("%s",(pcon->people[i]).sex);
//	printf("please input age:  ");
//	scanf("%d",&((pcon->people[i]).age));
//	printf("please input tel:  ");
//	scanf("%s",(pcon->people[i]).tel);
//	printf("please input address:  ");
//	scanf("%s",(pcon->people[i]).addr);
//}
//void show_peo(pCon pcon)						//显示联系人
//{	
//	int i = 0;
//	for(; i < pcon->count; i++)
//	{
//		printf("%s\t%s\t%d\t%s\t%s\n",
//			pcon->people[i].name,
//			pcon->people[i].sex,
//			pcon->people[i].age,
//			pcon->people[i].tel,
//			pcon->people[i].addr);
//	}
//}
//void clear_peo(pCon pcon)						//清空联系人
//{
//	pcon->count = 0;
//}
//
//void sort_peo(pCon pcon)//冒泡排序通讯录中所有联系人
//{
//    int i = 0, j = 0;
//    //int k = pcon->count;
//    if ((pcon->count) == 0)
//    {
//        printf("此通讯录中没有联系人!\n");
//        return;
//    }
//    for (i = 0; i < (pcon->count) - 1; i++)
//    {
//        for (j = 0; j < (pcon->count) - i - 1; j++)
//        {
//            if (strcmp((pcon->people[j]).name, (pcon->people[j+1]).name)>0)
//            {
//                People temp = pcon->people[j];
//                pcon->people[j] = pcon->people[j+1];
//                pcon->people[j+1] = temp;
//            }
//        }
//    }
//	show_peo( pcon);
//}
//
//
//
////#include "contact.h"
//void show_menu()							//显示界面
//{
//	printf("************************\n");				
//	printf("*  1:添加    2:删除    *\n");
//	printf("*  3:查找    4:修改    *\n");
//	printf("*  5:显示    6:清空    *\n");
//	printf("*  7:排序    0:退出    *\n");
//	printf("************************\n");
//}
//int main()
//{
//	struct Contact my_contact;					//定义联系人类
//	int input = 1;
//	my_contact.count = 0;						//联系人数量初始化
//	while(input)							//每次进行循环
//	{
//		show_menu();
//		printf("please input:");
//		scanf("%d",&input);
//		switch(input)
//		{
//			case 1:
//				add_peo(&my_contact);
//				break;
//			case 2:
//				del_peo(&my_contact);
//				break;
//			case 3:
//				find_peo(&my_contact);
//				break;
//			case 4:
//				modify_peo(&my_contact);
//				break;
//			case 5:
//				show_peo(&my_contact);
//				break;
//			case 6:
//				clear_peo(&my_contact);
//				break;
//			case 7:
//				sort_peo(&my_contact);
//			default :
//				break;
//		}
//	}
//	return 0;
//}


//编写代码实现，模拟用户登录情景，并且只能登录三次。
//只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序。
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	 char key[] ="123456";
//	 char input[10];
//	 int i=0;
//	 for (i=0;i<3;i++)
//	 {
//		printf("请输入密码:");
//		scanf("%s",input);
//		if (strcmp(key,input)==0)//strcmp比较字符串。若str1=str2，则返回零；
//		{
//			break;
//		}							  
//		else					//若str1<str2，则返回负数；若str1>str2，则返回正数。
//		{
//			printf("密码输入错误\n");
//		}
//	 }
//	 if(i==3)
//	 {
//		 printf("三次密码错误，退出系统\n");
//	 }
//	 else
//	 {
//		 printf("登录成功\n");
//	 }
//	 return 0;
//}


//有5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第一，我第三。
//B选手说：我第二，E第四。
//C选手说：我第一，D第二。
//D选手说：C最后，我第三。
//E选手说：我第四，A第一。
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    int e = 0;
//    for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 1) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1) == 1)
//						{
//							printf("a=%d b=%d c=%d d=%d e=%d \n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//    return 0;
//}


//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手
//#include <stdio.h> 
//int main() 
//{ 
//    char killer; 
//    for(killer='A'; killer<='D'; killer++)//巧妙地利用ASCII 从A-D进行循环和比较 
//    { 
//        //下面分别对应每个人都供词  不是A 是C     是D    不是D 
//        if (((killer!='A') + (killer=='C') + (killer=='D') + (killer!='D'))==3) 
//        { 
//			//等于3表示有三人说真话
//            printf("%c是凶手\n",killer); 
//            break; 
//        } 
//    } 
//    return 0; 
//} 


//C与C++注释转化
//#ifndef _CONVERT_H_
//#define _CONVERT_H_
//
//#include <stdio.h>
//#include <assert.h>
//#include <windows.h>
//
//#define INPUT_FILE "input.c"
//#define OUTPUT_FILE "OUTPUT.C"
//
//#pragma warning(disable:4996)
//
//typedef enum STATUS
//{
//	NORMAL_STATUS,
//	C_STATUS,
//	CPP_STATUS,
//	END_STATUS,
//}status_t;
//
//extern status_t gStatus;
//void convertBegin();
//#endif
//
//
//#include "convert.h"
//status_t gStatus=NORMAL_STATUS;
//void doNormal (FILE *in,FILE *out)
//{
//	assert(in);
//	assert(out);
//	int first = fgetc(in);
//	int second = 0;
//	switch (first)
//	{
//	case '/':
//		{
//			second = fgetc(in);
//			if(second == '*')
//			{
//				fputc('/',out);
//				fputc('/',out);
//				gStatus = C_STATUS;
//			}
//			else if (second =='/')
//			{
//				fputc(first,out);
//				fputc(second,out);
//				gStatus = CPP_STATUS;
//			}
//			else
//			{
//				fputc(first,out);
//				fputc(second,out);
//			}
//		}
//		break;
//	case EOF:
//		gStatus = END_STATUS;
//		break;
//	default:
//		fputc(first,out);
//		break;
//	}
//}
//
//void doCStatus(FILE *in,FILE *out)
//{
//	assert(in);
//	assert(out);
//	int first = fgetc(in);
//	int second = 0;
//	switch (first)
//	{
//	case '*':
//		{
//			second = fgetc(in);
//			if(second == '/')
//			{
//				int third = fgetc(in);
//				if(third == '\n')
//				{
//					fputc(third,out);
//				}
//				else
//				{
//					ungetc(third,in);
//					fputc('\n',out);
//				}
//				gStatus = NORMAL_STATUS;
//			}
//			else
//			{
//				fputc(first,out);
//				unputc(second,in);
//			}
//		}
//		break;
//	case '\n':
//		fputc(first,out);
//		fputc('/',out);
//		fputc('/',out);
//		break;
//	case EOF:
//		gStatus = END_STATUS;
//		break;
//	default:
//		fputc(first,out);
//		break;
//	}
//}
//
//
//static void doCPPStatus(FILE *in,FILE *out)
//{
//	assert(in);
//	assert(out);
//	int first = fgetc(in);
//	switch (first)
//	{
//	case '\n':
//		fputc(first,out);
//		gStatus = NORMAL_STATUS;
//		break;
//	case EOF:
//		gStatus = END_STATUS;
//		break;
//	default:
//		fputc(first,out);
//		break;
//	}
//}
//
//static void convertStatusMachine(FILE *in,FILE *out)
//{
//	assert(in);
//	assert(out);
//	while (gStatus != END_STATUS)
//	{
//		switch (gStatus)
//		{
//		case NORMAL_STATUS:
//			doNormal(in,out);
//			break;
//		case C_STATUS:
//			doCStatus(in,out);
//			break;
//		case CPP_STATUS:
//			doCPPStatus(in,out);
//			break;
//		case END_STATUS:
//			break;
//		default:
//			break;
//		}
//	}
//}
//
//void convertBegin()
//{
//	FILE *in = fopen(INPUT_FILE,"r");
//	if(NULL == in)
//	{
//		perror("fopen");
//		exit(2);
//	}
//	convertStatusMachine(in,out);
//	fclose(in);
//	fclose(out);
//}
//
//#include "convert.h"
//int main()
//{
//	convertBegin();
//	printf("convert done...\n");
//	system("pause");
//	return 0;
//}

//在屏幕上打印杨辉三角
//#include <stdio.h>
//int main ()
//{
//	int i,j;
//	int n=0;
//	int a[17][17]={0,1};
//	while(n<1 || n>16)
//	{
//		printf("请输入杨辉三角的行数：");
//		scanf("%d",&n);
//	}
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			a[i][j]=a[i-1][j-1]+a[i-1][j];
//			printf("%5d",a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//再次编写二分查找
//#include <stdio.h>
//int bin_search(int arr[],int left,int right,int key)
//{
//    while(left<=right)
//    {
//        int mid=(left+right)/2;
//        if (arr[mid]<key)
//        {
//            left=mid+1;
//        }
//        else if(arr[mid]>key)
//        {
//            right=mid-1;
//        }
//        else
//        {
//            return mid;
//        }
//    }
//    return -1;
//}
//
//int main()
//{
//    int arr[]={1,2,3,4,5,6,7,8,9,10};
//    int ret=bin_search(arr,0,sizeof(arr)/sizeof(arr[0])-1,3);
//    if(ret==-1)
//    {
//        printf("没有找到\n");
//    }
//    else
//    {
//        printf("找到了，下标是：%d\n",ret);
//    }
//	return 0;
//}

//完成猜数字游戏
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//int main()
//{
//	int start = 1;
//	int input;
//	int num;
//	while (start)
//	{
//		printf( "请选择：\n" );
//		printf( "1 开始游戏\n" );
//		printf( "0 退出游戏\n" );
//		scanf( "%d", &start);
//		switch (start)
//		{
//			case 1:
//			{
//				printf( "游戏开始\n" );
//				srand(time( NULL));
//				num = rand() % 100;
//				input = 0;
//				while (1)
//				{
//					printf( "你猜多少：" );
//					scanf( "%d", &input);
//					if (input > num)
//						printf( "你猜大了\n" );
//					else if (input < num)
//						printf( "你猜小了\n" );
//					else
//					{
//						printf( "你猜对了！\n" );
//						break;
//					}
//				}//这里出现break的话会一直在while循环内，终止不了
//			}
//			case 0:
//				exit( EXIT_FAILURE);
//			default:
//				printf( "选择错误\n" );
//				break;
//		}
//	}
//	return 0;
//}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，例如：2+22+222+2222+22222
//#include<stdio.h>
//int main()
//{
//    int a=0;
//    int Sn=0;
//    printf("请输入一个整数：\n");
//    scanf("%d",&a);
//    Sn=a*5+a*40+a*300+a*2000+a*10000;
//    printf("%d\n",Sn);
//    return 0;
//}

//#include <stdio.h>
//int main ()
//{
//    int sum=0;
//    int a=0,n,i;
//    scanf("%d",&a);
//    n=a;
//	for (i=0;i<5;i++)
//	{
//		sum+=a;
//		a=a*10+n;
//	}
//	printf ("%d\n",sum);
//	return 0;
//}

//编写一个程序，它从标准输入读取C源代码，
//并验证所有的花括号都正确的成对出现
//#include <stdio.h>
//int main()
//{
//	char a;
//	int count=0;
//	while((a=getchar()) != '\n')//如果为EOF，输不出来“匹配”
//	{
//		if(a=='{')//当遇到{时，计数器+1
//		{
//			count++;
//		}
//		if(a=='}' && count == 0)//当遇到}但计数器为0了，输出不匹配，即为}在{前边
//		{
//			printf("不匹配\n");
//			return 0;
//		}
//		if(a=='}' && count != 0)//当遇到}且计数器不为0时，计数器-1
//		{
//			count--;
//		}
//	}
//	if(count == 0)
//	{
//		printf("匹配\n");
//	}
//	else
//	{
//		printf("不匹配\n");
//	}
//	return 0;
//}

//求出0～999之间的所有“水仙花数”并输出
//#include<stdio.h> 
//int NarcissisticNumber() 
//{ 
//    int num = 0; 
//    int hundred = 0; 
//    int ten = 0; 
//    int unit = 0; 
//    for (num=0; num < 1000; num++) 
//    { 
//        hundred = num / 100; 
//        ten = (num - hundred * 100) / 10; 
//        unit = (num - hundred * 100 - ten * 10) / 1; 
//        if (num == hundred * hundred * hundred 
//            + ten * ten * ten 
//            + unit *unit *unit) 
//        { 
//            printf("%d ", num); 
//        } 
//    } 
//    printf("\n");
//    return 0;
//}
//
//int main() 
//{ 
//    NarcissisticNumber(); 
//    return 0; 
//}

//#include <stdio.h>
//int main()
//{
//	char a = "我爱你";
//	char b;
//	printf("请输入:\n");
//	scanf("%c",&b);
//	if(b == a)
//	{
//		printf("我也爱你，亲爱的！\n");
//	}
//	else
//	{
//		printf("二狗，你变了！\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include<string.h>
//int mystrcmp(const char*a, const char*b)
//{
//	if (*a != *b)
//	{
//		return 0;
//	}
//	while ((*a++ == *b++)&&((*a!='\0')&&(*b!='\0')))
//	{
//		if (*a != *b)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int c = 0;
//	char a[100] = "I love you!";
//	char b[100];
//	printf("Please Enter:\n");
//	gets_s(b, 100);
//	if (mystrcmp(a, b) == 1)
//	{
//		printf("My dear, I love you too！\n");
//	}
//	else
//	{
//		printf("Two dog, you have become！\n");
//	}
//	return 0;
//}


//在屏幕上输出以下图案：
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
//#include <stdio.h>
//int main ()
//{
//	//int i,j;
//	//for(i = j = 1; i; j++ < 7 ? i++ : i--)
//	//{
//	//	printf("%*.*s\n",7+i,(i << 1) - 1,"*************");
//	//}
//	int i,j,k;
//	for(i = 1;i <= 7;i++)//先打印上边的七行
//	{
//		for(j = 1;j <= 7 - i;j++)//控制要打印的空格数量
//		{
//			printf(" ");
//		}
//		for(k = 1;k <= 2 * i - 1;k++) //控制要打印的星号数
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for(i = 1;i <= 6;i++)//打印下面的六行
//	{
//		for(j = 1;j <= i;j++)
//		{
//			printf(" ");
//		}
//		for(k = 1;k <= 13 - 2 * i;k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//使用函数实现两个数的交换。
//#include<stdio.h>
//
//void swap(int *x, int *y)
//{
//    int t;
//    t=*x;
//    *x=*y;
//    *y=t;
//}
//
//int main()
//{
//    int a=1,b=2;
//    swap(&a,&b);
//    printf("a=%d,b=%d\n",a,b);
//    return 0;
//}

//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	int ret1=15^8;//都在2的平方到2的立方范围，则得到较小值
//	//int ret2=15|10;//。。。。。。。。。。。。则得到较大值
//	//int ret3=15^10;//。。。。。。。。。。。。则得到差值
//	printf("%d\n",ret1);
//	//int end=0;
//	//end=GetTickCount();//从系统启动到当前所用时间
//	//printf("%d\n",end-start);
//	//char a[10]="ahksfjenk";
//	//printf("%s\n",a);
//	//printf("%d\n",strlen(a));
//	//printf("%d\n",sizeof(a));
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a=-1;
//	signed char b=-1;
//	unsigned char c=-1;
//	printf("a=%d\nb=%d\nc=%d\n",a,b,c);//-1,-1,255
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	while(*str1 != '\0' && *str2 != '\0'){
//		if(*str1 == *str2){
//			str1++;
//			str2++;
//		}
//		if(*str1 > *str2){
//			return 1;
//		}
//		if(*str1 < *str2){
//			return -1;
//		}
//	}
//	if(*str1 == '\0' && *str2 != '\0'){
//		return -1;
//	}
//	if(*str1 != '\0' && *str2 == '\0'){
//		return 1;
//	}
//	return 0;
//}
//
//char* my_strcpy(char* dst, const char* src)
//{
//	char* ret = dst;
//	assert(dst);
//	assert(src);
//	while(*dst++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char dst[50];
//	const char* msg = "hello world";
//	const char* msg1 = "hello bit";
//	my_strcpy(dst,msg);
//	printf("%s\n",dst);
//	printf("%d\n",(my_strcmp(msg,msg1)));
//	return 0;
//}

//判断大小端
//小端：低位在低地址。大端：低位在高地址。
//#include <stdio.h>
//
//int is_system()
//{
//	union A{
//		int a;
//		char c;
//	}obj;
//	obj.a = 1;
//	if(obj.c == 1){
//		return 1;//data is 小端
//	}
//	return 0;//大端
//
//	//int a = 1;
//	//if(*((char*)&a) == 1){
//	//	return 1;//小端
//	//}
//	//return 0;
//}
//
//int main ()
//{
//	printf("%d\n",is_system());//小端
//	return 0;
//}

//#include <stdio.h>
//struct A{
//	unsigned int a : 2;
//	//unsigned int e;
//	unsigned int b : 6;
//	unsigned int c : 13;
//}obj;
//
//struct B{
//	unsigned short a : 2;
//	unsigned short e;
//	unsigned short b : 6;
//	unsigned short c : 13;
//}obj_b;
//
//struct C{
//	unsigned char a : 2;//最大数不能超过8
//	//unsigned char e;
//	unsigned char b : 6;
//	unsigned char c : 7;
//}obj_c;						//double型按int型计算，不是8
//
//int main ()
//{
//	printf("%d\n",sizeof(obj));		//4
//	printf("%d\n",sizeof(obj_b));	//8
//	printf("%d\n",sizeof(obj_c));	//2
//	return 0;
//}


//#include <stdio.h>
//
////#pragma pack (4)
////#pragma pack ()
//union {		//联合体
//	int b;
//	double c;
//	char d[9];
//}obj;//对齐：按成员最大的计算；
//	//整体大小为“默认对齐数与成员最大类型大小”较小值整数倍。
//
////struct A{
////	int a;
////	union {
////		int b;
////		char c;
////		char d[5];
////	};
////	struct{
////		int e;
////		double f;
////		char g[5];
////	};
////	double x;
////}obj;
//
//int main()
//{
//	printf("%d\n",sizeof(obj));
//	return 0;
//}


//结构体内存对齐
//1.第一个成员无对齐数；
//2.从第二个开始的成员对齐到“对齐数”的整数倍处；
//	对齐数：默认对齐数与该成员大小的较小值。
//3.结构体总大小为“最大对齐数”的整数倍；
//4.嵌套结构体，则整体大小为：所有最大对齐数整数倍。
//#pragma pack(4)
//#include <stdio.h>
//struct A{
//	double a;
//	int b;
//	int c;
//	char d;
//	double e;
//}obj;
//
//int main ()
//{
//	printf("%d\n",sizeof(obj));//28;若默认为8，大小为32
//	return 0;
//}

//#include <stdio.h>
//#include <windows.h>
//int main ()
//{
//	const char *msg = "hello \n";
//	int i = 5;
//	char buf[300];
//	FILE *fp = fopen("2017_2_4.txt","r");
//	if(NULL == fp){
//		perror("fopen");
//		exit (1);
//	}
//	while(fgets(buf,sizeof(buf),fp) != NULL){
//		printf("%s",buf);
//	}
//	//while( i-- ){
//	//	fputs(msg,fp);
//	//}
//	printf("fopen success\n");
//	fclose(fp);
//	printf("fclose done...\n");
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//int main ()
//{
//	int a = 1234;
//	char buf[32];
//	sprintf(buf,"%d",a);
//	printf("%s\n",buf);
//	//char a[]="1234";
//	//int b = 0;
//	//sscanf(a,"%d",&b);
//	//printf("%d\n",b);
//	return 0;
//}

//球从100米落下，每次反弹一半高度，求第十次的
//反弹高度与经过的总路程。
//#include <stdio.h>
//int main ()
//{
//	double a = 100.00;
//	double sum = 100.00;
//	int i = 0;
//	for(i = 0;i < 10;i++){
//		a /= 2;
//		sum += a;
//	}
//	printf("high:%lf\nsum:%lf\n",a,sum);
//	return 0;
//}

//猴子摘了好多桃，每天吃一半零一个，第十天发现剩一个，求摘的桃数
//#include <stdio.h>
//int main ()
//{
//	//int sum = 1;
//	//int i = 0;
//	//for(i = 0;i < 9;i++){
//	//	sum = (sum + 1) * 2;
//	//}
//	//printf("%d\n",sum);
//	int t,x = 1;
//	for(t = 9;t >= 1;t--){
//		x = (x + 1) * 2;
//	}
//	printf("%d\n",x);
//	return 0;
//}


//#ifndef _SEQUENCELIST_H_
//#define _SEQUENCELIST_H
//
//#include<assert.h>
//#include<stdio.h>
//#include<memory.h>
//#include<Windows.h>
//typedef int DataType;
//typedef unsigned int size_t;
//#define MAXSIZE 10
//
//typedef struct SeqList
//{
//	DataType array[MAXSIZE];
//	DataType size;
//}SeqList,*pSeqList;
//
////*************************************************
//
////初始化顺序表
//void InitSeqList(pSeqList pSeq);
//
////打印顺序表
//void PrintSeqList(pSeqList pSeq);
//
////在顺序表尾部插入值为data的元素
//void PushBack(pSeqList pSeq, DataType data);
//
////删除顺序表的最后一个元素
//void PopBack(pSeqList pSeq);
//
////在顺序表的头部插入值为data的元素
//void PushFront(pSeqList pSeq, DataType data);
//
////删除顺序表头部元素
//void PopFront(pSeqList pSeq);
//
////在顺序表中pos位置上插入值为data的元素
//void Insert(pSeqList pSeq,size_t pos,DataType data);
//
////删除顺序表中pos位置上的元素
//void Erase(pSeqList pSeq, size_t pos);
//
////在顺序表中查找值为data的元素，找到返回该元素的位置，否则返回-1
//int Find(pSeqList pSeq, DataType data);
//
////删除顺序表中第一个值为data的元素
//void Remove(pSeqList pSeq, DataType data);
//
////删除顺序表中所有值为data的元素
//void RemoveAll(pSeqList pSeq, DataType data);
//
////使用冒泡排序给顺序表中的元素排序
//void BubbleSort(pSeqList pSeq);
//
////使用选择排序给顺序表中的元素排序
//void SelectSort(pSeqList pSeq);
//
////使用二分查找在顺序表中查找值为data的元素
//int BinarySearch(pSeqList pSeq, DataType data);
//
////*************************************************
//
//#endif
//
//
//void InitSeqList(pSeqList pSeq)
//{
//	//assert(pSeq);
//
//	memset(pSeq->array, 0, sizeof(pSeq->array));
//	pSeq->size = 0;
//}
//
//void PrintSeqList(pSeqList pSeq)
//{
//	int count = 0;
//	assert(pSeq);
//	if (pSeq->size == 0)
//	{
//		return;
//	}
//	while (count < pSeq->size)
//	{
//		printf("%d->", pSeq->array[count]);
//		count++;
//	}
//	printf("\n");
//}
//
//void PushBack(pSeqList pSeq, DataType data)//尾插
//{
//	assert(pSeq);
//
//	if (pSeq->size >= MAXSIZE)
//	{
//		return;
//	}
//	pSeq->size++;
//	pSeq->array[pSeq->size-1] = data;
//
//}
//
//void PopBack(pSeqList pSeq) //尾删
//{
//	assert(pSeq);
//
//	if (pSeq->size <= 0)
//	{
//		return;
//	}
//	pSeq->size--;
//}
//
//void PushFront(pSeqList pSeq,DataType data) //头插
//{
//	int idx = 0;
//	assert(pSeq);
//
//	if (pSeq->size >= MAXSIZE)
//	{
//		return;
//	}
//	for (idx = pSeq->size-1; idx >= 0; idx--)
//	{
//		pSeq->array[idx+1] = pSeq->array[idx];
//	}
//	pSeq->array[0] = data;
//	pSeq->size++;
//}
//
//void PopFront(pSeqList pSeq) //头删
//{
//	int idx = 0;
//	assert(pSeq);
//
//	if (pSeq->size == 0)
//	{
//		return;
//	}
//	for (idx = 0; idx < pSeq->size-1; idx++)
//	{
//		pSeq->array[idx] = pSeq->array[idx + 1];
//	}
//	pSeq->size--;
//}
//
//
//void Function1()
//{
//	SeqList pSeq;
//	InitSeqList(&pSeq);
//	//PrintSeqList(&pSeq);
//	PushBack(&pSeq, 2);
//	PushBack(&pSeq, 4);
//	PushBack(&pSeq, 1);
//	PrintSeqList(&pSeq);//241
//
//	PopBack(&pSeq);
//	PrintSeqList(&pSeq);//24
//
//	PushFront(&pSeq, 8);
//	PushFront(&pSeq, 9);
//	PushFront(&pSeq, 5);
//	PrintSeqList(&pSeq);//59824
//
//	PopFront(&pSeq);
//	PrintSeqList(&pSeq);//9824
//}
//
//int main()
//{
//	Function1();
//	system("pause");
//	return 0;
//}

//输入行数打印乘法口诀表
//#include <stdio.h>
//void mul(int n)
//{
//	int i,j;
//	for(i = 1;i <= n;i++){
//		for(j = 1;j <= i;j++){
//			printf("%2d*%2d=%3d ",j,i,i*j);//其中%2d中的2表示输出两格，数向后靠齐
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入要打印乘法口诀行数：");
//	scanf("%d",&n);
//	mul(n);
//	return 0;
//}

//#include <stdio.h>
//int sum()
//{
//	int i = 0;
//	int j = 0;
//	for(i = 0; i <= 100;i++){
//		j += i;
//	}
//	return j;
//}
//
//int main()
//{
//	printf("%d\n",sum());
//	return 0;
//}


//旋转字符
//#include<stdio.h>  
//#include<string.h>  
//void reverse(char *left, char *right)  
//{  
//    while (left < right)  
//    {  
//        char tmp = *left;  
//        *left = *right;  
//        *right = tmp;  
//        left++;  
//        right--;  
//    }  
//}  
//void left_move(char *p, int n)  
//{  
//    int len = strlen(p);  
//    reverse(p, p + n - 1);  
//    reverse(p + n, p + len - 1);  
//    reverse(p, p + len - 1);  
//}  
//int main()  
//{  
//    char arr[] = "abcdef";  
//    int n = 0;  
//    scanf_s("%d", &n);  
//    left_move(arr, n);  
//    printf("%s\n", arr);  
//    return 0;  
//}

//函数实现闰年判断
//#include <stdio.h>
//
//int leap_year(int year)
//{
//	if(((year % 4 == 0) && (year % 100 != 0))||(year % 400 == 0))
//		return 1;
//	else
//		return 0;
//}//闰年能被4整除且不能100整除、或能被400整除
//
//int main()
//{
//	int year;
//	int ret;
//	scanf("%d",&year);
//	ret = leap_year(year);
//	if(ret == 1)
//	{
//		printf("%d是闰年\n",year);
//	}
//	else
//	{
//		printf("%d非闰年\n",year);
//	}
//	return 0;
//}


//判断素数
//#include <stdio.h>
//#include <math.h>
//int prime(int num)//prime素数
//{
//	int i = 0;
//	int k = 0;
//	k = sqrt(num);
//	for(i = 2;i <= k;i++)
//	{
//		if(num % i == 0){
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	printf("请输入大于1的整数：\n");
//	scanf("%d",&num);
//	ret = prime(num);
//	if(ret == 0){
//		printf("%d不是素数\n",num);
//	}
//	else{
//		printf("%d是素数\n",num);
//	}
//	return 0;
//}


//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置
//#include <stdio.h>
//
//int init(int arr[],int len)
//{
//	int i = 0;
//	printf("初始化数组：\n");
//	for(i = 0;i < len;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	return 0;
//}
//
//int reverse(int arr[],int len)
//{
//	int i = 0;
//	printf("逆置数组：\n");
//	for(i = (len-1);i >= 0;i--)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//
//int empty(int arr[],int len)
//{
//	int i = 0;
//	printf("清空数组：\n");
//	for(i = 0;i < len;i++)
//	{
//		arr[i] = 0;
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//
//int main()
//{
//	int arr[5];
//	int len = 0;
//	len = sizeof(arr)/sizeof(arr[0]);
//	init(arr,len);
//	reverse(arr,len);
//	printf("\n");
//	empty(arr,len);
//	return 0;
//}

//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同
//先异或后移位
//#include <stdio.h>
//int main ()
//{
//	int m,n,i;
//	int count = 0;
//	printf("请输入两个整数：\n");
//	scanf("%d%d",&m,&n);
//	i = m ^ n;	//“相同为零、不同为一”得出不同位数i,继续检测i
//	while(i)//方法一
//	{
//		count++;
//		i &= (i - 1);//“与零或一”
//	}
//	//for(i = 0;i < 32;i++)//方法二
//	//{
//	//	if((m & 1) != (n & 1))//移位
//	//	{
//	//		count++;
//	//	}
//	//	m >>= 1;
//	//	n >>= 1;
//	//}
//	printf("%d\n",count);
//	return 0;
//}


//不使用（a+b）/2这种方式，求两个数的平均值
//#include <stdio.h>
//int main()
//{
//	float a,b,mid;
//	print
//	scanf("%f%f",&a,&b);
//	mid = a - (a - b)/2;
//	printf("平均值为：%f\n",mid);
//	return 0;
//}



//一组数据中只有一个数字出现了一次。
//其他所有数字都是成对出现的。请找出这个数字。
//使用位运算,异或可以抵消相同的数字
//#include <stdio.h>
//int main()
//{
//    int i,arr[]={1,3,5,7,9,1,3,5,7};
//    for(i = 1;i < sizeof(arr)/sizeof(arr[0]);i++)
//    {
//        arr[0] = arr[0] ^ arr[i];
//    }
//    printf("The single number is:%d\n",arr[0]);
//    return 0;
//}

//unsigned int  reverse_bit(unsigned int value);
//这个函数的返回 值value的二进制位模式从左到右翻转后的值。
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//#include <stdio.h>
//
//int reverse_bit(unsigned int value)
//{
//    int bit = 0,a = 0;
//    int i;
//    for(i = 0;i < 32;i++)
//    {
//        a <<= 1;                    //左移一位，保存前一位
//        bit = value & 1;            //取出最后一位给bit
//        value >>= 1;                //值右移，取下一位
//        a |= bit;                   //最后一位给a
//    }
//    return a;
//}
//
//int main ()
//{
//    printf("%u\n",reverse_bit(25));
//    return 0;
//}


//模拟实现strcpy
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src) //const使在函数中不能修改*src原先的值 
//{
//    char* strdest = dest;    //保存原始指针地址
//    assert(dest);    //两次断言-->检验参数，增加代码健壮性 
//    assert(src);
//
//    while (*src)
//    {
//        *dest++ = *src++;
//    }
//    *dest = '\0';
//    return strdest;
//}
//int main()
//{
//    char arr1[] = "hello world!";
//    char arr2[20] ;
//    char* ret = my_strcpy(arr2, arr1);
//    printf("%s\n", ret);
//    return 0;
//}

//模拟实现strlen
//#include <stdio.h>
//#include <assert.h>
//#include <stdlib.h>
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);//断言、指针判空
//	while(*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//int main ()
//{
//	char* str = "abcdefgh";
//	printf("%d\n",my_strlen(str));
//	return 0;
//}


//有一个字符数组的内容为:"student a am i",请你将数组的内容改为"i am a student".
//要求：不能使用库函数。只能开辟有限个空间（空间个数和字符串的长度无关）
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//void reverse_str(char *left, char *right)
//{
//    assert(left);
//    assert(right);
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//
//void reverse(char arr[])
//{
//    char *pstart = arr;
//    char *pend = arr + strlen(arr)-1;
//    char *pcur = NULL;
//    if ((arr == NULL) || (arr[0] == '\0'))
//    {
//        return;
//    }
//    reverse_str(pstart, pend);            //逆序整个字符数组
//    while (*arr)
//    {
//        pcur = arr;
//        while (*arr != '\0' && *arr != ' ')
//        {
//            arr++;
//        }
//        pend = arr - 1;
//        reverse_str(pcur, pend);
//        if (*arr == ' ')
//            arr++;
//    }
//}
//
//int main()
//{
//    char arr[] = "swimming go to want I";
//	char arr1[] = "student a am I";
//    reverse(arr);
//    printf("%s\n", arr);
//    reverse(arr1);
//    printf("%s\n", arr1);
//    return 0;
//}

//方法二
//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//
//void reverse(char *start, char *end)
//{ 
//	assert(start); 
//	assert(end); 
//	while (start < end) 
//	{ 
//		char tmp = *start; 
//		*start = *end; 
//		*end = tmp; 
//		start++; 
//		end--; 
//	} 
//} 
//
//void str_reverse(char *str) 
//{ 
//	int len = strlen(str);
//	assert(str); 
//	reverse(str, str + len - 1); 
//	while (*str != '\0') 
//	{ 
//		char *p = str; 
//		while ((*str != ' ') && (*str != '\0')) 
//		{ 
//			str++; 
//		} 
//		reverse(p, str - 1); 
//		if (*str != '\0') 
//		{ 
//			str++; 
//		} 
//	} 
//} 
//
//int main()
//{
//    char arr[] = "swimming go to want I";
//	char arr1[] = "student a am I";
//    str_reverse(arr);
//    printf("%s\n", arr);
//    str_reverse(arr1);
//    printf("%s\n", arr1);
//	//char a[] = "ahjkf";
//	//printf("%d\n",sizeof(a));//6 若为strlen则为5.
//	//sizeof计算结果包括结尾的\0
//    return 0;
//}



//字符串替换空格：
//请实现一个函数，把字符数组中的每个空格替换成“％20”。
//例如输入“we are happy.”，则输出“we%20are%20happy.”
//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//
//int change(char *arr1,char *arr2)// arr1用来存放原字符，arr2用来存放加完%20后的字符
//{
//	assert(*arr1);
//	assert(*arr2);
//	while(*arr1)
//	{
//		if(*arr1 != ' ')//当arr不为0时，进入while循环
//		{
//			*arr2 = *arr1;
//			arr2++;
//		}
//		else
//		{
//			strcpy(arr2,"%20");//在arr2后面加上%20 ，arr2向后移动三个位置
//			arr2 += 3;//不是指针向后走三个
//		}
//		arr1++;
//	}
//	*arr2 = '\0';//*arr2是‘\0’的时候就结束
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "I will change world";//切记数组带[]
//	char arr2[30];//arr1为20，arr2为26，注意开辟空间大小
//	change(arr1,arr2);
//	printf("%s\n",arr2);
//	return 0;
//}


//写一个宏可以将一个数字的二进制奇数位和偶数位交换
//#include <stdio.h>
//#define CHANGE(X) \
//    ((X&0x55555555)<<1)|((X&0xaaaaaaaa)>>1)//奇数位左移一位，偶数位右移一位
//int main()
//{
//    int a=0;
//    scanf("%d",&a);
//    printf("奇偶位交换后：%d\n", CHANGE(a));
//    return 0;
//}


//模拟实现strstr函数(在串中查找指定字符串的第一次出现)

//#include <stdio.h> 
//const char *my_strstr(const char *str1, const char *str2) 
//{ 
//    int i = 0;
//    for(; str1[i] != '\0'; i++) 
//    { 
//        int tem = i;        //tem保留主串中的起始判断下标位置  
//        int j = 0; 
//        while(str1[i++] == str2[j++]) 
//        { 
//            if(str2[j] == '\0') 
//            { 
//                return &str1[tem]; 
//            } 
//        } 
//        i = tem; 
//    }
//    return NULL; 
//} 
// 
//int main() 
//{ 
//    char *a = "12345 hello bit."; 
//    char *b = "4"; 
//    printf("%s\n", my_strstr(a, b)); 
//    return 0; 
//}  


//实现一个函数翻转字符串（将一个字符串的内容，逆序存储）
//第一种
//#include <stdio.h>
//int main() 
//{ 
//    void con(char word[]); 
//    char a[40];
//    gets(a); 
//    con(a); 
//    return 0; 
//} 
// 
//void con(char word[]) 
//{ 
//    int i=0,z;
//    while(word[i++])
//    { 
//        z=i;
//    }
//    for(i=z-1;i>=0;i--)
//    {
//        printf("%c",word[i]);
//    }
//    printf("\n"); 
//}

//第二种
//#include <stdio.h>
//char *rstr(char* a)
//{
//    char *p1, *p2, t;
//    p2 = a;
//    p1 = p2;        //等同于p1=p2=a
//    while(*p2)
//    {
//        ++p2;
//    }
//    while(p1 < p2)
//    {
//        t = *p1;
//        *p1++ = *--p2;
//        *p2 = t;
//    }
//    return a;
//}
//
//int main()
//{
//    char a[] = "hello my big world.";
//    puts(rstr(a));
//}


//每瓶汽水1元，两个空瓶可以置换一瓶汽水，现在有20元，最多能喝多少瓶汽水
//#include <stdio.h>
//int main ()
//{
//	int money = 20;
//	int count = 20;
//	while(1)
//	{
//		if(money % 2 != 0)	//钱为奇数的算法
//		{
//			count += money - 1;
//			break;
//		}
//		else				//钱为偶数
//		{
//			money /= 2;		//每次两个瓶子换一瓶水
//			count += money;
//		}
//	}
//	printf("%d\n",count);
//	return 0;
//}

//实现一个函数，可以左旋字符串中的k个字符。
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//第一种
//#include<stdio.h> 
//#include<string.h> 
//void left_move(char *p, int n) 
//{ 
//    int i;  //循环移位，对需要旋转的i个字符按顺序进行旋转
//    int len = strlen(p); 
//    for (i = 0; i < n; i++) //外循环每次保存一个字符
//    { 
//        char tmp = p[0];  //将要旋转的一个字符保存起来，将后面的往前挪动一位
//        int j = 0; 
//        for (j = 0; j < len - 1; j++) 
//        { 
//            p[j] = p[j + 1]; 
//        } 
//        p[len - 1] = tmp;  //将保存起来的这个字符赋给最后一位，这样连续循环i次
//    } 
//}
//
//int main() 
//{ 
//    char arr[] = "abcdef"; 
//    int n = 0; 
//    scanf_s("%d", &n); 
//    left_move(arr, n); 
//    printf("%s\n", arr);   
//    return 0; 
//}

//第二种
//三步旋转法，先将要旋转的k个字符串逆序
//再将剩余的字符串逆序，再对整个字符串逆序就得到了旋转k个字符后的字符串
//#include<stdio.h> 
//#include<string.h> 
//void reverse(char *left, char *right) 
//{ 
//    while (left < right) 
//    { 
//        char tmp = *left; 
//        *left = *right; 
//        *right = tmp; 
//        left++; 
//        right--; 
//    } 
//} 
//void left_move(char *p, int n) //p是一个指针，指向字符串首地址
//{ 
//    int len = strlen(p); 
//    reverse(p, p + n - 1); //指针P到第n个逆序
//    reverse(p + n, p + len - 1); //剩余的到字符串结尾逆序
//    reverse(p, p + len - 1); //整个字符串逆序
//} 
//int main() 
//{ 
//    char arr[] = "abcdef"; 
//    int n = 0; 
//    scanf_s("%d", &n); 
//    left_move(arr, n); 
//    printf("%s\n", arr); 
//    return 0; 
//} 


//判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 ＝ AABCD和s2 = BCDAA，返回1，给定s1=abcd和s2=ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
//AABCD右旋两个字符得到CDAAB
#include<stdio.h>
#include <string.h>
void reserve(char *left, char*right)
{
    while (left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

void left_reserve(char arr[], int k)
{
    int len = strlen(arr) - 1;
    char *pstart = &arr[0];
    char *pend = arr + len;
    reserve(pstart, pstart + k - 1);
    reserve(pstart + k, pend);
    reserve(pstart, pend);
}

void right_reserve(char arr[], int k)
{
    int len = strlen(arr) - 1;
    char *pstart = &arr[0];
    char *pend = arr + len;
    reserve(pstart, pstart + len - k);
    reserve(pend - k+1, pend);
    reserve(pstart, pend);
}

int main()
{
    int k = 5;
    char arr[20]="ABCDEF";
    char arr2[20]="CDEFBA";
    char *p = arr;
    while (k)
    {
        left_reserve(arr, k);
        if (strcmp(arr, arr2) == 0)
        {
            printf("1\n");
            break;
        }
        right_reserve(p, k);
        if (strcmp(p, arr2) == 0)
        {
            printf("1\n");
            break;
        }
        k--;
    }
    if (0 == k)
    {
        printf("0\n");
    }
    system("pause");
}
//建议方法
//#include <stdio.h> 
//#include <string.h> 
//#include <assert.h> 
//int rotate(char *p, char *q) 
//{ 
//    assert(p != NULL && q != NULL); 
//    strncat(p,p,strlen(p)); 
//    if (strstr(p, q) == NULL) 
//    { 
//        return 0; 
//    } 
//    else 
//    { 
//        return 1; 
//    } 
//} 
// 
//int main() 
//{ 
//    char p[20] = "AABCD"; 
//    char *q = "BCDAA"; 
//    char r[20] = "abcd"; 
//    char *s = "ACBD"; 
//    printf("%d\n", rotate(p, q)); 
//    printf("%d\n", rotate(r, s)); 
//    return 0; 
//}