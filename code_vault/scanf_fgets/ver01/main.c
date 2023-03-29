#include <stdio.h>
#include "_01init.h"
#include "func1.h"
#include "func2.h"
#include "func3.h"

// Morty Hawk 2023-03-29 Wed 18:16

int main(int argc, char **argv) {
    int id;
    char message[256];

     int r = _01init(1, 2);
     printf(" _01init returns with:  r = %d \n\n", r);

    while (1) {

        printf("Input ID: ");
        scanf("%d", &id);
        fgetc(stdin);
        printf("Input message: ");
        fgets(message, 256, stdin);
        printf  (  "(%d) Sent message %s\n", id, message);

    }
    
	return 0;
}


