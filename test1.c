#define CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)

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
//#include<stdio.h>
//int main()
//{
//	int a=8,b=3,c;
//	c=a;
//	a=b;
//	b=c;//��һ���м��������ֵ
//	printf("a=%d\nb=%d\n",a,b);
//    return 0;
//}

//2. ����������ʱ���������������������ݣ������⣩
//#include <stdio.h>
//int main()
//{
//	int a=3,b=5;
//	a=a*b;
//	b=a/b;
//	a=a/b;//Ҳ�����üӼ�����a=a+b;b=a-b;a=a-b��
//	printf("a=%d\nb=%d\n",a,b);
//    return 0;
//}

//1.��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ������һ���������飬ʵ��һ�������������������������ֵ�˳��
//ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�
//��ѩ��git
//��һ�֡�����������������
//#include <stdio.h>
//void sort(int *p, int len)
//{
//    int *end = p;    //�м��û�н���������������Ҫ����
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

//�ڶ���
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
//        while (begin<end && arr[begin] % 2 != 0) //����ƶ�begin��ֱ����ָ��ż��
//        {
//            begin++;
//        }
//        while (begin<end && arr[end] % 2 == 0)   // ��ǰ�ƶ�End��ֱ����ָ������
//        {
//            end--;
//        }
//        if (begin<end)
//        {
//            a = arr[begin];     // ����ż��������
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

//�ռ�����
//#include<stdio.h>  
//#include<stdlib.h>  
//void adjust_arr(int arr[],int sz)  
//{  
//    int tmp=0;  
//    int left=0;  
//    int right=sz-1;  
//    while(left<right)  
//    {  
//        while((left<right)&&(arr[left]%2==1))   //�˴�left<rigft��ֹleft++�������  
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

//2.��һ����ά����.----���Ͼ���
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//1 2 3
//4 5 6
//7 8 9
//��һ��
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
//    printf("����Ϊ:\n");  
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
//        printf("%d�ڸ�������\n",num);  
//    }  
//    else  
//    {  
//        printf("%d���ڸ�������\n",num);  
//    }    
//    return 0;  
//}

//�ڶ���
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

//ʱ�临�Ӷ�С��O(N)
//#include<stdio.h>  
//#include<stdlib.h>  
//int find_num(int arr[][3],int rows,int cols,int key) //�����Ͻǿ�ʼ����  
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
//   /*�����½ǿ�ʼ���� 
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
//    printf("������һ��Ҫ���ҵ�����\n");  
//    scanf("%d",&key);  
//    ret=find_num(arr,3,3,key);  
//    if(ret==1)  
//    {  
//        printf("���ҳɹ���\n");  
//    }  
//    else  
//    {  
//        printf("����ʧ�ܣ�\n");  
//    }  
//    return 0;  
//} 

//3.һ���ַ����в��ҵ�һ��ֻ����һ�ε��ַ���
//Ҫ���Ӷ�ΪO(N).

//��һ�֣��������Σ����Ӷ�O(N^2)
//#include "stdio.h"
//#include "stdlib.h"
//char firstSingle(char * str)
//{
//	//ASCII����255���ַ�������һ��255��Ԫ�ص�ӳ�������ʼΪ0
//	int asc[255] = {0};
//	int i;
//	//�����ַ�����ͬʱ���ַ���ASCIIֵӳ�䵽�����±�ͳ�Ƴ��ִ�����
//	for(i=0;str[i]!='\0';i++)
//		asc[str[i]]++;
//	//�ٴα������ҵ���һ������һ�ε��ַ���Ϊ����
//	for(i=0;str[i]!='\0';i++)
//		if(asc[str[i]] == 1)
//			return str[i];
//	//���򷵻ؿ�
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

//O(n)��ʱ�临�Ӷȣ�O(1)�Ŀռ临�Ӷ�
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
//        printf("�������ַ�\n");  
//    }  
//} 
//  
//int main()  
//{  
//    char str[] = "a6arccdeff";  
//    findSingle(str,strlen(str));  
//    return 0;  
//}


