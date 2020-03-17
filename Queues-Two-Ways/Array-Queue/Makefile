
x:	main.o Queue.o
	g++ -o x Queue.o main.o

main.o:	main.cpp Queue.h
	g++ -c main.cpp

Queue.o:	Queue.cpp Queue.h
	g++ -c Queue.cpp

clean:	
	rm -f *.o x
