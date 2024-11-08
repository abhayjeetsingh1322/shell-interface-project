#Lab 2 Makefile

#Target all: Builds executables and creates zip for submission
all: lab2.zip lab2 backgroundtest

#Target lab2.zip: Creates zip containging Makefile and source code
lab2.zip: Makefile shellA.c backgroundtest.c
	zip lab2.zip Makefile shellA.c backgroundtest.c

#Target lab2 executable
lab2: shellA.c
	gcc -std=c99 -pedantic -g -o lab2 shellA.c

#Target backgroundtest executable
backgroundtest: backgroundtest.c
	gcc -std=c99 -pedantic -g -o backgroundtest backgroundtest.c

#Target clean: Removes the compiled executables and zip archive
clean:
	rm -rf lab2.zip lab2 backgroundtest
