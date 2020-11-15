CC = gcc
FLAGS= -Wall 

all: mains maind

mymaths: mains

mymathd: maind

mains: main.o libmyMath.a
	${CC} ${FLAGS} main.o libmyMath.a -o mains

maind: main.o libmyMath.so
	${CC} ${FLAGS} main.o libmyMath.so -o maind

libmyMath.a: power1.o basicMath1.o myMath.h
	ar -rcs libmyMath.a power1.o basicMath1.o

libmyMath.so: power2.o basicMath2.o myMath.h
	${CC} ${FLAGS} -shared power2.o basicMath2.o -o libmyMath.so

main.o: main.c
	${CC} -c -fPIC main.c -o main.o -I.

power1.o: power.c myMath.h
	${CC} -c power.c -o power1.o

power2.o: power.c myMath.h
	${CC} -c -fPIC power.c -o power2.o

basicMath1.o: basicMath.c myMath.h
	${CC} -c basicMath.c -o basicMath1.o

basicMath2.o: basicMath.c myMath.h
	${CC} -c -fPIC basicMath.c -o basicMath2.o

clean:
	rm -f *.o *.a *.so mains maind 

.PHONY:  all mains maind

