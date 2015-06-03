
out:my_stack.o main.o
	gcc my_stack.o main.o -o main
my_stack.o:my_stack.c
	gcc -c my_stack.c
main.o:main.c
	gcc -c main.c
clean:
	rm *.o;

