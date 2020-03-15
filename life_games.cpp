#include <graphics.h>      
#include <conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define cols  64
#define rols  64
#define size 10
void CreateArray(int a[cols][rols]){  
	int i,j;
	srand(time(0));
	/*for(i=cols/2-2;i<cols/2+2;i++)
		for(j=rols/2-2;j<rols+2;j++)
			a[i][j]=rand()%2;*/
	for(i=0;i<cols;i++)
		for(j=0;j<rols;j++)
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
		line(0,i*size,cols*size,i*size);
	for(i=0;i<rols;i++)
		line(i*size,0,i*size,rols*size);
	for(i=0;i<cols;i++)
		for(j=0;j<rols;j++){
			if(a[i][j]==1)
				solidrectangle(i*size,j*size,i*size+size,j*size+size);
		}
	TimeArray(1000);
}

void main(){
	int a[cols][rols]={0};
	initgraph(cols*size, rols*size);
	CreateArray(a);
	Shape(a);
    while(1){
		ChangeArray(a);
		Shape(a);
	}
}
