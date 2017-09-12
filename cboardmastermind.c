#include  <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <time.h> 
 
int  main()
{
	char  master[8]={0x00};
	char  guess[8]={0x00};
	int   guesses, broken, match, almost, i, n;
 
	//Random generator 
	srand(time(0)); //use current time as seed for random generator
        int numArray[10] = {0,1,2,3,4,5,6,7,8,9};
        int output[4];
        int v;

        int randVal;
        for (int t = 0; t < 4; t++)
        {
                randVal = rand() % (10-t);
                output[t] = numArray[randVal];
                numArray[randVal] = numArray[9-t];
        }
        //printf("%d%d%d%d\n", output[0], output[1], output[2], output[3]);
	char number[5];
	sprintf(number,"%d%d%d%d\n", output[0], output[1], output[2], output[3]); 
	//printf("%s\n", number);
	 
      // return 0;	
	
	 
//	do 
//	{
//		printf("Please enter your master  key :");
//		fgets(master,8,stdin);
//	}
//		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
//	printf("%d\n", master[8]);
	while ( strlen(number)==0 );
     	//while (master < 1000 || 9999 < secret) 
	for( guesses=1; guesses<100;  guesses++ )
	{
		printf("Please enter your guess  :");
		fgets(guess,  8,stdin);

		match = 0;
    		almost = 0;
    		for( n=0; n<strlen(guess); n++ ) 
    		{
    			for( i=0; i<strlen(number);  i++)
			{
    				if( guess[n]==number[i] )
    				{
    					if( n==i )
    						match++;
    						else
    							almost++;
    				}
    			}		
    		}
     
 
	if( match==strlen(number) ) 
	{
		broken = 1;
		break;
    	}
    		else 
		{
			printf(" Red Mark = %d, White Mark =  %d\n", (match-1), almost );
		}
	}
 
 
	if( broken ) 
	{    
    		printf("You win! End of game.. you took  %d guesses \n",guesses);
 
 	}
    		else 
		{
 			puts(" Try again...\n");
		}
    return 0;
}
