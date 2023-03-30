// include include list ...
#include "_01init.h"
#include "func1.h"
#include "func2.h"
#include "func3.h"
#include "get_string_length.h"
#include <X11/Xlib.h>
#include <stdio.h>
#include <stdlib.h>     // getenv(), etc.
#include <string.h>
#include <err.h>
#include <unistd.h>     // sleep(), etc.

// Morty Hawk 2023-03-30 Thu 03:58

static Display*  dpy;
static int       scr;
static Window    root;

#define POSX    500
#define POSY    500
#define WIDTH   500
#define HEIGHT  500
#define BORDER   15

int main(int argc, char **argv) {

    Window win;
    XEvent ev;

    if ( (dpy = XOpenDisplay(NULL) ) == NULL )
        err(1, "Can't open display");

    scr  = DefaultScreen (dpy)      ;
    root = RootWindow    (dpy, scr) ;

    win  = 
    XCreateSimpleWindow  (dpy,
                         root,
                         POSX, POSY,
                         WIDTH, HEIGHT, BORDER,
                         BlackPixel(dpy, scr),
                         WhitePixel(dpy, scr)
    );

    XMapWindow           (dpy, win) ;

    while (XNextEvent(dpy, &ev) == 0) {


    }



    XUnmapWindow         (dpy, win) ;
    XDestroyWindow       (dpy, win) ;
    XCloseDisplay        (dpy)      ;

    return 0;
}

