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
	for(count=0;count<=2;count++)
	   {
		   result=2.16/(1+exp(-sin(result/5+loop)))-0.58;
		   loop=loop + 0.5 - result;
	   }
	//计算方法
	result = result * tall;
	//取整
	printf("The winning floor is %f \n",ceil(result));
	}
}