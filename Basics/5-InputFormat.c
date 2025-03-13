#include <stdio.h>

int main() {
    int num;
    float fnum;
    double dnum;
    char ch;
    char str[50];

    // Taking input for each data type
    printf("Enter an Integer                : ");
    scanf("%d", &num);

    printf("Enter a Floating-Point Number   : ");
    scanf("%f", &fnum);

    printf("Enter a Double Number           : ");
    scanf("%lf", &dnum);

    printf("Enter a Character               : ");
    scanf(" %c", &ch); // Space before %c to ignore previous newline

    printf("Enter a String                  : ");
    scanf("%s", str); // Reads single-word input (without spaces)

    // Displaying the inputted values
    puts("\n----- Inputted Values -----");
    printf("Integer          : %d\n", num);
    printf("Float            : %f\n", fnum);
    printf("Double           : %lf\n", dnum);
    printf("Character        : %c\n", ch);
    printf("String           : %s\n", str);

    return 0;
}

// Output :
----- Inputted Values -----
Integer          : 10
Float            : 432.000000
Double           : 23.430000
Character        : K
String           : JoyBoy
