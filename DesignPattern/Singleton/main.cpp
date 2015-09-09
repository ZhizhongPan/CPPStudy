#include <iostream>
#include "game.h"



int main() {
	Game game1("chris");
	game1(12, 10);
	game1.submitScore();

	Game game2("joey");
	game2(10, 11);
	game2.submitScore();
	
	game2(11, 11);
	game2.submitScore();

	Game game3(game1);
	game3.submitScore();
	
	Game game4 = game2;
	game4(13, 1);
	game4.submitScore();
}
