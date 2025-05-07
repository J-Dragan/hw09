#include "hw09.h"


std::vector<card> makeDeck(){
	std::vector<card> deck;
	card card;
	std::vector<std::string> face = {"ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "jack", "queen", "king"};
	std::vector<std::string> suit = {"hearts", "diamonds", "clubs", "spades"};
	for(int i = 0; i < 13; i++){
		for(int j = 0; j < 4; j++){
			card.face = face[i];
			card.suit = suit[j];
			deck.push_back(card);
		}
	}
	return deck;




}
