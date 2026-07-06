#include <stdio.h>

// variable is a container.
// rules of variable:
// four item (Upper-case, Lower-case, digit and under_score)
// 1. always starts with alpthbate
// 2. do not start with number
// 3. "_" can be use between two part
// 4. do not start with special character
// 5. max 31 character

int main()
{
    int playscore = 95;
    printf("%d\n", playscore);

    // "\n" = new line or enter
    // "%d" = indecate interger value

    playscore = 200;
    printf("%d\n", playscore);

    const double PI = 3.1416;

    // set the variable value as constant (never will change)

    printf("%lf\n", PI);

    // "%lf" = indicate double value (point value)

    return 0;
}
