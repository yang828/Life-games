#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define cols 16
#define rols 16
void CreateArray(int a[cols][rols]){
	int i,j;
	srand(time(0));
	for(i=7;i<11;i++)
		for(j=7;j<11;j++)
			a[i][j]=rand()%2;
}


void PrintArray(int a[cols][rols] ){
    int i,j;
	for(i=0;i<cols;i++){
		for(j=0;j<rols;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}

void ChangeArray(int a[cols][rols]){
	int b[cols][rols]={0};
	int i,j,k,l,sum;
	for(i=1;i<cols-1;i++){
		for(j=1;j<rols-1;j++){
			sum=0;
			for(k=i-1;k<=i+1;k++)
				for(l=j-1;l<j+1;l++)
					sum+=a[k][l];
			if(sum==3)
				b[i][j]=1;
			else if(sum==2)
				b[i][j]=a[i][j];
		}
	}
	for(i=0;i<cols;i++)
		for(j=0;j<rols;j++)
			a[i][j]=b[i][j];
}

void TimeArray(){
	while((time(0)%10)!=0);		
}
void main(){
	int a[cols][rols]={0};
	int i;
	CreateArray(a);
	PrintArray(a);
	printf("\n\n\n");
	for(i=0;i<500;i++){
		TimeArray();
		ChangeArray(a);
		PrintArray(a);
		printf("\n\n\n");
	}
	TimeArray();
	ChangeArray(a);
	PrintArray(a);
	printf("\n\n\n");
}