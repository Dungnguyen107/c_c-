#include <stdio.h>

int main() {
    // arithmetic operators = + - * / % ++ --

    int x = 10;
    int y = 3;
    int z = 0;

    // z = x + y;
    // z = x - y;
    // z = x * y;
    // z = x / y;
    // z = x % y;
    // x++; // x=x+1, x+=1
    // x--; // x=x-1,x-=1

    // augmented assignment operators

    // x+=3
    // x-=3
    // x*=3
    x/=2;

    printf("%d", x);

    // when using divde operator /, the dividing number would be less risk when being float
    // the result of int /int would be a int, but it is not include the digits after dot, so the program cannot store the value

    return 0;
}