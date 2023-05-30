// Created by Rohan Tatikonda on 5/24/23.
#include "Player.h"
#pragma once
#include "sstream"

using namespace std;
int Player::getCards() {
	bool condition = true;
	bool badCards = false;
	string input = "";
	while(condition == true){
		cout << "Please enter your starting hand in the following manor: Ace of clubs and 7 of hearts as 'Ac 7h' or 'quit' to make them random" << endl;
		getline(cin, input);
		if(input == "quit"){
			random = true;
			break;
		}
		if(input.length() == 5 && input.substr(2,1) == " "){
			string first = input.substr(0,2);
			first = to_string(stringToInt(first))+first.substr(first.length()-1,1); //changes user input format to deck format
			string second = input.substr(3,2);
			second = to_string(stringToInt(second))+second.substr(second.length()-1,1);
			if (find(deck.begin(), deck.end(), first) != deck.end() && find(deck.begin(), deck.end(), second) != deck.end()){
				istringstream iss(input);
				iss >> firstCard;
				remove(deck.begin(), deck.end(),firstCard);
				iss >> secondCard;
				remove(deck.begin(), deck.end(),secondCard);
				deck.resize(deck.size()-2);
				hand.push_back(firstCard);
				hand.push_back(secondCard);
				condition = false;
				continue;
			}
			badCards = true;
			cout << "one or more of your cards doesn't exist or is already taken" << endl;
		}
		if (!badCards) {
			cout << "Incorrect format" << endl;
		}
	}
	return success;
}
