#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>
#include "Class.h"

using namespace std;

int main()
{
	fstream zapis("procesory.txt");
	fstream prod("producenci.txt");
	fstream kart("karty_graficzne.txt");
	fstream ram("pamiec_ram.txt");
	fstream ply("plyty_glowne.txt");
	fstream sup("zasilacze.txt");
	fstream hard("dyski.txt");
	fstream id("id.txt");
	system("chcp 1250");
	system("cls");
	Warehouse s1;
	s1.start();
	s1.Main_Menu();

}

