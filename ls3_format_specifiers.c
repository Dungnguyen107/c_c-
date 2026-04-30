#include <stdio.h>

int main(){
    /* Format specifier
    Special token that begin with a % symbol, followed by a character that specifies the data types
    and optional modifiers (width, precision, flags). They control how data is displayed or interreted    
    */
    int age = 20;
    float height = 183.1232;
    char unit = 'm';
    char name[] = "Star Light";
    double pi = 3.14159265359;

    printf("%d\n",age);
    printf("%f\n",height);
    printf("%c\n",unit);
    printf("%s\n",name);
    printf("%lf\n",pi);

    // Modify Width, Flag
    int a = 1;
    int b = 10;
    int c = -100;

    printf("%3d\n",a);
    printf("%3d\n",b);
    printf("%3d\n",c);

    printf("%-3d\n",a);
    printf("%-3d\n",b);
    printf("%-3d\n",c);

    printf("%04d\n",a);
    printf("%04d\n",b);
    printf("%04d\n",c);

    printf("%+d\n",a);
    printf("%+d\n",b);
    printf("%+d\n",c);

    // Precision - how many digits are displayed
    float f1 = 19.2342;
    float f2 = 1.5000;
    float f3 = -21.3412;

    printf("%.1f\n", f1);
    printf("%+7.3f\n", f2);
    printf("%+15.6f\n", f3);

    return 0;
}