CC=cc
CFLAGS=-c -Wall -std=c99
SOURCES=main.c ixamax.c xasum.c xdot.c xscal.c xswap.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=run

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm $(OBJECTS)
