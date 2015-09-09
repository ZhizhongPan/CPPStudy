#include "game.h"
#include "scorer.h"

Scorer* Scorer::instance = NULL;
Game& Game::operator=(const Game& that){
	if ( this == &that ) return *this;
  	delete [] playerName;

  	playerName = new char[strlen(that.playerName)+1];
  	strcpy(playerName, that.playerName);
  	playerScore = that.playerScore;
  	aiScore = that.aiScore;
  	return *this;
}

void Game::operator()(const int plS, const int aiS){
	playerScore = plS;
	aiScore = aiS;
}

void Game::submitScore() const{
	int score = 0;
	if (playerScore > aiScore){
		score = 3;
	}else if (playerScore < aiScore){
		score = 0;
	}else{
		score = 1;
	}

	Scorer* scorer = Scorer::getInstance();
	(*scorer).addScore(score);
	std::cout << "Now the Scorer is : " << (*scorer).getScore() << std::endl;
}
