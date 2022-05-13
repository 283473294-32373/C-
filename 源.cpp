#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
//同构数
//int myitoa(int, char*);
//char* right(char*, int length);
//int main()
//{
//	int a, t;
//	int len;
//	char as[10], rs[20];
//	printf("[1,10000]内的同构数：\n");
//	for (a = 1; a <= 10000; a++)
//	{
//		t = a % 10;
//		if (t != 1 && t != 5 && t != 6)
//			continue;
//		len = myitoa(a, as);
//		myitoa(a * a, rs);
//		if (strcmp(as, right(rs, len))==0);
//		printf("%s的平方为%s\n", as, rs);
//	}
//	return 0;
//}
//int myitoa(int num, char* s)
//{
//	int i, n = 0;
//	char ch;
//	while (num)
//	{
//		s[n++] = num% 10 + '0';
//		num = num / 10;
//	}
//	s[n] = '\0';
//	for (i = 0; i < n / 2; i++)
//	{
//		ch = s[i];
//		s[i] = s[n - i - 1] = ch;
//	}
//	return n;
//
//}
//char* right(char* ms, int length)
//{
//	int i;
//	for (; *ms; ms++)
//		for (i = 0; i < length; i++, ms--)
//			return ms;
//}




