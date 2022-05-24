#include <stdio.h>
int main()
{
    int x, y, *p, *q;
    x = 10, y = 12;
    p = &x, q = &y;
    *p = *q;
    printf("y=%d %d %d", y, *q, *p);
}