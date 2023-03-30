#include "_01init.h"
#include <stdio.h>

int _01init(int x, int y){
	printf("inside:   _01init(int x, int y) \n");

	int a;
	a = 0;
	a++;
	return x + y + a;
}

