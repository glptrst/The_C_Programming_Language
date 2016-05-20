#include <stdio.h>

/* print Celsius-Fahrenheit table
   for celsius = 0, 20, ..., 300; */
int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */ 

	printf("-----Celsius-----Fahrenheit-----\n");

	celsius = lower;
	while (celsius <= upper) {
		fahr = celsius / (5.0 / 9.0) + 32 ;
		printf("      %3.0f       %6.1f\n", celsius, fahr);
		celsius = celsius + step;	
	}
}
