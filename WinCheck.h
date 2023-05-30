// Created by Rohan Tatikonda on 5/26/23.
#include "Player.h"
#pragma once
#include <set>

using namespace std;

class WinCheck: public Player{
public:
	WinCheck(Player& a, Player& b, Game &game);
	~WinCheck();
	Player a;
	Player b;
	Game game;
	set<string> player1;
	set<string> player2;
	int setup();
	Player highCard();

};