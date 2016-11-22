.PHONY:
	bugdetection_exec

all: bugdetection_exec

bugdetection_exec: main.o
	gcc main.o -lpthread -o bugdetection_exec

main.o:
	gcc -c main.c

clean:
	rm -rf bugdetection_exec *.o

