#include<stdio.h>
#include<stdlib.h>
int main(){
	int hits=0;
	int misses=0;
	int turns=10;
	int shipsremaining=0;
	int i,j,x,y;
	char** board=(char**)calloc(6,sizeof(char*));
	for(i=0;i<6;i++){
	board[i] = (char*)calloc(6,sizeof(char));
	}
	printf("\nInput Gameboard(S or E)\n");
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			printf("(%d,%d)\n",i,j);
			scanf(" %c",&board[i][j]);
			if(board[i][j]=='S'){
			shipsremaining++;
			}
		}
	}
	for(i=0;i<turns;i++){
		printf("Input x & y coordinates: \n");
		scanf("%d %d",&x,&y);
		if(board[x][y]=='S'){
			printf("hit\n");
			shipsremaining--;
			
			turns--;
		}
		else{
		printf("Misses\n");
		misses++;
	}
	}
	
	for(i=0; i<6;i++)
	{
		for (j=0; j<6; j++)
		{
			
			printf(" %c",board[i][j]);
			
			
		}
		printf("\n");
	}

	printf("GAME OVER\n");
	printf("Missile Hits: %d\n",hits);
	printf("\nMissile misses: %d\n",misses);
	printf("\nRemaining Ships: %d\n",shipsremaining);
	printf("\nRemaining turns: %d\n",turns);
	
	if(shipsremaining == 0){
		printf("\nCongrats! You Won");
	}
	else
	{
		printf("\nBOT Won");
	}
	return 0;
}

