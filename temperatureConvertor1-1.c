#include<stdio.h>

/*print Fahrenheit-Celcius table
for fahr = 0, 20, ..., 300*/

int main() {
    

    int fahr, celsius;
    int lower, upper, step;

    lower = 0; /*lower limit of temperture scale*/
    upper = 300; /*upper limit*/
    step = 20;
    
    fahr = lower;
    while (fahr <= upper) 
    {
        celsius = 5 * (fahr-32) / 9;
        printf("%3d\t%6d\n", fahr, celsius); //added 3d to make it 3 digit wide and add 6d to make it 6 digit wide
        fahr = fahr + step;
    }
    

    return 0;
}