
x:	main.o LL.o Queue.o
	g++ -o x LL.o Queue.o main.o

main.o:	main.cpp LL.h Queue.h
	g++ -c main.cpp

LL.o:	LL.cpp LL.h
	g++ -c LL.cpp

Queue.o:	Queue.cpp Queue.h
	g++ -c Queue.cpp

clean:	
	rm -f *.o x
