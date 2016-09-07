int matches;
typedef struct
{
	char player1[20];
	char player2[20];
}names;

names n;

#define True 1
#define False 0

void scanNames ()
{
	//names n;
	printf ("\n\n\t\t\tEnter the name of the first player : ");
	fgets (n.player1,20,stdin);
	printf ("\n\t\t\tEnter the name of the second player  : ");
	fgets (n.player2,20,stdin);
	printf ("\n");
//	return n;
}

void printset(int m)
{
	int i=0;
		for (;i<m;i++)
		{
			if (i%18==0) printf ("\n");
			printf ("\t(*) ");
		//printf (" | \t\r\r\t\t");
		}
		printf ("\n");
		for (i=0;i<m;i++)
		{
			printf ("\t |  ");
		}
		printf ("\n");
		for (i=0;i<m;i++)
		{
			printf ("\t |  ");
		}
		printf ("\n");
}
void print()
{
	int u,i=0,j;
	if (matches<=18)
	{
		printset(matches);
	}
	else
	{
		//printf ("\n");
		u=matches/18;
		j=matches%18;
		while (i<u)
		{
			printset(18);
			i++;
		}
		//printf ("\n");
		printset(j);
	}

}

void welcome ()
{
	printf ("                    \\##\\          /##/============================================================ **     \n");
	printf ("                     \\##\\        /##/            ******    *     *******                             **   \n");
	printf ("                      \\##\\      /##/               **      *       **                                  ** \n");
	printf ("                       \\##\\    /##/                **      *       **                                  ** \n");
	printf ("                        \\##\\  /##/                        ***                                         **  \n");
	printf ("                         \\##\\/##/                          *                                         **   \n");
	printf ("\n\n");
	//printf ("")
	printf ("\t\t   |^^^^^^^^^^^^^^^^^^^^^^^|^|___       \n");
	printf ("\t\t   |                          |\"\"\\____, \n");
	printf ("\t\t   | LET'S GO ... TIME FOR    |  |)   | \n");
	printf ("\t\t   |_____________A RIDE_______|__|)___| \n");
	printf ("\t\t   |(@)(@)\"\"\"\"\"\"\"\"\"\"\"\"\"\"**|(@)(@)**|(@) \n");
}

void checkpick(int *p,const int pc)
{
	while (*p<=0 || *p>pc)
	{
		*p=0;
		printf ("[!!] Error!!\nYour pick should be between 1 and max pick (%d) \n",pc);
		printf ("Try again !  : ");
		scanf ("%d",p);
	}
	while (*p>matches)
	{
		*p=0;
		printf ("[!!] Error!!\nYou're trying to cheat !!\nCan't pick up more than the availlable matches");
		printf ("\nTry again! : ");
		scanf ("%d",p);
	}
}

void pl(int p,int m)//m=max picks,p=player number,n=struct names
{
	int c;
	char *name;
	if (p==1)
		name=n.player1;
	else
		name=n.player2;

	printf ("\n\nTurn for  %s  \nYour pick : ",name);
	scanf ("%d",&c);
	checkpick(&c,m);
	printf ("\nPlayer %s\npicked up %d matches\nRemaining ... %d matches\n\n",name,c,(matches-c));
	//matches -=c;
	matches -=c;
	print();
}

int winp1 ()
{
	void graphics();
	//char name[40];name=names.player1;
	if (matches==1)
	{
		printf ("\n\n\n\t\t\t\t\t\t P L A Y E R %s \tW I N S !!!\n\t\t\t\t\t\t\tCONGRATULATIONS!!!! \n\n\n",n.player1);
		printf ("\t\t\t\tFOR %s\n =====>:\n",n.player2);
		graphics();
		return True;
	}
	if (matches==0)
	{
		printf ("\n\n\t\t\t\t Player %s\n\t\t\t\tLooses !!!!!!!!!!!!!!!\n\n\n",n.player1);
		graphics();
		return False;
	}
}

int winp2 ()
{
	void graphics();
	//char name[40];name=names.player2;
	if (matches==1)
	{
		printf ("\n\n\n\t\t\t\t\t\t P L A Y E R %s \tW I N S !!!\n\t\t\t\t\t\t\tCONGRATULATIONS!!! \n\n\n",n.player2);
		printf ("\t\t\t\tFOR PLAYER %s\n =====> :\n",n.player1);
		graphics();
		return True;
	}
	if (matches==0)
	{
		printf ("\n\n\t\t\t\t Player %s\n\t\t\t\tLooses !!!!!!!!!!!!!!!\n\n\n",n.player2);
		graphics();
		return False;
	}
}

void graphics ()
{
	printf ("    ***                       ,___,                                                                   \n");
	printf ("   *   *                      (o o)_____                                                              \n");
	printf ("    ***                       (___)     )\\                                                            \n");
	printf ("    | |                           ||---|| *                                                           \n");
	printf ("------------------------------------------------------------------------------------------------------\n\n\n\n");
//	printf ("")
}
