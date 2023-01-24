#pragma once
#include <iostream>

class AktorV2{
public:
	char GetSymbol() const {
		return symbol;
	}
	int GetX()const{
		return posX;
	}
	int GetY()const{
		return posY;
	}

	void SetCoord(int x, int y){
		posX = x;
		posY = y;
	}
	void SetSymbol(char c) {
		symbol = c;
		update();
	}
	void moveUP() {
		posX--;
	}
	void moveDOWN() {
		posX++;
	}
	void moveL() {
		posY--;
	}
	void moveR() {
		posY++;
	}

	void operator=(const AktorV2& t){
		symbol = t.GetSymbol();
		update();
	}

private:

	void update() {
		if (symbol == '.' || symbol == '_') {
			step_on = true;
			is_movable = false;
		}
		if (symbol == '@' || symbol == 'o') {
			step_on = false;
			is_movable = true;
		}
		else {
			is_movable = false;
			step_on = false;
		}
	}
	char symbol = '.';
	char under = '.';
	bool is_movable = false;
	bool step_on = false;
	int posX = 0;
	int posY = 0;
	};

class LevelV2
{
public:

private:

};

class SokobanV2{
public:

private:

};

