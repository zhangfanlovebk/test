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
//*�����½ǿ�ʼ���� 
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
        printf("�������ַ�\n");  
    }  
} 
  
int main()  
{  
    char str[] = "a6arccdeff";  
    findSingle(str,strlen(str));  
    return 0;  
}


//4.ģ��ʵ�����º�����
//strcpy

//strncpy

//strcat

//strncat

//strcmp

//strncmp

//memcpy

//memmove
