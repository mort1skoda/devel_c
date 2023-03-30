#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "_01init.h"
#include "func1.h"
#include "func2.h"
#include "func3.h"
#include "get_string_length.h"
// Morty Hawk 2023-03-29 Wed 22:54

int main(int argc, char **argv) {
    printf("dim13_org/01openCloseConnection \n");
    
    #include <X11/Xlib.h>

    Display* display;
    char monitorName[] = ":0"; 
    display = XOpenDisplay(monitorName);
    if (display == NULL) {
        printf("Cannot connect to X server %s \n", ":0");
        exit(-1);
    } 
    else {
        printf("Connected to the X server \n");
    }








    XCloseDisplay(display);    
    printf("Disconnected from the X server \n");
    
    //exit(0);
    return 0;
}

