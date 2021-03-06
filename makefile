.PHONY : clean help

CC := gcc
OUTFILE := ./build/q1.out
SOURCEFILE := ./src/q1.c ./src/func.c
CFLAGS := -Wall -o $(OUTFILE)
CPPFLAGS :=
LDFLAGS :=
LDLIBS :=

$(OUTFILE) : $(SOURCEFILE)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS) $(SOURCEFILE)

clean :
	rm -f $(OUTFILE)

help :
	@echo "option"
	@echo "(default) : compile"
	@echo "    clean : Romove files"
	@echo "     help : this"


