all::lab_0

lab_0: lab_0.o league.o team.o
	g++ lab_0.o league.o team.o -o lab_0

lab_0.o:lab_0.cpp
	g++ -c lab_0.cpp

league.o:league.cpp
	g++ -c league.cpp

team.o:team.cpp
	g++ -c team.cpp

clean:
	rm *o lab_0
