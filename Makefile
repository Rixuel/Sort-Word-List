OPTIONS = -O0 -Wall

all : list

list : list.cpp
	g++ ${OPTIONS} -o list list.cpp

clean:
	rm -rf list *~ *.o
