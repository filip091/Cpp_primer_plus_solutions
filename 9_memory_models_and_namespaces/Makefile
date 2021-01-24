CC=g++
Flags=-Wall -Wextra -pedantic


# pe9-1
pe9-1:	pe9-1.cpp golf.o golf.h
	$(CC) $(Flags) pe9-1.cpp golf.o -o pe9-1

golf.o: golf.cpp golf.h
	$(CC) $(Flags) golf.cpp -c 

#pe9-4
pe9-4: pe9-4.cpp sales.o sales.h
	$(CC) $(Flags) pe9-4.cpp sales.o -o pe9-4

sales.o: sales.cpp sales.h
	$(CC) $(Flags) sales.cpp -c 



clean:
	rm golf.o pe9-1 sales.o pe9-4

