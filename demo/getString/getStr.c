#include "getStr.h"
#include <stdlib.h>

char* getStrHeap(const int MaxLen){
	char* s = (char*)malloc(MaxLen+1);

	for(int i = 0; i < MaxLen; i++){
		s[i] = 'a'+i;
	}
	s[MaxLen] = '\0';

	return s;
}

