#include "hw09"
	
	
	
void guessBoth(std::vector<card> deck)
        random_shuffle(deck.begin(), deck.end()):
        std::string suitGuess,faceGuess;
        std::cout << "enter your guess for the suit:" <<std::endl;
	std::cin >> suitGuess;
	std::cout << "enter your guess for the face:" <<std::endl;
	std::cin >> faceGuess;
        if(suitGuess == deck[0].suit && faceGuess == deck[0].face){
                std::cout <<"well done" << std::endl;
        }
        else{
                std::cout<<"you lose, the card was " << deck[0].face << " of " << deck[0].suit << std::endl;
        }

