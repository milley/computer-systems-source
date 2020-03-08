objects = mstore.s mstore.o prog exchange.s scale.s arith.s \
					store_uprod.s remdiv.s

mstore.s:	mstore.c
	gcc -Og -S mstore.c

mstore.o:	mstore.c
	gcc -Og -c mstore.c

prog:	main.c mstore.c
	gcc -Og -o prog main.c mstore.c

exchange.s: exchange.c
	gcc -Og -S exchange.c

scale.s: scale.c
	gcc -Og -S scale.c

airth.s: airth.c
	gcc -Og -S airth.c

store_uprod.s: store_uprod.c
	gcc -Og -S store_uprod.c

remdiv.s: remdiv.c
	gcc -Og -S remdiv.c

clean:
	rm $(objects)