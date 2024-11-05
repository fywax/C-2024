Test2: Time/Time.o Timing/Timing.o Event/Event.o Test2.o 
	g++ -o Test2 Time/Time.o Timing/Timing.o Event/Event.o Test2.o

Time/Time.o: Time/Time.cpp Time/Time.h
	g++ -c Time/Time.cpp -o Time/Time.o

Timing/Timing.o: Timing/Timing.cpp Timing/Timing.h
	g++ -c Timing/Timing.cpp -o Timing/Timing.o

Event/Event.o: Event/Event.cpp Event/Event.h
	g++ -c Event/Event.cpp -o Event/Event.o

Test2.o: Test2.cpp
	g++ -c Test2.cpp -o Test2.o
