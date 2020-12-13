#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int len(char* s)
{
	int i = 0;
	while (*(s++))
		i++;
	return i;
}
void copy(char* s, char* s2, int len)
{
	for (int i = 0; i < len; i++)
		*(s2++) = *(s++);
}
int counter(char* s)
{
	int chars = 0, nums = 0;
	while (*(s++))
	{
		if (*s >= '0' && *s <= '9')
			nums++;
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
			chars++;
	}
	return nums;
}
void sort(char* s, char* strChars, char* strNums)
{
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
			*(strNums++) = *s;
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
			*(strChars++) = *s;
		s++;
	}
	*strNums = *strChars = '\0';
}

int main()
{
    char str[] = "lol1";
	char str2[4], Chars[100], Nums[100];

	printf("%d\n", len(str));
	//---------------------------------
	copy(str, str2, len(str));
	for (int i = 0; i < len(str); i++)
		printf("%c", str2[i]);
	printf("\n");
	//---------------------------------
	printf("%d\n",counter(str));
	//---------------------------------
	sort(str, Chars, Nums);
	for (int i = 0; i < len(Chars); i++)
		printf("%c", Chars[i]);

}

