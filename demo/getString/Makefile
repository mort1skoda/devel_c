CC=clang
CFLAGS=-Wall -Werror -g
OUT=getStr
SOURCES=$(wildcard *.c)
HEADERS=$(wildcard *.h)
OBJECTS=$(patsubst %.c,%.o,$(SOURCES))

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

getStr.o: getStr.c
	$(CC) $(CFLAGS) -c getStr.c


c: clean
clean:
	rm *.o $(OUT)

v: vars
vars:
	@echo "SOURCES: "$(SOURCES)
	@echo "HEADERS: "$(HEADERS)
	@echo "OBJECTS: "$(OBJECTS)

