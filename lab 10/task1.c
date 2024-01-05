#include<stdio.h>
#include<stdlib.h>
int main(){
   int x,y,i,n;
    char ch;
	printf("enter value of x\n"); 
	scanf("%d",&x);
	printf("enter value of y\n");
    scanf("%d",&y);
	printf("starting(%d,%d)",x,y); 
	printf("enter size of N\n");
	scanf("%d",&n);
	char* ptr =(char*) malloc(n*sizeof(char));
	for(i=0;i<n;i++){
	scanf(" %c",(ptr+i));
	ch=*(ptr+i); 
		switch(ch){
		case 'L':
		case 'l':
		x--;
		break;
	    case 'R':
		case 'r':
		x++;
		break;
		case'U':
		case'u':
		y++;
		break;
		case'D':
		case'd':
		y--;
		break;
	}
}
	printf("after command coordinats are (%d,%d)",x,y);
}
