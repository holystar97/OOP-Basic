#include "HangmanGame.h"
#include <time.h>

int main() {
	srand((unsigned)time(NULL));
	HangmanGame game;

	game.play();
	
	return 0;
}