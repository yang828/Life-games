#include <stdio.h>
#include "life_games.cpp"
#define cols  8
#define rols  8
#define size  10

void test_array(int a[cols][rols])
{
	int i,j;
	for(i=0;i<8;i++){
		for(j=0;j<8;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}

void main()
{
	int a[cols][rols];
	/*
	CreateArray(a);			//CreateArray()������ά�����������
	printf("CreateArray()������ά����������ԣ�\n");
	*/

	/*
	ChangeArray(a);			//ChangeArray()������ά�����������
	printf("ChangeArray()������ά����������ԣ�\n");
	*/

	/*
	initgraph(cols*size, rols*size);
	Shape(a);			//shape()������ά�����������
	printf("Shape()������ά����������ԣ�\n");
	*/
	test_array(a);
}

