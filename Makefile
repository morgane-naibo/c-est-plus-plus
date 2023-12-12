CXX = g++ -ansi -Wall -pedantic -std=c++11
CXXFLAGS = -DMAP

trajts: main.o Trajet.o TrajetSimple.o Maillon.o TrajetComposee.o Catalogue.o Liste.o
	$(CXX) -o trajets main.o Trajet.o TrajetSimple.o Maillon.o TrajetComposee.o Catalogue.o Liste.o

main.o: main.cpp
	$(CXX) -c $(CXXFLAGS) main.cpp

Trajet.o: Trajet.cpp
	$(CXX) -c  $(CXXFLAGS) Trajet.cpp
	
TrajetSimple.o: TrajetSimple.cpp
	$(CXX) -c $(CXXFLAGS) TrajetSimple.cpp

Maillon.o: Maillon.cpp
	$(CXX) -c $(CXXFLAGS) Maillon.cpp

Liste.o: Liste.cpp 
	$(CXX) -c $(CXXFLAGS) Liste.cpp

TrajetComposee.o: TrajetComposee.cpp
	$(CXX) -c $(CXXFLAGS) TrajetComposee.cpp

Catalogue.o: Catalogue.cpp
	$(CXX) -c $(CXXFLAGS) Catalogue.cpp
