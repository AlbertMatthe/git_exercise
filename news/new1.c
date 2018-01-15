#include "stdio.h"
#include <math.h>
	void main()
{ 
	int random,count,tall;
	double result,loop;
	//random 双色球号，loop 负反馈调节量，result 输出结果，count 负反馈调节计数器，tall 楼层高度
	for(;;){
	printf("please input ball number:");
	scanf("%d",&random);
	printf("please input tall:");
	scanf("%d",&tall);
	//获得相关计算初始数据
	result = (double)random;
	loop = 0.00;
	double ssr(int x,int y)
	{   
		for(count=0;count<=2;count++)
	    {
		   
		   result=2.16/(1+exp(-sin(x/5+loop)))-0.58;
		   loop=loop + 0.50 - result;
		}
	
	//计算方法
	result = result * y;
	//取整
	return result;
	}
	double z;
	printf("The first winning floor is %.2f\n",ssr(random,tall));
	z=ssr(random,tall);
	printf("The second winning floor is %.2f\n",ssr(z,tall));
    z=ssr(z,tall);
	printf("The third winning floor is %.2f\n",ssr(z,tall));
    int i;
	for(i=4;i<=12;i++)
		   {
			    z=ssr(z,tall);
	            printf("The %dth winning floor is %.2f\n",i,ssr(z,tall));
		   }
}
}