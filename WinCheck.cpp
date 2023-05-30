// Created by Rohan Tatikonda on 5/26/23.
#include <set>
#include "WinCheck.h"

using namespace std;
WinCheck::WinCheck(Player& a, Player& b, Game &game) {
	this->a = a;
	this->b = b;
	this->game = game;
}


int WinCheck::setup() {
	if(a.random == false){
		a.getCards();
	}
	if(a.random == true){
		a.dealPlayer();
	}
	if(b.random == false){
		a.getCards();
	}
	if(b.random == true){
		b.dealPlayer();
	} // both players have 2 cards each
	randomDeal(game.deck, game.board); // board has 5 cards

	player1.insert(a.firstCard); player1.insert(a.secondCard); // inserts 7 cards for P1 & P2 into sets
	player2.insert(b.firstCard); player2.insert(b.secondCard);
	for(auto i = game.board.begin(); i !=game.board.end(); ++i){
		string k = *i;
		player1.insert(k);
		player2.insert(k);
	}

	return success;
}




WinCheck::~WinCheck() {}