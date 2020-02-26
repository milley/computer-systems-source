objects = mstore.s mstore.o prog

mstore.s:	mstore.c
	gcc -Og -S mstore.c

mstore.o:	mstore.c
	gcc -Og -c mstore.c

prog:	main.c mstore.c
	gcc -Og -o prog main.c mstore.c

clean:
	rm $(objects)