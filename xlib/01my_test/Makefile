# debug:    CFLAGS   = -g -std=c99 -pedantic -Wall                              -O0 ${INCS} ${CPPFLAGS}
# release:  CFLAGS   = -   std=c99 -pedantic -Wall -Wno-deprecated-declarations -Os ${INCS} ${CPPFLAGS}

X11INC = /usr/X11R6/include
X11LIB = /usr/X11R6/lib

CC = cc
CFLAGS=-g -std=c99 -pedantic -Wall -O0
HEADERS=$(wildcard *.h)
LIBS=-lX11
OBJECTS=$(patsubst %.c,%.o,$(SOURCES))
OUT=a.out
SOURCES=$(wildcard *.c)

all: $(OUT)

r: run
run: $(OUT)
	./$(OUT)

d: dbg
dbg: $(OUT)
	gdb --silent $(OUT)

$(OUT): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(OUT) $(OBJECTS)


main.o: main.c $(HEADERS)
	$(CC) $(CFLAGS) -c main.c


%.o: %.c 
	$(CC) $(CFLAGS) -c $^
	

c: clean
clean:
	rm -vf *.o $(OUT)

v: vars
vars:
	@echo "CC       : "$(CC)
	@echo "CFLAGS   : "$(CFLAGS)
	@echo "HEADERS  : "$(HEADERS)
	@echo "LIBS     : "$(LIBS)
	@echo "OBJECTS  : "$(OBJECTS)
	@echo "OUT      : "$(OUT)
	@echo "SOURCES  : "$(SOURCES)

h: help
help:
	@echo "make help (this list)"
	@echo "make vars"
	@echo "make clean"
	@echo "make all"
	@echo "make run"
	@echo "make dbg"

