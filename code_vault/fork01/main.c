#include <stdio.h>
#include <string.h>
#include <unistd.h>	// fork, unistd.h is linux specific
			
// Morty Hawk 2023-03-31 Fri 03:31

int main(int argc, char **argv) {
    int id = fork();	// fork or dork thats the Q?
    sleep(4);	        // take a look at htop and F4 filter for a.out (the executable)
    printf("Hello from id: %d \n", id);
    sleep(4);

    if (id == 0) {
        printf("Hello from child process \n");
    } else {
	printf("Hello from the main process \n");
    }
    sleep(4);

    fork();
    printf("2 forks makes 4 pathways! \n");
    sleep(4);

    return 0;
}

