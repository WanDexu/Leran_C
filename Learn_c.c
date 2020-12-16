// shut down.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
//#include <iostream>
//#include <stdlib.h>
//#include <string.h>


////2020.12.14
//int main()
//{
//
//
//	return 0;
//}
//2020.12.13 结构体用于描述复杂的类型
//关键字 struct 
//struct book
//{
//	char Name[20];//C语言程序设计
//	float price;// 55.0元
//
//
//};//分号结束类型描述
////book B1;
//int main()
//{
//	//利用结构体类型创造一个对应类型变量
//	struct book B1 = {"C语言程序设计",55.0};
//	struct book* pd = &B1;
//	//结构体变量 . 结构体成员
//	//结构体指针变量 -> 结构体成员
//	printf("书名：%s\n", B1.Name);
//	strcpy(B1.Name,"xuezk");// strcpy 字符串拷贝（目的地，内容）
//	
//	printf("价格：%.2f\n", B1.price); //55.00
//	B1.price = 34.28;
//	printf("促销价格：%.2f\n", B1.price); //34.28
//	printf("书名：%s\n",pd->Name);
//	printf("价格：%.2f\n", pd->price); //34.28
//	return 0;
//}
////2020.12.13 指针占内存的大小
//int main()
//{
//	printf("%d\n",sizeof(char*));//win 32 -4 x64 -8
//	printf("%d\n",sizeof(int*));//win 32 -4 x64 -8
//	printf("%d\n",sizeof(float*));//win 32 -4 x64 -8
//	printf("%d\n",sizeof(double*));//win 32 -4 x64 -8
//	
//
//	return 0;
//}
//2020.12.13 指针
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", *pc);
//	printf("%d",sizeof(pc));
//}
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	printf("%p\n",&a);
//	printf("%p\n",p);
//	*p = 20;
//	printf("a=%d",a);
//
//	return 0;
//}
//int main()
//{
//    char input[20];
//    system("shutdown -s -t 120");
//    a:
//    printf("注意你的电脑将在60S后关机，输入：我是猪 可取消关机");
//    scanf("%s",input);
//    if (strcmp(input, "我是猪") == 0)
//    {
//        system("shutdown -a");
//    }
//    else
//    {
//        goto a;
//    }
//    return 0;
//}
//2020.12.15
//判断一个数是否是奇数？
//int main()
//{
//	int a;
//	printf("请输入一个数：\n");
//	scanf("%d", &a);
//	if (a % 2 != 0)
//	{
//		printf("%d 是奇数\n", a);
//
//	}
//	else {
//
//		printf("%d 不是奇数\n", a);
//	}
//	return 0;
//}
//2020.12.15
//输出1~100之间的所有奇数
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 0) 
//		{
//			printf("\n");
//		}
//		if (i % 2 != 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

////2020.12.15
////
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期日");
//		break;
//	default: break;
//	}
//	return 0;
//}

////2020.12.16
int main()
{
	//int ch;

	//while ((ch = getchar()) != EOF)// end of file 
	//{
	//	putchar(ch);
	//}
	char password[20] = { 0 };
	printf("请输入密码：\n");
	int ch;
	scanf("%s",password);
	while ((ch = getchar()) != '\n');//等待
	printf("是否保存密码？ Y/N?\n");
	int ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else {
		printf("确认失败\n");
	}
		return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
