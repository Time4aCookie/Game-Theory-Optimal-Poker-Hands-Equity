// Created by Rohan Tatikonda on 5/24/23.
#include <string>
#include "Game.h"

using namespace std;
int main(int argc, char* argv[]){
	Game test;
	test.randomDeal(test.deck, test.board);
	string playerFirstCard;
	string playerSecondCard;
	test.dealPlayer(playerFirstCard,playerSecondCard);

}