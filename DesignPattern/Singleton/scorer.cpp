#include "scorer.h"

Scorer* Scorer::getInstance(){
	static Scorer instance;
  	return &instance;
}

int Scorer::getScore() const{
	return score;
}

void Scorer::addScore(const int newScore){
	score += newScore;
}
