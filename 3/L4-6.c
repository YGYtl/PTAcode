#include <stdio.h>
int main()
{
	int guess, max, i=0,k;
	int num;
	scanf("%d %d", &num, &max);
	while(1)
	{
		scanf("%d", &guess);
		i++;
		if(guess < 0)
		{
			break;
		}
		else if(guess > num)
		{
			printf("Too big\n");
		}
		else if(guess<num)
		{
			printf("Too small\n");
		}
		else{
			if(i <= 1)
			{
				printf("Bingo!\n");
				break;
			}
			else if(i>1 && i<=3)
			{
				printf("Lucky You!\n");
				break;
			}
			else{
				if(i<=max&&i>3)
				{
					printf("Good Guess!\n");
				    break;
				}
				else{
					printf("Game Over\n");
					break;
				}
	    	}
	    }
		}
		if(guess<0)
		    {
		    	printf("Game Over\n");
		}

	return 0;