#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int num(char* s)
{
    int count = 0;
    while (*s)
    {
        if (*s < '0' || *s > '9')
            if (*s == '.' || *s == ',')
                return count;
        count++;
        *s++;
    }
    return count;
}
int len(char* s)
{
    int i = 0;
    while (*(s++))
        i++;
    return i;
}
void reverse(char* s, char* c, int length)
{
    s += length - 1;
    for (int i = 0; i < length; i++)
        *(c++) = *(s--);
    *c = 0;
}
int main()
{
    char s[] = "19.21";
    char c[10];
    printf("int part --> %d\n", num(s));
    reverse(s, c, len(s));
    printf("reversed --> %s\n", c);
}

