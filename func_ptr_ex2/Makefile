# Sources: 
# http://nuclear.mutantstargoat.com/articles/make/
# http://hyperpolyglot.org/build

# collects all source files in the current directory in the src variable
src = $(wildcard *.c)

# transforms the contents of the src variable, changing all file suffixes 
# from .c to .o, thus constructing the object file list we need
objs = $(src:.c=.o)

CC = gcc
CFLAGS = -Wall -g -std=c99 # -Werror
RM = rm -f

# not used
# MKDIR = mkdir -p
# CXXFLAGS =
# LDFLAGS = -lm

myprog: $(objs)
	$(CC) $(CFLAGS) -o $@ $^ 
	./$@

# The clean rule is marked as phony, because its target is not an actual file 
# that will be generated, but just an arbitrary name that 
# we wish to use for executing this rule.
.PHONY: clean
clean:
	$(RM) $(objs) myprog