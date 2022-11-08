SDIR = src
IDIR = inc
LDIR = lib

#SRCS = $(shell find $(SDIR) -name *.c)
SRCS = src/circle.c
OBJS = $(patsubst $(SDIR)/%.c, $(LDIR)/%.o, $(SRCS))
BINNAME = program

CC = gcc
LD = $(CC)
CFLAGS = -std=c11 -pedantic -I$(IDIR) -c
LDFLAGS =

all: $(BINNAME)

clean:
	rm $(OBJS)

$(BINNAME): $(OBJS)
	$(LD) $(LDFLAGS) -o $@ $^

$(LDIR)/%.o: $(SDIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<