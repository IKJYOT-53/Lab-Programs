all:program1 program2

program1:program1.c
	cc program1.c -o program1
program2:program2.c
	cc program2.c -o program2
clean:
	rm -f program2 program1