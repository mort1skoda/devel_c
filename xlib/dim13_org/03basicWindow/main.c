#include "_01init.h"
#include "func1.h"
#include "func2.h"
#include "func3.h"
#include "get_string_length.h"
#include <X11/Xlib.h>
#include <stdio.h>
#include <stdlib.h>     // getenv(), etc.
#include <string.h>
#include <unistd.h>     // sleep(), etc.

// Morty Hawk 2023-03-30 Thu 03:58

int main(int argc, char **argv) {
    printf("dim13_org/01openCloseConnection \n");

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

        // Try to make this a seperate function: _xinfo.c  _xinfo.h
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



    // win stores the ID of our newly created window
    Window win;
    int win_width;
    int win_height;

    int win_x;
    int win_y;

    win_width  = DisplayWidth (display, screen_num) / 3;
    win_height = DisplayHeight(display, screen_num) / 3;

    
    win_x = win_y = 70;

    int win_border_width = 5; 
    win = XCreateSimpleWindow(display,
                              RootWindow(display, screen_num),
                              win_x, win_y,
                              win_width, win_height,
                              win_border_width, BlackPixel(display, screen_num),
                              WhitePixel(display, screen_num)
    );

    
    XMapWindow(display, win);
    XFlush(display);
    sleep(3);







    XCloseDisplay(display);    
    printf("Disconnected from the X server \n");
    
    //exit(0);
    return 0;
}

