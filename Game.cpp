// Created by Rohan Tatikonda on 5/24/23.
#include <vector>
#include "iostream"
#include "Game.h"

using namespace std;
Game::Game() {
	for(int i = 1 ; i < 14; ++i){ //makes deck with 52 cards
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
int Game::randomDeal(vector<string> & stack, string & player) { // randomly puts 5 cards on the board
	int k = rand() % stack.size()-1;
	player = stack[k];
	remove(stack.begin(), stack.end(),player);
	stack.resize(stack.size()-1);
	return success;
}
int Game::randomDeal(std::vector<std::string> &stack, std::unordered_set<std::string>& board) {
	for(int i = 0; i < 5; ++i) {
		int k = rand() % stack.size() - 1;
		board.insert(stack[k]);
		remove(stack.begin(), stack.end(), stack[k]);
		stack.resize(stack.size() - 1);
	}
}

int Game::dealPlayer(string & player2first, string & player2second) {
	this->randomDeal(deck, player2first);
	this->randomDeal(deck, player2second);
}

Game::~Game() {}
