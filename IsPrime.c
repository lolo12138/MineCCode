//函数实现输出100-200的素数 
#include <stdio.h>

int is_prime(int a)
{
	int i=0;
	int k=1;
	for(i=2;i<a-1;i++)
	{
		if (a%i==0)
		{
			k=0;
			break;
		}
	}
	return k;
}

int main() 
{
	int a;
	int count=0;
	for(a=100;a<200;a++) 
	{
		int f=is_prime(a);
		if (1==f){
			printf("%d ",a);
			count++;
		}
	}
	printf("\n素数总共有：%d个",count);
	return 0;
}
