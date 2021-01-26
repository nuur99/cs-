	#include <stdio.h>
	/*
	 * Name : tom and jerry
	 * Program to experiment with arrays
	 */
	#define NumMovies 10
	#define MaxGrosses 5
	int main()
	{
		double maxGross[MaxGrosses] = {500000, 1000000, 2000000, 4000000, 10000000};
		int highestGrossIndex = 0;
		double highestGross = 0;
		double gross[NumMovies] = {4999,1629735,2659234,2028036,510768,4633878, 3856195, 3171186, 1877585,4999.5};
		char *names[NumMovies] = {"Hall Pass", "UnKnown", "I Am Number Four", "The King's Speech",
					 "Just Go With It", "Gnomeo and Juliet", "Drive Angry",
					 "Justin Beiber: Never Say Never", "Big Mommas: Like Father, Like Son",
					 "True Grit"};
		double sum;
		int max[MaxGrosses];
		int i;
		int j;
		for(j=0; j<MaxGrosses; j++)
		{
	        max[j] = -1;
		for(i=0; i<NumMovies; i++)
		{
			if(i == 0 && gross[i] < maxGross[j])
			{
				max[j] = i;
				printf("max[%d] : %d\n", j, max[j]);
			}
			else if(i == NumMovies - 1 && gross[i] < maxGross[j])
			{
				max[j] = i;
				printf("max[%d] : %d\n", j, max[j]);
			}
			else if(i > 0 && i < NumMovies - 1 && gross[i] < maxGross[j])
			{
				max[j] = i;
				printf("max[%d] : %d\n", j, max[j]);
			}
		}
		}
		for(j=0; j<MaxGrosses; j++)
		{
		if(max[j] == -1)
		{
			printf("max[%d] : %d\n", j, max[j]);
			printf("No film made less than %f\n", maxGross[j]);
		}
		else
		{
			printf("max[%d] : %d\n", j, max[j]);
			printf("The Highest gross less than %f is %s at %d\n", maxGross[j], names[max[j]], max[j]);
		}
		}
	}

