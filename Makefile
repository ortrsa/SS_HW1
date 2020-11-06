FLAG= -Wall -g
OBJ_LIB=power.o basicMath.o

all: libmyMath.so libmyMath.a mains maind

mains: main.o libmyMath.a
	gcc $(FLAG) -o mains main.o libmyMath.a

maind: main.o
	gcc $(FLAG) -o maind main.o ./libmyMath.so
	
libmyMath.a: $(OBJ_LIB)
	ar -rcs libmyMath.a $(OBJ_LIB)

libmyMath.so: $(OBJ_LIB)
	gcc -shared -o libmyMath.so $(OBJ_LIB)

power.o:  power.c myMath.h
	gcc $(FLAG) -c power.c
	
basicMath.o: basicMath.c myMath.h
		gcc $(FLAG) -c basicMath.c

main.o: main.c myMath.h
	gcc $(FLAG) -c main.c
	
.PHONY: clean all

 clean:
	rm -f *.o *.a *.so mains maind
