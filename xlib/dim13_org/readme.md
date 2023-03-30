## Compiling Xlib-Based Programs
### Compiling Xlib-Based programs requires linking them with
### the Xlib library. This is done using a
#### compilation command like this:

    CC=cc
    
    cc prog.c -o prog -lX11
    // If the compiler complains that it cannot find the X11 library,
    // try adding a '-L' flag, like this:
    cc prog.c -o prog -L/usr/X11/lib -lX11
    //or perhaps this (for a system with release 6 of X11):
    cc prog.c -o prog -L/usr/X11R6/lib -lX11

