user: main.o user.o
	g++ main.o user.o -o user -Wl,-ld_classic

main.o: main.cpp
	g++ -c main.cpp

user.o: user.cpp
	g++ -c user.cpp

clean:
	rm *.o user
