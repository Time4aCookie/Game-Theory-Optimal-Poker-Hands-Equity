// Created by Rohan Tatikonda on 5/24/23.
#include <vector>
#include "iostream"
#include "Game.h"

using namespace std;
Game::Game() {
	for(int i = 2 ; i <= 14; ++i){ //makes deck with 52 cards
		for(int j = 0; j < 4; ++j){
			switch (j) {
				case 0:
					deck.push_back(to_string(i) + "c");
					break;
				case 1:
					deck.push_back(to_string(i) + "s");
					break;
				case 2:
					deck.push_back(to_string(i) + "d");
					break;
				case 3:
					deck.push_back(to_string(i) + "h");
					break;
			}
		}
	}
}

int Game::randomDeal(std::vector<std::string> &stack, std::unordered_set<std::string>& board) { // randomly puts 5 cards on the board
	for(int i = 0; i < 5; ++i) {
		int k = rand() % stack.size() - 1;
		board.insert(stack[k]);
		remove(stack.begin(), stack.end(), stack[k]);
		stack.resize(stack.size() - 1);
	}
}
int Game::randomDeal(vector<string> & stack, string & player) {
	int k = rand() % stack.size()-1;
	player = stack[k];
	remove(stack.begin(), stack.end(),player);
	stack.resize(stack.size()-1);
	return success;
}
vector<string> Game::dealPlayer() {
	string player2First = "";
	string player2Second = "";
	this->randomDeal(deck, player2First);
	this->randomDeal(deck, player2Second);
	vector<string> hand;
	hand.push_back(player2First);
	hand.push_back(player2Second);
	return hand;
}
int Game::stringToInt(string card) {
	int k = 0;
	string cardNumber = "";
	for(int i = 2; i <= 14; ++i){
		if(card.length() == 3){
			cardNumber = card.substr(0,2);
		}
		else {
			cardNumber = card.substr(0,1);
		}
		if (cardNumber == to_string(i)){
			k = i;
		}
	}
	if(cardNumber == "J"){ k = 11;}
	if(cardNumber == "Q"){ k = 12;}
	if(cardNumber == "K"){ k = 13;}
	if(cardNumber == "A"){ k = 14;}
	return k;
}

Game::~Game() {}
