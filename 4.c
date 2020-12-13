#include <stdio.h>
#include <ctype.h>
#define _CRT_SECURE_NO_WARNINGS

void check_type(int s)
{
    int c = s;
    putchar(c);
    printf(" is --> ");
    if (isalpha(c))
        printf(" isalpha,");
    if (isdigit(c))
        printf(" isdigit,");
    if (isxdigit(c))
        printf(" isxdigit,");
    if (isalnum(c))
        printf(" isalnum,");
    if (iscntrl(c))
        printf(" iscntrl,");
    if (isprint(c))
        printf(" isprint,");
    if (ispunct(c))
        printf(" ispunct,");
    if (isspace(c))
        printf(" isspace,");
    if (isupper(c))
        printf(" isupper,");
    if (islower(c))
        printf(" islower,");
    putchar('\n');
}
int main()
{
    char string[] = "sadsaasd///asdasd..  ..sadas";
    char* s = string;
    while (*s)
        check_type(*(s++));
}