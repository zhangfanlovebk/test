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
#include <stdio.h>  
#include <stdlib.h>
#include <string.h>

int int_cmp ( const void *a , const void *b ) //整形数组排序
{ 
	return *(int *)a - *(int *)b; 
} 

int dou_cmp( const void *a , const void *b ) //浮点型数组排序
{ 
	return *(double *)a > *(double *)b ? 1 : -1; 
} 

int str_cmp(const void * a,const void *b) //字符串数组排序  
{  
    return strcmp((char *)a,(char *)b) ; //字典序从小到大  
    //return strcmp((char *)b,(char *)a) ; //字典序从大到小  
}
//int str_cmp( const void *a , const void *b ) 
//{ 
//	return *(char *)a - *(char *)b; 
//} 

int main()  
{   
	int i =0;
    int s1[6]={13,4,834,234,5,66};
	double s2[6]={2.78,7.92,2.00,13.2,732.6,79.12};
	char s3[6][6]={"d","gs","jr","a","nad","wef"};  
	qsort(s1,6,sizeof(s1[0]),int_cmp);//用s[i]表某字符串，每组大小是sizeof()
	for(i=0;i<6;i++)
	{
        printf("%d ",s1[i]);
	}
	printf("\n");
	qsort(s2,6,sizeof(s2[0]),dou_cmp);
	for(i=0;i<6;i++)
	{
		printf("%lf ",s2[i]);
	}
	printf("\n");
	qsort(s3,6,sizeof(s3[0]),str_cmp);
	for(i=0;i<6;i++)
	{
		printf("%s ",s3[i]);
	}
	printf("\n");
    return 0;  
} 


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
//	int arr[] = {45,4,3,23,34,4,45,5,6,75,68,9}; 
//	int len = sizeof(arr) / sizeof(arr[0]);
//	show(arr, len);
//	bubbleSort(arr, len, sizeof(int), intCmp);
//	show(arr, len);
//	return 0;
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

