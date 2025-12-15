#include<stdio.h>
int main()
{
	int score,pt;
	scanf("%d",&score);
	if (score<0)
	{
		printf("error score");
	}
	else
	{
		if (score>100)
		{
			printf("error score");
		}
		else
		{
			if (score>=68)
			{
				if (score>=85)
				{
					printf("A");
				}
				else
				{
					if (score>=75)
					{
						printf("B");
					}
					else
					{
						if (score>=68)
						{
							printf("C\n");
							pt=75-score;
							printf("B=%d",pt);
						}
					}
				}
			}
			else
			{
				
				if (score>=55)
				{
					printf("D");
				}
				else
				{
					printf("F");
				}
			}
		}
	}
	
	return 0;
}
