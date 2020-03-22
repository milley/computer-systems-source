objects = mstore.s mstore.o prog exchange.s scale.s arith.s \
					store_uprod.s remdiv.s absdiff.s cmovdiff.s \
					fact_do.s fact_do_goto.s

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

absdiff.s: absdiff.c
	gcc -Og -S absdiff.c

cmovdiff.s: cmovdiff.c
	gcc -Og -S cmovdiff.c

fact_do.s: fact_do.c
	gcc -Og -S fact_do.c

fact_do_goto.s: fact_do_goto.c
	gcc -Og -S fact_do_goto.c

clean:
	rm $(objects)