programa : Goblin.o main.o Hero.o Ogre.o
	g++ Goblin.o main.o Hero.o Ogre.o -o programa

Hero : Hero.h Hero.cpp
	g++ -c Hero.cpp

Goblin : Goblin.h Goblin.cpp
	g++ -c Goblin.cpp

Ogre : Ogre.h Ogre.cpp
	g++ -c Ogre.cpp

main : main.cpp
	g++ -c main.cpp

clean:
	rm *.o programa.exe