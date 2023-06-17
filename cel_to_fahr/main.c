#include <stdio.h>
#include <stdlib.h>

#define STEP 20

int main()
{
    const int lower = 0;
    int upper = 300;
    int cel;
    float fahr;

    printf("Celsius to Fahrenheit Converter\n");
    printf("Celsius\t\tFahrenheit\n");

    for(cel = lower; cel <= upper; cel += STEP){
        fahr = cel*9./5 + 32;
        printf("%d\t%g\n", cel, fahr);
    }
    return 0;
}
