// shut down.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _CRT_SECURE_NO_WARNINGS  1
#include <iostream>
#include <stdlib.h>
#include <string.h>
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

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
