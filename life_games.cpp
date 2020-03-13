#include <graphics.h>      
#include <conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define cols 16
#define rols 16
void CreateArray(int a[cols][rols]){  
	int i,j;
	srand(time(0));
	for(i=7;i<11;i++)
		for(j=7;j<11;j++)
			a[i][j]=rand()%2;
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

void TimeArray(int a){
	Sleep(a);
}

void Shape(int a[cols][rols]){
	int i,j;
	setbkcolor(WHITE);
	cleardevice();
	setcolor(BLACK);
	setfillcolor(BLACK);
    for(i=0;i<cols;i++)
		line(0,i*40,cols*40,i*40);
	for(i=0;i<rols;i++)
		line(i*40,0,i*40,rols*40);
	for(i=0;i<cols;i++)
		for(j=0;j<rols;j++){
			if(a[i][j]==1)
				solidrectangle(i*40,j*40,i*40+40,j*40+40);
		}
	TimeArray(1000);
}

void main(){
	int a[cols][rols]={0};
	initgraph(cols*40, rols*40);
	CreateArray(a);
	Shape(a);
    while(1){
		ChangeArray(a);
		Shape(a);
	}
}
