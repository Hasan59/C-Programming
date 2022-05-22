#include <stdio.h>
#include <string.h>

struct structure
{
    char a[50];
    int num;

    int age;
};
int main()
{

    struct structure s = {"Hi,This is Hasan Mahmud.", 50, 22};
    struct structure s2;
    s2 = s;
    strcpy(s2.a, "I live in Bangladesh.");
    s2.num = 100;
    s2.age = 80;

    printf("%s %d %d", s2.a, s2.num, s2.age);
}
