main: main.o Trajet.o TrajetSimple.o Maillon.o
	g++ -o main main.o Trajet.o TrajetSimple.o Maillon.o

main.o: main.cpp
	g++ -c main.cpp

Trajet.o: Trajet.cpp
	g++ -c Trajet.cpp
	
TrajetSimple.o: TrajetSimple.cpp
	g++ -c TrajetSimple.cpp

Maillon.o: Maillon.cpp
	g++ -c Maillon.cpp
