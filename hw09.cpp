#include "hw09.h"

int main(){
	std::vector<card> deck = makeDeck();
	int choice = 1;
	while(choice !=4){
		choice = menu();
		if(choice == 1){
			guessFace(deck);
		}
		if(choice == 2){
			guessSuit(deck);
		}
		if(choice == 3){
			guessBoth(deck);
		}
		if(choice == 4){
			std::cout << "bye bye" << std::endl;
		}

	}



}
