// Created by Rohan Tatikonda on 5/24/23.
#include <string>
#include "Game.h"
#pragma once


class Player: public Game{
public:
	std::string firstCard;
	std::string secondCard;
	std::vector<std::string> hand;
	bool random = false;
	int getCards();
};