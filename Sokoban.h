#pragma once
#include <istream>
#include <string>
#include <vector>


using std::cout;
using std::cin;
using std::endl;
using std::string;

const int x = 5;
const int y = 7;
char level1[x][y] = {	'#','#','#','#','#','#','#',
						'#','.','.','.','.','.','#',
						'#','.','@','o','_','.','#',
						'#','.','.','.','.','.','#',
						'#','#','#','#','#','#','#'
};


class Level {
public:
	Level(char &c,int x,int y) {

	}

private:
	//Aktor** arr = new Aktor * [35];
	//Aktor gracz = Aktor('@');
	//Aktor skrz = Aktor('o');
	//Aktor cel = Aktor('_');
	//Aktor podloga = Aktor('_');
	//Aktor sciana = Aktor('#');
};

class sokobanV2{
public:
	void play() {

	}

private:
	//Level lev(char level1,int x,int y);
};



class Aktor {
public:
	Aktor() {
		zna = '.';
	}
	//Aktor(const char& z) {
	//	zna = z;
	//	if (zna == '_' ||zna == '.') {
	//		step_on = true;
	//	}
	//	if (zna == '@'||zna == 'o') {
	//		movable = true;
	//	}
	//}
	char Znak() {
		return zna;
	}
	char pod() {
		return pd;
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
	bool movable = false;
	bool step_on = false;
	char zna;
	char pd = '.';
	int posX = 0;
	int posY = 0;
};

//class Sokoban{
//public:
//	void graj();
//	void wypisz();
//	int znajdzX(char z);
//	int znajdzY(char z);
//private:
//	Aktor gracz = Aktor('@');
//	Aktor skrz = Aktor('o');
//	Aktor cel = Aktor('_');
//};

//void Sokoban::graj() {
//	string choice;
//	wypisz();
//	gracz.SetPos(znajdzX(gracz.Znak()), znajdzY(gracz.Znak()));
//	skrz.SetPos(znajdzX(skrz.Znak()), znajdzY(skrz.Znak()));
//	cel.SetPos(znajdzX(cel.Znak()), znajdzY(cel.Znak()));
//	while (choice != "x"){
//		cin >> choice;
//		if (choice == "w"){
//			if (level1[gracz.getx()-1][gracz.gety()] == '.'){
//				level1[gracz.getx()][gracz.gety()] = gracz.pod();
//				level1[gracz.getx() - 1][gracz.gety()] = gracz.Znak();
//				gracz.moveUP();
//			}
//			if (level1[gracz.getx() - 1][gracz.gety()] == 'o'){
//				if (level1[skrz.getx() - 1][skrz.gety()] == '.'){
//					level1[skrz.getx() - 1][skrz.gety()] = skrz.Znak();
//					level1[gracz.getx() - 1][gracz.gety()] = gracz.Znak();
//					level1[gracz.getx()][gracz.gety()] = gracz.pod();
//					gracz.moveUP();
//					skrz.moveUP();
//				}
//			}
//			wypisz();
//		}
//		if (choice == "s") {
//			if (level1[gracz.getx() + 1][gracz.gety()] == '.'){
//				level1[gracz.getx()][gracz.gety()] = gracz.pod();
//				level1[gracz.getx() + 1][gracz.gety()] = gracz.Znak();
//				gracz.moveDOWN();
//			}
//			if (level1[gracz.getx() + 1][gracz.gety()] == 'o') {
//				if (level1[skrz.getx() + 1][skrz.gety()] == '.') {
//					level1[skrz.getx() + 1][skrz.gety()] = skrz.Znak();
//					level1[gracz.getx() + 1][gracz.gety()] = gracz.Znak();
//					level1[gracz.getx()][gracz.gety()] = gracz.pod();
//					gracz.moveDOWN();
//					skrz.moveDOWN();
//				}
//			}
//			wypisz();
//		}
//		if (choice == "a") {
//			if (level1[gracz.getx()][gracz.gety() - 1] == '.'){
//				level1[gracz.getx()][gracz.gety()] = gracz.pod();
//				level1[gracz.getx()][gracz.gety() - 1] = gracz.Znak();
//				gracz.moveL();
//			}
//			if (level1[gracz.getx()][gracz.gety()-1] == 'o') {
//				if (level1[skrz.getx()][skrz.gety() - 1] == '.') {
//					level1[skrz.getx()][skrz.gety() - 1] = skrz.Znak();
//					level1[gracz.getx()][gracz.gety() - 1] = gracz.Znak();
//					level1[gracz.getx()][gracz.gety()] = gracz.pod();
//					gracz.moveL();
//					skrz.moveL();
//				}
//			}
//			wypisz();
//		}
//		if (choice == "d") {
//			if (level1[gracz.getx()][gracz.gety() + 1] == '.'){
//				level1[gracz.getx()][gracz.gety()] = gracz.pod();
//				level1[gracz.getx()][gracz.gety() + 1] = gracz.Znak();
//				gracz.moveR();
//			}
//			if (level1[gracz.getx()][gracz.gety() + 1] == 'o') {
//				if (level1[skrz.getx()][skrz.gety() + 1] == '.') {
//					level1[skrz.getx()][skrz.gety() + 1] = skrz.Znak();
//					level1[gracz.getx()][gracz.gety() + 1] = gracz.Znak();
//					level1[gracz.getx()][gracz.gety()] = gracz.pod();
//					gracz.moveR();
//					skrz.moveR();
//				}
//			}
//			wypisz();
//		}
//	}
//}
//
//void Sokoban::wypisz() {
//	for (int x = 0; x < 5; x++) {
//		for (int y = 0; y < 7; y++) {
//			cout << level1[x][y];
//		}
//		cout << endl;
//	}
//}
//
//int Sokoban::znajdzX(char z){
//	for (int x = 0; x < 5; x++) {
//		for (int y = 0; y < 7; y++) {
//			if (level1[x][y] == z){
//				return x;
//			} 
//		}
//	}
//}
//
//int Sokoban::znajdzY(char z) {
//	for (int x = 0; x < 5; x++) {
//		for (int y = 0; y < 7; y++) {
//			if (level1[x][y] == z) {
//				return y;
//			}
//		}
//	}
//}
