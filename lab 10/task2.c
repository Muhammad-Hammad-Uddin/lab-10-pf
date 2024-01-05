#include<stdio.h>
#include<stdlib.h>
int* findintersection(int*ptr1,int*ptr2,int size1,int size2,int*Resultsize){
	int i,j,k;
	int*arr3=(int*) calloc(*Resultsize,sizeof(int));
	int flag=0;
	for(i=0;i<size1;i++){
		flag=0;
		for( j=0;j<size2&&flag==0;j++){
			if(*(ptr1+i)==*(ptr2+j)){
				for(k=0;k<*Resultsize;k++){
					if(*(ptr1+i)==*(arr3+k)){
						flag=1;
					}
				}
				if(flag==0){
					(*Resultsize)++;
					arr3=(int*)realloc(arr3,*Resultsize*sizeof(int));
					*(arr3 + *Resultsize - 1) = *(ptr1 + i);
                    flag = 1;
				}
			}
		}
	}
	 if (*Resultsize != 0) {
        return arr3;
    }
    else {
        return NULL;
    }
}
int main(){
	int s1,s2,i;
	int s3=0;
	printf("enter size of an array 1");
	scanf("%d",&s1);
	printf("enter size of an array 1");
	scanf("%d",&s2);
	int* arr1=(int*) calloc(s1,sizeof(int));
	int* arr2=(int*) calloc(s2,sizeof(int));
	for(i=0;i<s1;i++){
		printf("enter array 1 elements\n");
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<s2;i++){
		printf("enter array 2 elements\n");
		scanf("%d",&arr2[i]);
	}
	int *finalarray=findintersection(arr1,arr2,s1,s2,&s3);
	if(finalarray== NULL){
		printf("No intersection");
	}
	else{
		printf("Matched values are\n");
		for(i=0;i<s3;i++){
			printf("%d\n",finalarray[i]);
		}
	}
	free(arr1);
	free(arr2);
	free(finalarray);
	
}
