exec: main.o
	gcc -o app_exec main.o

main.o:
	gcc -c main.c

clean:
	rm -f main.o
	rm -f app_exec