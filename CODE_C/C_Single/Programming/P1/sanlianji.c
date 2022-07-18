/*将 1, 2, ...9 共 9 个数分成 3 组，
分别组成 3 个三位数，且使这 3 个三位数构成 
1:2:3 的比例，试求出所有满足条件的 3 个三位数。*/

#include "stdio.h"

  
int main()
{
	int a,b,c,x1,x2,x3,data[20],k,flag,j,w;
	for(a=123;a<=333;a++)
	{
	b=2*a;
	c=3*a;	
	x1=a%10;//个位 
	x2=a/10%10;//十位 
	x3=a/100;//百位 
	k=1;//data[]  1---9位置放的是，a,b,c分离出来的每一位 
	data[k]=x1;
	k++;
	data[k]=x2;
	k++;
	data[k]=x3;
	k++; 
	x1=b%10;//个位 
	x2=b/10%10;//十位 
	x3=b/100;//百位  
	data[k]=x1;
	k++;
	data[k]=x2;
	k++;
	data[k]=x3;
	k++;
	x1=c%10;//个位 
	x2=c/10%10;//十位 
	x3=c/100;//百位 
	data[k]=x1;
	k++;
	data[k]=x2;
	k++;
	data[k]=x3;
	k++;
		flag=0;
		for(j=1;j<=9;j++)
		{
			if(data[j]==0)
			{flag=1;break;}
			for(w=j+1;w<=9;w++)
			if(data[j]==data[w])
			flag=1;
		}
		if(flag==0)
		printf("%d %d %d\n",a,2*a,3*a);
	}
	return 0;
 }
