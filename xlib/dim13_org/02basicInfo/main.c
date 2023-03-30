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

    int screen_num;
    int screen_width;
    int screen_height;
    // root_window stores the ID of the root window
    Window root_window;
    long unsigned white_pixel;
    long unsigned black_pixel;

    screen_num = DefaultScreen(display);
    printf("screen_num: %d \n", screen_num);

    screen_width = DisplayWidth(display, screen_num);
    printf("screen_width: %d \n", screen_width);

    screen_height = DisplayHeight(display, screen_num);
    printf("screen_height: %d \n", screen_height);

    root_window = RootWindow(display, screen_num);
    printf("ID of root_window = %lu \n", root_window);

    white_pixel = WhitePixel(display, screen_num);
    printf("white_pixel = %lu \n", white_pixel);
    printf("white_pixel = 0x%08lx \n", white_pixel);

    black_pixel = BlackPixel(display, screen_num);
    printf("black_pixel = %lu \n", black_pixel);
    printf("black_pixel = 0x%08lx \n", black_pixel);


    XCloseDisplay(display);    
    printf("Disconnected from the X server \n");
    
    //exit(0);
    return 0;
}

