# makefile

CC= g++ -std=c++11 -g

# executable: ./Main
all: Main

Main: main.o flight.o sort.o
	$(CC) -o Main main.o flight.o sort.o

main.o: main.cpp
	$(CC) -c main.cpp

flight.o: flight.h flight.cpp
	$(CC) -c flight.cpp

sort.o: sort.h sort.cpp
	$(CC) -c sort.cpp

clean:
	rm *.o Main