//4.ģ��ʵ�����º�����
//strcpy
//��src��ַ��ʼ�Һ���'\0'���������ַ������Ƶ���dest��ʼ�ĵ�ַ�ռ�
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src) //constʹ�ں����в����޸�*srcԭ�ȵ�ֵ 
//{
//    char* strdest = dest;    //����ԭʼָ���ַ
//    assert(dest);    //���ζ���-->������������Ӵ��뽡׳�� 
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
//��src��ָ����ַ�������src��ַ��ʼ��ǰn���ֽڸ��Ƶ�dest��ָ�������У�������dest
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
//��src��ָ�ַ�����ӵ�dest��β��(����dest��β����'\0')
//#include <stdio.h>
//#define MAXNUM 200
//void mystrcat(char str1[],char str2[])
//{
//	int i,j;/*����str1�ĳ��ȣ�ѭ��������i��ֵ����str1�ĳ��ȼ�1*/
//	for(i=0; str1 [i]!='\0';i++)/*��str1�����str2��ÿ���ַ�*/
//	{
//		;
//	}
//	for(j=0; str2 [j]!='\0';j++)/*���һ��Ҫ�����ַ���������*/
//	{
//	  str1 [i+j]= str2 [j];
//	}
//	str1 [i+j]='\0';
//}
//
////void mystrcat(char *pstr1,char *pstr2)
////{
////	while(*pstr1)//��ָ��pstr1�����ַ���ĩβ
////	{
////		pstr1++;
////	}
////	while(*pstr1++=* pstr2++)//��pstr2�����pstr2��ÿ���ַ���ע��ѭ�����һ�ο�����'\0'
////	{
////		;
////	}
////}
//
//int main()
//{
//	char str1[MAXNUM],str2[MAXNUM];/*�����ַ�����str1��str2��str1Ҫ���������Ӻ���ַ���*/
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
//��src��ָ�ַ�����ǰn���ַ���ӵ�dest��β��
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
//    /*�� 
//    s�ַ�����ֻ��ǰn���ַ���׷�ӵ�d�ַ��������ƹ�����s�ַ����ĵ�һ���ַ������� 
//    d�ַ�����β�Ŀ��ַ���s�ַ����еĿ��ַ��������κ��ַ������ᱻ���ƣ�����׷�� 
//    һ�����ַ������ý�����档����ֵ��d�� 
//    */  
//    mystrncat(d,s,8);  
//    printf("%d\n",strlen(d));  
//    printf("%s\n",d);  
//    getch();  
//    return 0;  
//} 
//
//strcmp
//�Ƚ������ַ���
//��str1=str2���򷵻��㣻��str1<str2���򷵻ظ�������str1>str2���򷵻�����
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
//�Ƚϵ������ַ���ǰn���ַ������Ϊ0�����ȱȽ�ascֵ��
//#include<stdio.h>
//#include<assert.h>
//int mystrncmp(const char *s1,const char *s2,int n)
//{
//	assert((s1!=NULL)&&(s2!=NULL));
//	while(*s1!='\0'&&*s2!='\0'&&n)//�ַ���ǰ�沿�ֶ���ͬ
//	{
//		if(*s1-*s2>0)
//			return 1;
//		if(*s1-*s2<0)
//			return -1;
//		s1++;
//		s2++;
//		n++;
//	}
//	if(*s1=='\0'&&*s2!='\0')//˭��Ϊ'\0',˭��С
//	{
//		return -1;
//	}
//	if(*s2=='\0'&&*s1!='\0')
//	{
//		return 1;
//	}
//	return 0;              //ͬʱΪ'\0'  
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
//��Դsrc��ָ���ڴ��ַ����ʼλ�ÿ�ʼ����n���ֽڵ�Ŀ��dest��ָ���ڴ��ַ����ʼλ����
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
//��src��ָ�ڴ�������count���ֽڵ�dest��ָ�ڴ�����
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
//    if (dst <= src || (char *)dst >= ((char *)src + count))//��������������ص����ӵ͵���  
//    {  
//        while (count--)   
//        {  
//            *(char *)dst = *(char *)src;  
//            dst = (char *)dst + 1;  
//            src = (char *)src + 1;  
//        }  
//    }  
//    else                                                   //�����ص����ӵ͵���  
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

