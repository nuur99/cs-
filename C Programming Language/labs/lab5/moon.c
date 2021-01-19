#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
	double altitude = 100; /*Meters */
	double velocity = 0; /*Meters per second */
	double fuel = 100; /* Kilograms */
	double power = 1.5; /* Acceleration per pound of fuel */
	double g = -1.63; /* Moon gravity in m/s^ */
	double burn; /* Amount of fuel to burn */
	bool valid;
  while(altitude > 0)
	{	
      do
	{
	valid = false;
	printf("How much fuel would you like to burn: ");
	scanf("%lf", &burn);
	
	if(burn < 0)
	{
		printf("You can't burn negative fuel\n");
	}
	else if(burn > fuel)
	{
		printf("You can't burn you don't have\n");
	}
	else if (burn <= 5)
	{
		printf("Burning %.1f kilograms of fuel\n", burn);
		valid = true;
		velocity = velocity + g + power * burn;
		altitude += velocity;
		fuel -= burn;
	}
	else if (burn > 5)
	{
		printf("burn too large\n");
	}
        }while(!valid); 
	printf("Altitude: %.2f\n", altitude);
	printf("Velocity: %.2f\n", velocity);
	printf("You have %.2f kilograms of fuel\n", fuel);
	printf("--------------------------------------\n");
	printf("Lunar Lander - (c) 2021, by <TomAndJerry>\n");
	}
}
