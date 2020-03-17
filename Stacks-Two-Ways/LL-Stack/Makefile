
x:	main.o LL.o Stack.o
	g++ -o x LL.o Stack.o main.o

main.o:	main.cpp LL.h Stack.h
	g++ -c main.cpp

LL.o:	LL.cpp LL.h
	g++ -c LL.cpp

Stack.o:	Stack.cpp Stack.h
	g++ -c Stack.cpp

clean:	
	rm -f *.o x
