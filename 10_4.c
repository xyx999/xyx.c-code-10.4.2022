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
//		printf("%d��һ������\n",a);
//	else
//		printf("%d����һ������\n",a);
//	getch();
//	return 0;
//}





//int main()
//{
//	int point =48;
//	//if (point<=100 && point>=90)
//	//	printf("�ɼ�����");
//	//else if (point<90 && point>=80)
//	//	printf("�ɼ�����");
//	//else if (point<80 && point>=60)
//	//	printf("�ɼ��ϸ�");
//	//else if (point<60)
//	//	printf("�ɼ����ϸ�");
//	if (point<60)
//	{
//		printf("�ɼ����ϸ�\n");
//		printf("��������Ϸ\n");
//	}
//	else
//	{
//	if (point<=100 && point>=90)
//		printf("�ɼ�����");
//	else if (point<90 && point>=80)
//		printf("�ɼ�����");
//	else if (point<80 && point>=60)
//		printf("�ɼ��ϸ�");
//	}
//	getch();
//	return 0;
//}
