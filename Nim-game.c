#include <stdio.h>
#include "Nim-game.h"
#include <stdlib.h>
int main ()
{
	printf ("\n");
	welcome();
	int p1,p2,picks;
	scanNames();
	printf ("\nEnter the number of matches u want to start with : ");
	scanf ("%d",&matches);
	printf ("Number of picks(allowed) : ");
	scanf ("%d",&picks);
	//print();
	printf ("\n\n\t\t\t\t\t\tS\tT\tA\tR\tT\n\n");
	printf ("\nNumber of matches at the start : %d\n\n",matches);
	print();
	while (1)
	{
		pl(1,picks);
		if (winp1()==1)
			break;
		else if (winp1()==0)
			break;
			
		pl(2,picks);
		if (winp2()==1)
			break;
		else if (winp2()==0)
			break;
	}
	return 0;
}

