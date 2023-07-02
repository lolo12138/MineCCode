#include <stdio.h>
#include<math.h>

//C语言实现1-10阶乘相加； 
int Factorial(int a)
{
	int i=1,j=1,mulSum=1,addSum=0;
	for(i;i<a+1;i++)
	{
		for(j;j<=i;j++)
		{
			mulSum*=j;
		}
		addSum+=mulSum;
	}
	return addSum;
}

int main()
{
	int n =4;
	int re=Factorial(n);
	printf("1-%d的阶乘相加是：%d",n,re);
	return 0;
}
