objects = mstore.s mstore.o prog exchange.s scale.s arith.s \
					store_uprod.s remdiv.s absdiff.s cmovdiff.s \
					fact_do.s fact_do_goto.s fact_while.s fact_while_jm_goto.s \
					fact_while_gd_goto.s fact_for_while.s fact_for.s fact_for_jm_goto.s \
					switch_eg.s


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

fact_while.s: fact_while.c
	gcc -Og -S fact_while.c

fact_while_jm_goto.s: fact_while_jm_goto.c
	gcc -Og -S fact_while_jm_goto.c

fact_while_gd_goto.s: fact_while_gd_goto.c
	gcc -Og -S fact_while_gd_goto.c

fact_for_while.s: fact_for_while.c
	gcc -Og -S fact_for_while.c

fact_for.s: fact_for.c
	gcc -Og -S fact_for.c

fact_for_jm_goto.s: fact_for_jm_goto.c
	gcc -Og -S fact_for_jm_goto.c

switch_eg.s: switch_eg.c
	gcc -Og -S switch_eg.c

clean:
	rm $(objects)