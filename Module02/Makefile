all:   main.o 
	g++ main.o -o Rate_Heart

main.o: main.cpp HeartRate.h HeartRate.cpp
	g++ -c main.cpp

clean:
	rm *.o
	rm Rate_Heart
