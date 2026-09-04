#include <stdio.h>

int main(void) {
    //lesson
    printf("\nPengujian suhu Fahrenheit ke Celsius - Materi\n");
    int fahr1; 
    for (fahr1 = 300; fahr1 >= 0; fahr1 = fahr1 - 20) {
        printf("%3d %6.1f\n", fahr1, (5.0/9.0) * (fahr1-32));
    }

    //self-trial
    printf("\nPengujian suhu Fahrenheit ke Celsius - Latihan\n");
    int fahr2;
    for (fahr2 = 500; fahr2 < 1000; fahr2 = fahr2 + 100) {
        printf("%3d %6.1f\n", fahr2, (5.0/9.0) * (fahr2-32));
    }

}