#include <stdio.h>
#include "func1.h"
#include "func2.h"
#include "func3.h"

// Morty Hawk 2023-03-29 Wed 18:16

int main(int argc, char **argv) {
    int id;
    char message[256];
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


