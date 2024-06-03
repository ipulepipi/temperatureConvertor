#include<stdio.h>

/*print Fahrenheit-Celcius table
for fahr = 0, 20, ..., 300*/

int main() {
    

    float fahr, celsius;
    float lower, upper, step;

    lower = 0; /*lower limit of temperture scale*/
    upper = 300; /*upper limit*/
    step = 20;
    
    printf("Fahrenheit to Celcius\n\n");
    fahr = lower;
    while (fahr <= upper) 
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius); //added 3d to make it 3 digit wide and add 6d to make it 6 digit wide
        fahr = fahr + step;
    }
    

    return 0;
}