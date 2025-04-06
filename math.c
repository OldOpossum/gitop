#include <math.h>
#include <stdio.h>

int main()
{
    double x = 3.3, y = 1.1;

    printf(
        "Ceil of %.1lf = %.1lf \\nFloor of %.1lf = %.1lf\\n",
        x, ceil(x), x, floor(x));

    printf("%.1lf raised to the power %.1lf = %.1lf\\n", x,
           y, pow(x, y));

    return 0;
}

