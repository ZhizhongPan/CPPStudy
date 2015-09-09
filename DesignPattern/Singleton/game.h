#include <iostream>
#include <cstring>

class Game{
public:
	Game(const char* ch) : playerName(new char[strlen(ch) + 1]), playerScore(0), aiScore(0){
		strcpy(playerName, ch); 
	}

	Game(const Game& that) : playerName(new char[strlen(that.playerName)+1]), 
							 playerScore(that.playerScore),
							 aiScore(that.aiScore){
		strcpy(playerName, that.playerName); 
	}

	Game& operator=(const Game&);
	~Game(){delete [] playerName;};

	const char* getPlayerName() const { return playerName; }
	void operator()(const int plS, const int aiS);
	void submitScore() const;
private:
	char* playerName;
	int playerScore;
	int aiScore;
};
