#pragma once
#include <istream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

char level1[5][7] = {	'#','#','#','#','#','#','#',
						'#','.','.','.','.','.','#',
						'#','.','@','o','_','.','#',
						'#','.','.','.','.','.','#',
						'#','#','#','#','#','#','#'
};

class Aktor {
public:
	Aktor(const char& z) {
		zna = z;
	}
	char Znak() {
		return zna;
	}
	void SetPos(int x, int y) {
		posX = x;
		posY = y;
	}
	int getx() {
		return posX;
	}
	int gety() {
		return posY;
	}
	void moveUP() {
		posX--;
	}
	void moveDOWN() {
		posX++;
	}
	void moveR(){
		posY++;
	}
	void moveL(){
		posY--;
	}
private:
	char zna;
	int posX = 0;
	int posY = 0;
};

class Sokoban{
public:
	void graj();
	void wypisz();
	int znajdzX(char z);
	int znajdzY(char z);
private:
	Aktor gracz = Aktor('@');
	Aktor skrz = Aktor('o');
	Aktor cel = Aktor('_');
};

void Sokoban::graj() {
	string choice;
	wypisz();
	gracz.SetPos(znajdzX(gracz.Znak()), znajdzY(gracz.Znak()));
	skrz.SetPos(znajdzX(skrz.Znak()), znajdzY(skrz.Znak()));
	cel.SetPos(znajdzX(cel.Znak()), znajdzY(cel.Znak()));
	while (choice != "x"){
		cin >> choice;
		if (choice == "w"){
			if (level1[gracz.getx()-1][gracz.gety()] == '.'){
				level1[gracz.getx()][gracz.gety()] = '.';
				level1[gracz.getx() - 1][gracz.gety()] = gracz.Znak();
				gracz.moveUP();
			}
			wypisz();
		}
		if (choice == "s") {
			if (level1[gracz.getx() + 1][gracz.gety()] == '.'){
				level1[gracz.getx()][gracz.gety()] = '.';
				level1[gracz.getx() + 1][gracz.gety()] = gracz.Znak();
				gracz.moveDOWN();
			}
			wypisz();
		}
		if (choice == "a") {
			if (level1[gracz.getx()][gracz.gety() - 1] == '.'){
				level1[gracz.getx()][gracz.gety()] = '.';
				level1[gracz.getx()][gracz.gety() - 1] = gracz.Znak();
				gracz.moveL();
			}
			wypisz();
		}
		if (choice == "d") {
			if (level1[gracz.getx()][gracz.gety() + 1] == '.'){
				level1[gracz.getx()][gracz.gety()] = '.';
				level1[gracz.getx()][gracz.gety() + 1] = gracz.Znak();
				gracz.moveR();
			}

			wypisz();
		}
	}
}

void Sokoban::wypisz() {
	for (int x = 0; x < 5; x++) {
		for (int y = 0; y < 7; y++) {
			cout << level1[x][y];
		}
		cout << endl;
	}
}

int Sokoban::znajdzX(char z){
	for (int x = 0; x < 5; x++) {
		for (int y = 0; y < 7; y++) {
			if (level1[x][y] == z){
				return x;
			} 
		}
	}
}

int Sokoban::znajdzY(char z) {
	for (int x = 0; x < 5; x++) {
		for (int y = 0; y < 7; y++) {
			if (level1[x][y] == z) {
				return y;
			}
		}
	}
}