//1.�㷨ʵ��ѡ������
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

//2.�ݹ�ʵ��n��k�η�
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

//3.�õݹ鷽����һ��������λ����֮��
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
//    printf("������һ���Ǹ�������");  
//    scanf("%d",&n);  
//    printf("%d\n",Sum(n));  
//    return 0;  
//}

//1. ��10 �����������ֵ��
//#include <stdio.h>
//int main()
//{
//	 int i, MAX,a[10];
//	 printf("������ʮ������:\n");
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
//	 printf("ʮ���������ֵΪ��%d\n", MAX);
//	 return 0;
//}

//2. дһ���������ز����������� 1 �ĸ���
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

//1.������A�е����ݺ�����B�е����ݽ��н�����������һ����
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

//2.��ȡһ�������������������е�ż��λ������λ���ֱ��������������
    //�������32λ����λ����ѭ��ÿ�μ�2���ֱ�����桢ż���С���������
//����һ
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
//     printf("�����ж���������Ϊ:");
//     for(i=15;i>=0;i--)
//     {   
//          printf("%d ",arr1[i]);
//     }
//     printf("\nż���ж���������Ϊ:");
//     for(i=15;i>=0;i--)
//     {
//          printf("%d ",arr2[i]);
//     }
//	 printf("\n");
//	 return 0;
//}
//
//���������Ƽ���
//#include <stdio.h>
//int main()
//{	
//	int a[32];						//������32������λ��
//	int i = 0;
//	int data = 0;
//	printf("please enter data:");
//	scanf("%d", &data);
//	for (i = 0; i < 32; i++)
//	{
//		a[i] = data % 2;			//�����λ��
//		data /= 2;
//	}
//	printf("���ż�����У�\n");
//	for (i = 31; i >= 0; i -= 2)	//i = 31;ż�������λ��
//	{
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	printf("����������У�\n");
//	for (i = 30; i >= 0; i -= 2)	//i = 30;���������λ��
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}


//������
//#include<stdio.h>  
//#include<stdlib.h>  
//int main()  
//{  
//    int num, i;  
//    printf("please enter a number:\n");  
//    scanf("%d", &num);  
//    printf("ż������Ϊ:\n");  
//    for (i = 31; i >= 1; i -= 2)  
//    {  
//        if ((num >> i) & 0x1)  //��λ�루��0Ϊ0��ÿѭ��һ�δ�ӡһ��
//        {  
//            printf("1 ");  
//        }  
//        else
//		{
//            printf("0 ");
//		}
//    }  
//    printf("\n��������Ϊ:\n");  
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

//1.�����������Ӵ�С���
//#include<stdio.h>
//int main()
//{
//	int a,b,c,n;
//	printf("������������:\n");
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
//	printf("�������Ӵ�СΪ��\n");
//	printf("%d %d %d\n",a,b,c);
//    return 0;
//}

//2.�������������Լ����
//#include<stdio.h>
//void main()
//{
//	int m,n,p;
//	printf("��������������:\n");
//	scanf("%d%d",&m,&n);
//	while(m%n != 0)
//	   {
//		  p = m%n;
//		  m = n;
//		  n = p;
//	   }
//	printf("���Լ����%d\n",n);
//}

// ���һ��������ÿһλ
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	printf("������һ���Ǹ�������");
//	scanf("%d", &num);
//	while (num)
//	  {
//	   printf("%d\n",num%10);
//	   num = num/10;
//	  }
//	return 0;
//}

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ
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
//	printf("result��%lf\n",sum);
//	return 0;
//}

