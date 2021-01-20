#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Name : tomandjerry
 * Program to draw playing cards
 */
void PrintResult(int card1, int card2, int suit1, int suit2);
void PrintCard(int card, int suit);
int main()
{
	int i;
	int card1;
	int suit1;
	int card2;
	int suit2;
	srand(time(NULL));
	for(i=0; i<2; i++)
	{
	int suit;
	int card;

	suit = rand() % 4;
	card = rand() % 13 + 1;
	if(i == 0)
	{
	 card1 = card;
	 suit1 = suit;
	 printf("card1 = %d, suit1 = %d\n", card1, suit1);
	 PrintCard(card1, suit1);
	}
	else
	{		
	 card2 = card;
	 suit2 = suit;
	 printf("card2 = %d, suit2 = %d\n", card2, suit2);
	 PrintCard(card2, suit2);
	}
	}
	PrintResult(card1, card2, suit1, suit2);
}
void PrintResult(int card1, int card2, int suit1, int suit2)
{
	if(card1 == card2)
	{
		if(suit1 == suit2)
		{
		printf("There is a tie");
		}
		else if(suit1 > suit2)
		{
			printf("Player 1 wins");
		}
		else
		{
			printf("Player 2 wins");
		}
	}
	else if(card1 == 2)
	{
		printf("Player 2 wins");
	}
	else if(card2 == 2)
	{
		printf("Player 1 wins");
	}
	else if(card1 == 1)
	{
		printf("Player 1 wins");
	}
	else if(card2 == 1)
	{
		printf("Player 2 wins");
	}
	else if(card1 > card2)
	{
		printf("Player 1 wins");
	}
	else if(card1 < card2)
	{
		printf("Player 2 wins");
	}
}
void PrintCard(int card, int suit)
{
	switch(card)
	{
	case 1:
		printf("ACE");
		break;
	case 11:
		printf("Jack");
		break;
	case 12:
		printf("QUEEN");
		break;
	case 13:
		printf("KING");
		break;
	default:
		printf("%d", card);
		break;
	}
	
	printf(" of ");
	
	switch(suit)
	{
		case 0:
			printf("Hearts\n");
			break;
		case 1:
			printf("Diamounds\n");
			break;
		case 2:
			printf("Spades\n");
			break;
		case 3:
			printf("Clubs\n");
			break;
	}
}
