#include <stdio.h>
#include<math.h>

//函数实现有序数组中查找特定值，二分查找，折半查找 
int binary(int a[],int f,int sz)
{
	//***[ 易错点]***  int sz=(sizeof a)/(sizeof a[0]);  
	int left=0;
	int right=sz-1;
	while(left<=right)
	{
		int mid=(left+right)/2;
		if (a[mid]<f)
		{
			left =mid+1;
		}
		else if(a[mid]>f)
		{
			right =mid-1;
		}
		else
		{
			return mid;	
		}	
	}
	return -1;
	
} 

int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int f=1;
	int sz=sizeof(a)/sizeof(a[0]);
	int re=binary(a,f,sz);
	if (re==-1)
	{
		printf("找不到数字");	
	}
	else
	{
		printf("找到了下标是：%d",re);
	}
	
	return 0;
}
