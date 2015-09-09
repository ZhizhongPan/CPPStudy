class Scorer{
public:
	static Scorer* getInstance();
	int getScore() const;
	void addScore(const int newScore);
private:
	int score;
	static Scorer* instance;

	Scorer() : score(0){};
	Scorer(const Scorer&);
	Scorer& operator=(const Scorer&);
	~Scorer(){};
};
