#include "pch.h"
#include <iostream>
#include "reader.h"
#include "book.h"

using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	book WarAndPeace;
	book LordOfTheRings;
	book HarryPotterAndThePhilosophersStone;

	reader Ivan;
	reader Nikolai;
	reader Natasha;

	WarAndPeace.set_name("Война и Мир");
	LordOfTheRings.set_name("Властелин колец");
	HarryPotterAndThePhilosophersStone.set_name("Гарри Поттер и филосовский камень");

	Ivan.set_fio("Иван");
	Nikolai.set_fio("Николай");
	Natasha.set_fio("Наташа");

	Ivan.set_current_book(WarAndPeace);
	Nikolai.set_current_book(LordOfTheRings);
	Natasha.set_current_book(HarryPotterAndThePhilosophersStone);

	Ivan.get_info();
	Nikolai.get_info();
	Natasha.get_info();
}
