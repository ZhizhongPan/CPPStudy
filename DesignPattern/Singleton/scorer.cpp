#include "scorer.h"

Scorer* Scorer::getInstance(){
	if ( !instance ) {
		instance = new Scorer();
	}
  	return instance;
}

int Scorer::getScore() const{
	return score;
}

void Scorer::addScore(const int newScore){
	score += newScore;
}
