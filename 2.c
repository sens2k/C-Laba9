#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int compare(char* a, char* b)
{
    int length = 0;
    while (*(a + length) && *(b + length))
    {
        if (*(a + length) == *(b + length))
            length++;
        else
            return length;
    }
    return length;
}

int len(char* s)
{
    int i = 0;
    while (*(s++))
        i++;
    return i;
}

void deltacopy(char* a, char* b, char* c)
{
    int idc = compare(a, b);
    a += idc;
    b += idc;
    for (; len(a); a++)
        *(c++) = *a;
    for (; len(b); b++)
        *(c++) = *b;
    *c = '\0';
}

void mixcopy(char* a, char* b, char* c)
{
    int idc = compare(a, b);
    a += idc;
    b += idc;
    for (; len(a) + len(b); a++, b++)
    {
        *(c++) = *a;
        *(c++) = *b;
    }
    *c = '\0';
}

int main()
{
    char a[] = "vell123";
    char b[] = "vell321";
    char c[10], d[10];
    printf("%s\n%s\n", a, b);
    printf("match --> %d\n", compare(a, b));
    printf("after:\na --> %d\nb --> %d\n\n", len(a) - compare(a, b), len(b) - compare(a, b));
    
    deltacopy(a, b, c);
    mixcopy(a, b, d);
    printf("delta >> %s\nmix >> %s\n", c, d);
}