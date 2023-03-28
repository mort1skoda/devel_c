// suckless: CFLAGS = -std=c99 -pedantic -Wall -Wno-deprecated-declarations -Os ${INCS} ${CPPFLAGS}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char* argv[]) {
    time_t secondsFromEpoch = time(NULL);
    srand(secondsFromEpoch);
    printf("  %d \n", rand() %   10);
    printf(" %d \n",  rand() %  100);
    printf("%d \n",   rand() % 1000);
    return 0;
}