//��д������һ�� 1�� 100 �����������г��ֶ��ٴ����� 9
//#include <stdio.h>
//int main()
//{
//	int n=1;
//	int count=0;            /*count������9���ֵĸ���*/
//	while(n<100)
//	{          
//		if(n%10==9)/*��λ�Ϻ�����9��*/
//		{
//			count++;
//		}
//		 if(n-n%10==90) /*ʮλ�Ϻ�����9�ĸ���*/
//		 {
//			 count++;
//		 }
//		 n++;
//	}
//	printf("9���ֵĴ�����%d\n",count);
//	return 0;
//}

//1.ʹ��qsort����һ���������飬һ�����������飬һ���ַ������顣
//#include <stdio.h>  
//#include <stdlib.h>
//#include <string.h>
//
//int int_cmp ( const void *a , const void *b ) //������������
//{ 
//	return *(int *)a - *(int *)b; 
//} 
//
//int dou_cmp( const void *a , const void *b ) //��������������
//{ 
//	return *(double *)a > *(double *)b ? 1 : -1; 
//} 
//
//int str_cmp(const void * a,const void *b) //�ַ�����������  
//{  
//    return strcmp((char *)a,(char *)b) ; //�ֵ����С����  
//    //return strcmp((char *)b,(char *)a) ; //�ֵ���Ӵ�С  
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
//	qsort(s1,6,sizeof(s1[0]),int_cmp);//��s[i]��ĳ�ַ�����ÿ���С��sizeof()
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

//2.�Լ�ʵ��һ��bubble_sort��ð�����򣩣�������ɲ�ͬ�������ݵ�����
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

//������
//#include <stdio.h>
//void swap(int *a,int *b)//�ú������ڽ�������������ֵ
//{
//    int temp=*a;
//    *a=*b;
//    *b=temp;
//}
//
//void Bubble_Sort(int a[],int n)//ð��������Ĵ���
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
//        if(flag==0)//û�н������������
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

//�ṹ���ڴ����
//�ṹ���ڴ�������
//1.��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ����
//2.������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ����
//    //������ = ������Ĭ�ϵ�һ�������� �� �ó�Ա��С�Ľ�Сֵ��
//    VS��Ĭ�ϵ�ֵΪ8
//    linux�е�Ĭ��ֵΪ4
//3.�ṹ���ܴ�СΪ����������ÿ����Ա�������˵�һ����Ա����һ��������������������
//4.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ�������������
//�����������ṹ��������С��������������������Ƕ�׽ṹ��Ķ�
//��������������

//#include <stdio.h>
//#pragma pack(4)  //#pragma pack (value)ʱ��ָ������ֵvalue��
//#pragma pack()   //#pragma pack () ȡ��ָ�����룬�ָ�ȱʡ����
//
////16 4
//struct A{
//    char a;//1
//    double b;//8 ����һ����������һ������7,8+8=16
//    int c;//4 ��16�ǣ�4����������16+4=20��������һ�����Ϊ8,8����С����24��
//};
//
//struct B{
//    int a1;//4
//    char b1;//1 �ɶ���4+1=5
//    double c1;//8 ��һ��5����8�ı�������СΪ8 ��8+8=16
//    struct A obj;//24 �ɶ���16+24=40
//    struct A *objp;//4 �ɶ���40+4=44
//    struct A objarr[2];//48 ��һ��44����8�ı�������СΪ48 ��48+48=96
//    char *d1;//4 �ɶ���96+4=100��100����8�ı�������СΪ104��
//};
//
//int main()
//{
//	struct B obj;
//    printf("%d %d\n", sizeof(struct A), sizeof(struct B));//24  104
//}

//��д���룬��ʾ����ַ��������ƶ������м���
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
//        Sleep(100);//ÿ���м���һ�Σ�ͣ100���� 
//        arr2[left] = arr1[left]; 
//        arr2[right] = arr1[right]; 
//        left++; 
//        right--; 
//        printf("%s\n", arr2); 
//    }  
//    return 0; 
//}

