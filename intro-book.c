#include <stdio.h>

int main(void)
{

// print Fahrenheit-Celsius table
// for fahr = 0, 20, ..., 250
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 250;
    step = 20;

    fahr = upper;
    while(fahr >= lower) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr - step;
    }


// print Celsius-Fahrenheit table
// for celsius = 0, 20, ..., 400

    int fahr, celsius;
    int atas, bawah, tingkat;

    bawah = 0;
    atas = 400;
    tingkat = 20;

    celsius = bawah;
    while(celsius <= atas) {
        fahr = 9 * (celsius+32) / 5;
        printf("%d\t%d\n", celsius, fahr);
        celsius = celsius + tingkat;
    }

    return 0;
}


