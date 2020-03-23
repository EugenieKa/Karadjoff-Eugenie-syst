CC 	= gcc
OBJS 	= ls.o
CFLAGS 	= -c -Wall -ansi -pedantic -D_POSIX_C_SOURCE
LDFLAGS =
PGM 	= multiplication

all: $(PGM)

$(PGM): $(OBJS)
	$(CC) -o $(PGM) $(OBJS) $(LDFLAGS)

.c.o:
	$(CC) $(CFLAGS) $<

clean:
	rm -f $(PGM)
	rm -f $(OBJS)
	rm -f *~
