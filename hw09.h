#ifndef hw09
#define hw09

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>

struct card{
	std::string face;
	std::string suit;

};

void guessFace(std::vector<card> &deck);
void guessSuit(std::vector<card> &deck);
void guessBoth(std::vector<card> &deck);
std::vector<card> makeDeck();
int menu();










#endif
