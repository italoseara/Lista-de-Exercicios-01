CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
LDFLAGS = -lm

# compile all .c files in the current directory
all: $(patsubst %.c, %, $(wildcard *.c))

# compile a single .c file
%: %.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

# remove all compiled files
clean:
	rm -f $(patsubst %.c, %, $(wildcard *.c))
