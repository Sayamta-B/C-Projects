/*Number guessing game*/
#include<stdio.h>
#include<time.h>
void check ();
void main()
{
	check();
}

void check ()
{
	int user_Guess, tries=0, random_Number;
	srand(time(NULL));    							//To get different random number everytime the program is executed
	random_Number=(rand()%100)+1;					//To get a random number from computer
	printf("%d", random_Number);
	printf("\t\t*************************************\n");
	printf("\t\t\tNUMBER GUESSING GAME\t\t\t\n");
	printf("\t\t*************************************\n");
	printf("\t\tGuess number between 1 to 100 to win.\n\t\tNote: You will be given only 5 TRIES to win\n\n\n");
	printf("->Enter any number between 1 to 100\n\n"); 	//User's Guess
	//Do-while loop to take user's guess and give feedback according to their guess
	do
	{
		if(tries==5)
		{
			printf("\n\t\t\tYOU ARE OUT OF TRIES.\n");
			printf("\t\t\t%d was the right answer.\t\n", random_Number);
			break;
		}
		
		printf("--------------------------------------------------------\n");
		printf("\tUser's Guess:");
		scanf("%d", &user_Guess);
		
		if(user_Guess>random_Number)
		{
			printf("\tThe number entered is GREATER.\n Try Again!\n\n");
			tries++;
		}
		else if(user_Guess<random_Number)
		{
			printf("\tThe number entered is SMALLER.\n Try Again!\n\n");
			tries++;
		}
		else
		{
			printf("\n\n\n\t++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("\t\t\t%d is correct guess!\n\t\tCongratualtions, YOU WON!!!\t\t", random_Number);
			printf("\n\n\t++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}
		
	}while(user_Guess!=random_Number );	
}