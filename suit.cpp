#include "hw09"

void::guessSuit(std::vector<card> deck)
	random_shuffle(deck.begin(), deck.end())
	std::string guess;
	std::cout << "enter your guess for the suit:" <<std::endl;
	cin >> guess;
	if(guess == deck[0].suit){
		std::cout <<"well done" << std::endl;
	}
	else{
		std::cout<<"you lose, the suit was " << deck[0] << std::endl;
	}

	
