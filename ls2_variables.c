#include <stdio.h>
#include <stdbool.h>

    /* Brief of this lesson
    Variables can be considered as a reuseable container for a value/data
    It behaves as if it were the value it contains
    
    int = whole numbers (4 bytes in modern systems)
    float = single-precision decimal number (4 bytes)
    double = double-precision decimal number (8 bytes)
    char = single character (1 byte)
    char[] = array of characters (size varies)
    bool = true or false (1 byte, requires <stdbool.h>)
    */

int main() {      
    int age = 25;
    int year = 2026;
    int quantities = 1;

    float gpa = 3.8531;
    float price = 19.223;
    float temparature = 32.0532;

    double pi = 3.14159265359;
    double e = 2.7182818285;

    // char contains the single letter in single quoute ''
    char grade = 'A';
    char symbol = '!';
    char currency = '$';

    // string is considered the series of character and will use double quote "" and name of variables will plus with straight brackets []
    char name[] = "Tien Dung";
    char favorite[] = "fried Chicken";
    char email[] = "abcxyz@gmail.com";

    //bool is the binary varibles, contains only true or false (1 or 0)
    bool isOnline = 1; // 1 is equall to True, also, false is equal to 0
    

    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %d X items\n", quantities);
    
    printf("Your gpa is %f\n", gpa);
    printf("Your gpa is %.1f\n",gpa); //use %.a to round into a number after dot

    printf("The price of this item is %f$ and the temparature today is %f celcius degree\n",price, temparature);

    // %lf is used for type variables double
    // default behavior of C will display 6 digits after dot if you use %lf
    printf("The value of PI constant is %.15lf\n",pi);
    printf("The value of e constant is %.4lf\n", e);

    printf("Your grade is %c\n", grade);
    printf("Your favorite symbol is %c\n", symbol);
    printf("The currency is %c\n",currency);

    printf("Hello %s\n", name);
    printf("Your favorite food is %s",favorite);
    printf("Your email address is %s\n", email);

    if(isOnline){
        printf("Your status on messenger is online\n");
        printf("%d\n",isOnline);
    }
    else{
        printf("Your status on messenger is offline\n");
        printf("%d\n",isOnline);
    }

    return 0;
}