#include <stdio.h>
#include <stdlib.h>
#include <string.h>
			
// Morty Hawk 2023-04-01 Sat

int main(int argc, char **argv) {
    char str[] = "Apples are good for your health";

    printf("str: %s \n", str );
    char to_find[] = "good";
    char* res = strstr(str, to_find);
    //res++;
    printf("res : %s \n", res );

    size_t len = strlen(to_find);
    printf("len=%lu \n", len);

    //res+4  = '\0';
    res = res + len;
    *res = '\0';
    res = res - len;
    printf("res : %s \n", res );

    return 0;
}

