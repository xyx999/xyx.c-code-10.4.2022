#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int main()
{
	int i= 1;
	while(i<=100)
	{
		if(i % 2==1)
			printf("%d ",i);
		i++;
			if (i % 20==0)
				printf("\n");
	}
	getch();
	return 0;
}

//int main()
//{
//	int a=6;
//	if (a % 2== 1)
//		printf("%d是一个奇数\n",a);
//	else
//		printf("%d不是一个奇数\n",a);
//	getch();
//	return 0;
//}





//int main()
//{
//	int point =48;
//	//if (point<=100 && point>=90)
//	//	printf("成绩优秀");
//	//else if (point<90 && point>=80)
//	//	printf("成绩良好");
//	//else if (point<80 && point>=60)
//	//	printf("成绩合格");
//	//else if (point<60)
//	//	printf("成绩不合格");
//	if (point<60)
//	{
//		printf("成绩不合格\n");
//		printf("不许玩游戏\n");
//	}
//	else
//	{
//	if (point<=100 && point>=90)
//		printf("成绩优秀");
//	else if (point<90 && point>=80)
//		printf("成绩良好");
//	else if (point<80 && point>=60)
//		printf("成绩合格");
//	}
//	getch();
//	return 0;
//}
