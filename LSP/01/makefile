clean:
	rm *_Program
	rm *.a *.so *.o

run01: 01_Program
	./01_Program

run02: 02_Program
	./02_Program

static: 01_Program.c 01_functions.c
	gcc -c 01_Program.c 01_functions.c
	ar -r libnumber.a 01_functions.o
	gcc 01_Program.o libnumber.a -o 01_Program

dynamic: 02_Program.c 02_functions.c
	gcc -c 02_Program.c
	gcc -fPIC -shared -o libtemperature.so 02_functions.c
	gcc 02_Program.o libtemperature.so -o 02_Program
