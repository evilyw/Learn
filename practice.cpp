// practice.cpp: 定义控制台应用程序的入口点。
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int my_strlen(const char* str);
int my_strcmp(const char* str1, const char* str2);

//  Today is Sunday
int main() {
//	char str[100];
//	char arr[100][30];
//
//	//int i, num = 0, word = 0;
//	int i,j,word = 0,num=0;
//	int m = 1,n=0;
//	gets_s(str);
//	int len = strlen(str);
//	/*for (i = 0; str[i] != '\0'; i++) {
//		if (str[i] == ' ') {
//			word = 0;
//		}
//		else if (word == 0) {
//			word = 1;
//			num++;
//		}
//	}
//	printf("%d", num);
//*/	
//	for (i = 0; str[i] != '\0'; i++) {
//		if (str[i] == ' '||i==0) {
//			arr[num - 1][n] = 0;
//			word = 0;
//		}
//		else 
//		{
//			if (word == 0) {
//				word = 1;
//				num++;
//				n = 0;
//			}
//			else
//			{
//				arr[num-1][n] = str[i];
//				n++;
//			}
//			
//		}
//	}
//	printf("%d", num);
	/*int length = strlen(str);
	for (i = length - 1; i >= 0; i--) {
		if (i == 0 || str[i - 1] == ' ')
		{
			for (j = i; ; j++) {
				if (j == length || str[j] == ' ')
				{
					break;
				}
				printf("%c", str[j]);
			}
			if (i)
				printf(" ");
		}
	}
	puts("");*/

	//for (i = 0; str[i] != '\0'; i++)
	//{
	//	n++;
	//	if (str[i] == ' '||i == len) 
	//	{
	//		m++;
	//		break;
	//	}
	//}

	char b[]="abcdefg";
	char a[] = "abc";
	char c[] = "ABC";
	int len = my_strlen(a);
	int result = my_strcmp(a, b);
	int result1 = my_strcmp(a, c);
	printf("%d\n", len);
	printf("%d\n", result);
	printf("%d\n", result1);
	return 0;
}


int my_strlen(const char* str) {
	int n;
	for (n=0; *str!='\0';n++) {
		str++;
	}
	return n;
}

int my_strcmp(const char* str1, const char* str2)
{
	while ((*str1 == *str2) && *str1 != '\0') {
		str1++;
		str2++;
	}
	if (*(unsigned char*)str1 > *(unsigned char*)str2) {
		return 1;
	}
	else if (*(unsigned char*)str1 < *(unsigned char*)str2) {
		return -1;
	}
	else {
		return 0;
	}
}

char my_stract() {
	return 0;
}

char my_strcpy() {
	return 0;
}

char my_strstr() {
	return 0;
}