//ʵ��һ��ͨѶ¼��
//ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ������
//�������Ա����䡢�绰��סַ
//
//�ṩ������
//1.    �����ϵ����Ϣ
//2.    ɾ��ָ����ϵ����Ϣ
//3.    ����ָ����ϵ����Ϣ
//4.    �޸�ָ����ϵ����Ϣ
//5.    ��ʾ������ϵ����Ϣ
//6.    ���������ϵ��
//7.    ����������������ϵ��
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
//void add_peo(pCon pcon)							//�����ϵ��
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
//void del_peo(pCon pcon)							//ɾ����ϵ��
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
//void find_peo(pCon pcon)						//������ϵ��
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
//void modify_peo(pCon pcon)						//�޸���ϵ��
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
//void show_peo(pCon pcon)						//��ʾ��ϵ��
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
//void clear_peo(pCon pcon)						//�����ϵ��
//{
//	pcon->count = 0;
//}
//
//void sort_peo(pCon pcon)//ð������ͨѶ¼��������ϵ��
//{
//    int i = 0, j = 0;
//    //int k = pcon->count;
//    if ((pcon->count) == 0)
//    {
//        printf("��ͨѶ¼��û����ϵ��!\n");
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
//void show_menu()							//��ʾ����
//{
//	printf("************************\n");				
//	printf("*  1:���    2:ɾ��    *\n");
//	printf("*  3:����    4:�޸�    *\n");
//	printf("*  5:��ʾ    6:���    *\n");
//	printf("*  7:����    0:�˳�    *\n");
//	printf("************************\n");
//}
//int main()
//{
//	struct Contact my_contact;					//������ϵ����
//	int input = 1;
//	my_contact.count = 0;						//��ϵ��������ʼ��
//	while(input)							//ÿ�ν���ѭ��
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


//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
//ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	 char key[] ="123456";
//	 char input[10];
//	 int i=0;
//	 for (i=0;i<3;i++)
//	 {
//		printf("����������:");
//		scanf("%s",input);
//		if (strcmp(key,input)==0)//strcmp�Ƚ��ַ�������str1=str2���򷵻��㣻
//		{
//			break;
//		}							  
//		else					//��str1<str2���򷵻ظ�������str1>str2���򷵻�������
//		{
//			printf("�����������\n");
//		}
//	 }
//	 if(i==3)
//	 {
//		 printf("������������˳�ϵͳ\n");
//	 }
//	 else
//	 {
//		 printf("��¼�ɹ�\n");
//	 }
//	 return 0;
//}


//��5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B��һ���ҵ�����
//Bѡ��˵���ҵڶ���E���ġ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ������������
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


//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭������
//#include <stdio.h> 
//int main() 
//{ 
//    char killer; 
//    for(killer='A'; killer<='D'; killer++)//���������ASCII ��A-D����ѭ���ͱȽ� 
//    { 
//        //����ֱ��Ӧÿ���˶�����  ����A ��C     ��D    ����D 
//        if (((killer!='A') + (killer=='C') + (killer=='D') + (killer!='D'))==3) 
//        { 
//			//����3��ʾ������˵�滰
//            printf("%c������\n",killer); 
//            break; 
//        } 
//    } 
//    return 0; 
//} 


//C��C++ע��ת��
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

//����Ļ�ϴ�ӡ�������
//#include <stdio.h>
//int main ()
//{
//	int i,j;
//	int n=0;
//	int a[17][17]={0,1};
//	while(n<1 || n>16)
//	{
//		printf("������������ǵ�������");
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

//�ٴα�д���ֲ���
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
//        printf("û���ҵ�\n");
//    }
//    else
//    {
//        printf("�ҵ��ˣ��±��ǣ�%d\n",ret);
//    }
//	return 0;
//}

