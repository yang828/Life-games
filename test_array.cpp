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
	CreateArray(a);			//CreateArray()函数二维数组输出测试
	printf("CreateArray()函数二维数组输出测试：\n");
	*/

	/*
	ChangeArray(a);			//ChangeArray()函数二维数组输出测试
	printf("ChangeArray()函数二维数组输出测试：\n");
	*/

	/*
	initgraph(cols*size, rols*size);
	Shape(a);			//shape()函数二维数组输出测试
	printf("Shape()函数二维数组输出测试：\n");
	*/
	test_array(a);
}

