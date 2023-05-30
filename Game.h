// Created by Rohan Tatikonda on 5/24/23.
#include <unordered_set>
#include <vector>
#pragma once
#include <string>
#include <iostream>
class Game{
public:
	std::vector<std::string> deck;
	std::unordered_set<std::string> board;
	Game();
	~Game();
	std::vector<std::string> dealPlayer(); // if only one hand is input other one is made
	int randomDeal(std::vector<std::string> &stack,std::string &player); // randomly takes one card & deals to player
	int randomDeal(std::vector<std::string> & stack, std::unordered_set<std::string> &board); // deals 5 cards to table
	int stringToInt(std::string card);
	enum enums{success = 0};
};
