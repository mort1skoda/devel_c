#include <stdio.h>
#include "_01init.h"
#include "func1.h"
#include "func2.h"
#include "func3.h"
#include <string.h>
#include "get_string_length.h"
// Morty Hawk 2023-03-29 Wed 18:16

int main(int argc, char **argv) {
    char text[100];
    printf("Type a line of text here: ");
    // the following 3 lines of code is::
    // NOT! recomended.....
    //scanf("%[^\n]s", text);
    //printf("You typed the line %s \n", text);
    //getchar();

        // Do NOT use scanf to read a line of text,
        // beacuse you can't specify a lenght
        // USE fgets !!!!!!!!!
    fgets(text, 100, stdin);

    int len = get_string_length(text);
    printf("len = %d \n", len);

    for (int i = 0; i <= len; i++) {
        printf("0x%02X ", text[i]);
    }

    puts("");
    text[strlen(text)-1] = '\0';
    for (int i = 0; i <= len; i++) {
        printf("0x%02X ", text[i]);
    }
    puts("");
    printf("You typed the line %s \n", text);


    //char text2[100];
    //printf("Type a line of text here: ");
    //scanf("%[^\n]s", text2);
    //printf("You typed the line %s", text2);

    return 0;
}

