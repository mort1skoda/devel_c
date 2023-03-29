#include <stdio.h>
#include "_01init.h"
#include "func1.h"
#include "func2.h"
#include "func3.h"
#include <string.h>
// Morty Hawk 2023-03-29 Wed 18:16

int main(int argc, char **argv) {
    int id;
    char message[256];

     int r = _01init(1, 2);
     printf(" _01init returns with:  r = %d \n\n", r);


    while (1) {
        printf("Input ID [0 to quit]: ");
        scanf("%d", &id); // leaves \n behind inside the input que (in stdin)
        // if id == 0 with break out of the while loop
        if ( id == 0 ) {
            break;
        }
        fgetc(stdin);
        printf("Input message: ");
        fgets(message, 256, stdin);
        message[strlen(message) -1] = 0; // get rid of trailing \n in the string message
        printf  (  "(%d) Sent message:  %s\n", id, message);
    }

	return 0;
}

