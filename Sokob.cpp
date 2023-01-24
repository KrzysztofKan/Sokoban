#include <iostream>

#include "Sokoban.h"
#include "SokobanV2.h"

//Gra Sokoban
//
//Pola :
//# - sciana
//. - podloga
//@ - gracz
//o - skrzynia
//_ - pole docelowa
//
//Przykładowy poziom :
//#######
//#.....#
//#.@o_.#
//#.....#
//#######
//
//Zasady:
//1. Gracz może wykonywać kroki w kierunkach góra, dół, lewo, prawo.
//2. Gracz może poruszać się po polach '.' i '_'.
//3. Wejście na pole ze skrzynią('o') jest wykonalne tylko jeśli następne pole w tym samym kierunku jest puste('.' lub '_').Skrzynia jest przesuwana na to pole.
//4. Jeśli na wszystkich polach docelowych znajduje się skrzynia to gracz wygrywa.



int main() {
	Sokoban sok;
	sok.play();
}