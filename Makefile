CC = g++
CFLAGS = 
LIBS = 
SRC_FILES = *.cc

all: cmdline

cmdline: $(SRC_FILES)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

clean:
	rm -f cmdline *.o

.PHONY: clean
