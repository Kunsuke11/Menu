void Newgame(char a[3][3])
{   int inc=0;
    for (int i=0;i<3;i++)
    {
    	for (int j=0;j<3;j++)
    	{
    		a[i][j]=' ';
		}
	}
	if ((inc%2)==0) inc=1;
	else inc=0;
}
//void undo()
//{  }
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[3][3];
	int m,quit=3,inc=0;
	int i,j;printf("Press 'M' for menu script\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf("%c",&a[i][j]);
			if (a[i][j] == 'M')
			{
				printf("Menu:\n1.New Game\n2.Undo\n3.Quit\n");
				scanf("%d",&m);
				if (m==1)
				{
					Newgame (a);
				    break;
				}
				if (m==2)
				{
					//undo();
					break;
				}
				if (m==3)
				{
					printf("Are you sure you want to quit?!?\n");
                    printf("1.Yes\t2.No\n");
					while ((quit>2))
					{
					scanf("%d",&quit);
					if(quit==1) {exit(0);}
					else if (quit==2) 
					{
					printf("Game continue\n");
					inc -= 1;
					a[i][j]='0';
					if (j > 0 ) {j-=1;}
					else if (j=0) i-=1;
					}
					else printf("Invalid order\n");
					}
					break;
				}
			}
		}
	}
	return 0;
}
