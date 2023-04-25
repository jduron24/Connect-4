connect-4: connect-4.c
	gcc -o connect-4 connect-4.c -lncurses
run:
	./connect-4
clean:
	rm -rf connect-4
