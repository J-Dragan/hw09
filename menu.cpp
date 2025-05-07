#include "hw09.h"

int menu(){
    while(true){
	try{
		int num;
		std::cout << "Want to play? \n 1. Guess the face of the card \n 2. Guess the suit of the card \n 3. Guess both the face and suit \n 4. Played enough \n Enter your choice:\n";
		std::cin >> num;
		if(std::cin.fail()){
			throw std::runtime_error("must be number");
		}
		if(num < 1 || num > 4){
			throw std::out_of_range("numbers must be 1-4");
		}

		return num;

	}
	catch(std::exception &e){
		std::cin.clear();
		std::cin.ignore(100, '\n');
		std::cout << "error:" << e.what() << std::endl;

    

    
    
	}    
    }
}
