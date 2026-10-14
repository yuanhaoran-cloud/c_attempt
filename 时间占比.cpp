#include<stdio.h>
#define TotalNumber 8760
int main()
{
	float Time_percentage;
	float Time;
	printf("请输入已过去的小时数：");
	scanf("%f",&Time); 
	Time_percentage = (Time/TotalNumber);
	printf("一年已经过去:%f",Time_percentage);
	return Time_percentage;
}