//��ɲ�������Ϸ
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
//		printf( "��ѡ��\n" );
//		printf( "1 ��ʼ��Ϸ\n" );
//		printf( "0 �˳���Ϸ\n" );
//		scanf( "%d", &start);
//		switch (start)
//		{
//			case 1:
//			{
//				printf( "��Ϸ��ʼ\n" );
//				srand(time( NULL));
//				num = rand() % 100;
//				input = 0;
//				while (1)
//				{
//					printf( "��¶��٣�" );
//					scanf( "%d", &input);
//					if (input > num)
//						printf( "��´���\n" );
//					else if (input < num)
//						printf( "���С��\n" );
//					else
//					{
//						printf( "��¶��ˣ�\n" );
//						break;
//					}
//				}//�������break�Ļ���һֱ��whileѭ���ڣ���ֹ����
//			}
//			case 0:
//				exit( EXIT_FAILURE);
//			default:
//				printf( "ѡ�����\n" );
//				break;
//		}
//	}
//	return 0;
//}

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣����磺2+22+222+2222+22222
//#include<stdio.h>
//int main()
//{
//    int a=0;
//    int Sn=0;
//    printf("������һ��������\n");
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

//��дһ���������ӱ�׼�����ȡCԴ���룬
//����֤���еĻ����Ŷ���ȷ�ĳɶԳ���
//#include <stdio.h>
//int main()
//{
//	char a;
//	int count=0;
//	while((a=getchar()) != '\n')//���ΪEOF���䲻������ƥ�䡱
//	{
//		if(a=='{')//������{ʱ��������+1
//		{
//			count++;
//		}
//		if(a=='}' && count == 0)//������}��������Ϊ0�ˣ������ƥ�䣬��Ϊ}��{ǰ��
//		{
//			printf("��ƥ��\n");
//			return 0;
//		}
//		if(a=='}' && count != 0)//������}�Ҽ�������Ϊ0ʱ��������-1
//		{
//			count--;
//		}
//	}
//	if(count == 0)
//	{
//		printf("ƥ��\n");
//	}
//	else
//	{
//		printf("��ƥ��\n");
//	}
//	return 0;
//}

//���0��999֮������С�ˮ�ɻ����������
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
//	char a = "�Ұ���";
//	char b;
//	printf("������:\n");
//	scanf("%c",&b);
//	if(b == a)
//	{
//		printf("��Ҳ���㣬�װ��ģ�\n");
//	}
//	else
//	{
//		printf("����������ˣ�\n");
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
//		printf("My dear, I love you too��\n");
//	}
//	else
//	{
//		printf("Two dog, you have become��\n");
//	}
//	return 0;
//}


//����Ļ���������ͼ����
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
//	for(i = 1;i <= 7;i++)//�ȴ�ӡ�ϱߵ�����
//	{
//		for(j = 1;j <= 7 - i;j++)//����Ҫ��ӡ�Ŀո�����
//		{
//			printf(" ");
//		}
//		for(k = 1;k <= 2 * i - 1;k++) //����Ҫ��ӡ���Ǻ���
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for(i = 1;i <= 6;i++)//��ӡ���������
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

//ʹ�ú���ʵ���������Ľ�����
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
//	int ret1=15^8;//����2��ƽ����2��������Χ����õ���Сֵ
//	//int ret2=15|10;//��������������������������õ��ϴ�ֵ
//	//int ret3=15^10;//��������������������������õ���ֵ
//	printf("%d\n",ret1);
//	//int end=0;
//	//end=GetTickCount();//��ϵͳ��������ǰ����ʱ��
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

//�жϴ�С��
#include <stdio.h>

int is_system()
{
	union A{
		int a;
		char c;
	}obj;
	obj.a = 1;
	if(obj.c == 1){
		return 1;//data is С��
	}
	return 0;//���

	//int a = 1;
	//if(*((char*)&a) == 1){
	//	return 1;//С��
	//}
	//return 0;
}

int main ()
{
	printf("%d\n",is_system());
	return 0;
}