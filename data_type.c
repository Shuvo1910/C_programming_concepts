// data type:
// NAME                        KEYWORD                    BYTE                    FORMETE 
//                                                                                SPECIFIRE

// Intger           -          int                 -       4                   -       %d
// Character        -          char                -       1                   -       %c
// Float            -          float               -       4                   -       %f
// Double           -          double              -       8                   -       %lf
// Short Intger     -          short int           -       2                   -       %hd
// Unsigned Intger  -          unsigned int        -      2-4                  -       %u
// Bulian           -          bool                -        4                  -       %d

#include <stdio.h>
#include <stdbool.h> 

int main() {
    int age = 22;
    char section = 'A';
    float salary = 2000.05; 
    double bonus = 2000.12345;
    bool pass = false;

    printf("Age: %d\n", age);
    printf("Section: %c\n", section);
    printf("Salary: %f\n", salary);
    printf("Bonus: %lf\n", bonus);
    printf("Pass: %d\n", pass);
    
    return 0;
}