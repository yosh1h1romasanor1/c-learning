#include <stdio.h>

int main(void)
{ 
// print Fahrenheit-Celsius table
// for fahr = 0, 20, ..., 250
    float fahr1, celsius1;
    float lower, upper, step;

    lower = 0;
    upper = 250;
    step = 20;

    fahr1 = upper;
    while(fahr1 >= lower) {
        celsius1 = (5.0/9.0) * (fahr1-32.0);
        printf("%3.0f %6.1f\n", fahr1, celsius1);
        fahr1 = fahr1 - step;
    }

// print Celsius-Fahrenheit table
// for celsius = 0, 20, ..., 400

    int fahr2, celsius2;
    int atas, bawah, tingkat;

    bawah = 0;
    atas = 400;
    tingkat = 20;

    celsius2 = bawah;
    while(celsius2 <= atas) {
        fahr2 = 9 * (celsius2+32) / 5;
        printf("%d\t%d\n", celsius2, fahr2);
        celsius2 = celsius2 + tingkat;
    }

    return 0;
}

    