all: compile link

compile:
      
	   g++ -c main-sfml.cpp draw.cpp gameLoop.cpp init.cpp getScore.cpp globals.cpp swap.cpp mouseClick.cpp Menu.cpp movingAnimation.cpp matchFinding.cpp updateGrid.cpp secondSwapIfNoMatch.cpp -Isrc\include  

link:
	   g++ main-sfml.o draw.o gameLoop.o init.o getScore.o globals.o swap.o mouseClick.o Menu.o movingAnimation.o matchFinding.o updateGrid.o secondSwapIfNoMatch.o -o sfml-app -Lsrc\lib -lsfml-graphics -lsfml-window -lsfml-system