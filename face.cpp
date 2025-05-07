#include "hw09.h"

void guessFace(std::vector<card> &deck){
	random_shuffle(deck.begin(), deck.end());
	std::string face = "";
	std::cout << "enter your guess for the face" << std::endl;
	std::cin >> face;
	if(face == deck[0].face){
		std::cout << "good job" << std::endl;
	}
	else{ 
		std::cout << "you lose the face was " << deck[0].face << std::endl << std::endl;
	}
}
