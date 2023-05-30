// Created by Rohan Tatikonda on 5/24/23.
#include <string>
#include "Game.h"
#include "Player.h"
#include "WinCheck.h"

using namespace std;
int main(int argc, char* argv[]){
	Game example;
	Player a;
	Player b;
	WinCheck test(a, b, example);
	test.setup();
	Player c;
}