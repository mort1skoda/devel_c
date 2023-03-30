// include include list ...
#include "_01init.h"
#include "func1.h"
#include "func2.h"
#include "func3.h"
#include "get_string_length.h"
#include <X11/X.h>
#include <X11/XKBlib.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <err.h>
#include <stdio.h>
#include <stdlib.h>     // getenv(), etc.
#include <string.h>
#include <unistd.h>     // sleep(), etc.

// Morty Hawk 2023-03-30 Thu 03:58

#define POSX    500
#define POSY    500
#define WIDTH   750
#define HEIGHT  500
#define BORDER   25

static Display*  dpy;
static int       scr;
static Window    root;

static Window  
create_win ( int x, int y, int w, int h, int b ) {
    Window win;
    XSetWindowAttributes xwa;

    xwa.background_pixel = WhitePixel (dpy ,scr);
    xwa.border_pixel     = BlackPixel (dpy, scr);
    xwa.event_mask       = ButtonPress;

    win = 
    XCreateWindow (
        dpy, root, x, y, w, h, b,
        DefaultDepth(dpy, scr),
        InputOutput, DefaultVisual(dpy, scr),
        CWBackPixel | CWBorderPixel | CWEventMask,
        &xwa
    );
    return win;
}

void
run() {
    XEvent ev;

    while (XNextEvent(dpy, &ev) == 0) {
        switch (ev.type) {
            case ButtonPress:
                return;
        }
    }
}


int
main(int argc, char **argv) {

    Window win;

    if ( (dpy = XOpenDisplay(NULL) ) == NULL )
        errx(1, "Can't open display");

    scr  = DefaultScreen (dpy)      ;
    root = RootWindow    (dpy, scr) ;

      win  = 
      create_win ( POSX, POSY, WIDTH, HEIGHT, BORDER );

        XMapWindow           (dpy, win) ;

          run();

        XUnmapWindow         (dpy, win) ;
      XDestroyWindow       (dpy, win) ;
    XCloseDisplay        (dpy)      ;

    return 0;
}

