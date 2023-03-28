#include <stdio.h>
#include "getStr.h"

int main(){
	printf("Test 4 ubuntu program for getStr:\n");
	char* str;
	str = getStrHeap(5);
	printf("str=%s\n", str);
	
	return 0;
}

