#include<stdio.h>
#define HEIGHT 1000
float V(float length,float width);
int main()
{
	float length;
	float width;
	float volume;
	
	printf("请输入长方体的长：\n"); 
	scanf("%f",&length);
	
	printf("请输入长方体的宽:\n");
	scanf("%f",&width);
	
	volume=V(length,width);
	printf("长方体的体积为：");
	printf("%.2f\n",volume);
	return 0;
	
}
float V(float length,float width)
{
	float volume=length*width*HEIGHT;
	return volume;
}
