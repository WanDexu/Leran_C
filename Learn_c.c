// shut down.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
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
//2020.12.13 �ṹ�������������ӵ�����
//�ؼ��� struct 
//struct book
//{
//	char Name[20];//C���Գ������
//	float price;// 55.0Ԫ
//
//
//};//�ֺŽ�����������
////book B1;
//int main()
//{
//	//���ýṹ�����ʹ���һ����Ӧ���ͱ���
//	struct book B1 = {"C���Գ������",55.0};
//	struct book* pd = &B1;
//	//�ṹ����� . �ṹ���Ա
//	//�ṹ��ָ����� -> �ṹ���Ա
//	printf("������%s\n", B1.Name);
//	strcpy(B1.Name,"xuezk");// strcpy �ַ���������Ŀ�ĵأ����ݣ�
//	
//	printf("�۸�%.2f\n", B1.price); //55.00
//	B1.price = 34.28;
//	printf("�����۸�%.2f\n", B1.price); //34.28
//	printf("������%s\n",pd->Name);
//	printf("�۸�%.2f\n", pd->price); //34.28
//	return 0;
//}
////2020.12.13 ָ��ռ�ڴ�Ĵ�С
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
//2020.12.13 ָ��
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
//    printf("ע����ĵ��Խ���60S��ػ������룺������ ��ȡ���ػ�");
//    scanf("%s",input);
//    if (strcmp(input, "������") == 0)
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
//�ж�һ�����Ƿ���������
//int main()
//{
//	int a;
//	printf("������һ������\n");
//	scanf("%d", &a);
//	if (a % 2 != 0)
//	{
//		printf("%d ������\n", a);
//
//	}
//	else {
//
//		printf("%d ��������\n", a);
//	}
//	return 0;
//}
//2020.12.15
//���1~100֮�����������
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
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
//		break;
//	case 6:
//		printf("������");
//		break;
//	case 7:
//		printf("������");
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
	printf("���������룺\n");
	int ch;
	scanf("%s",password);
	while ((ch = getchar()) != '\n');//�ȴ�
	printf("�Ƿ񱣴����룿 Y/N?\n");
	int ret = getchar();
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else {
		printf("ȷ��ʧ��\n");
	}
		return 0;
}

// ���г���: Ctrl + F5 ����� >����ʼִ��(������)���˵�
// ���Գ���: F5 ����� >����ʼ���ԡ��˵�

// ����ʹ�ü���: 
//   1. ʹ�ý��������Դ�������������/�����ļ�
//   2. ʹ���Ŷ���Դ�������������ӵ�Դ�������
//   3. ʹ��������ڲ鿴���������������Ϣ
//   4. ʹ�ô����б��ڲ鿴����
//   5. ת������Ŀ��>���������Դ����µĴ����ļ�����ת������Ŀ��>�����������Խ����д����ļ���ӵ���Ŀ
//   6. ��������Ҫ�ٴδ򿪴���Ŀ����ת�����ļ���>���򿪡�>����Ŀ����ѡ�� .sln �ļ�
