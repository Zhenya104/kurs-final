#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include "Product.h"
#include "Factory.h"
using namespace std;

void putf(string file, MilitaryEquipment* arr[], size_t size)
{
	fstream fout(file, ios::out);
	if (!fout)
	{
		std::cout << "could not open " << file << std::endl;
		std::cin.ignore();
		return;
	}
	for (size_t i = 0; i < size; i++)
		fout << arr[i]->get_data_to_print() << endl;
	fout.close();
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const size_t amm_of_ME = 5;
	const size_t amm_of_C = 2;
	MilitaryEquipment* arr[amm_of_C][amm_of_ME];
	IMilitaryEquipmentFactory* Factory;
	int m;

	while (true)
	{
		cout << "\nМеню\n 1. Создать Фабрику для России\n 2. Создать Фабрику для США\n 0. Выход\n-> ";
		cin >> m;
		switch (m)
		{
		case 1:
			Factory = new RuMilitaryEquipmentFactory("RuMilitary.txt");
			arr[0][0] = Factory->createTank();
			arr[0][1] = Factory->createTroopCarrier();
			arr[0][2] = Factory->createRobot();
			arr[0][3] = Factory->createHowitzer();
			arr[0][4] = Factory->createFighter();
			putf("RuMilitaryOut.txt", arr[0], amm_of_ME);
			if (Factory) delete Factory;
			break;
		case 2:
			Factory = new UsMilitaryEquipmentFactory("UsMilitary.txt");
			arr[1][0] = Factory->createTank();
			arr[1][1] = Factory->createTroopCarrier();
			arr[1][2] = Factory->createRobot();
			arr[1][3] = Factory->createHowitzer();
			arr[1][4] = Factory->createFighter();
			putf("UsMilitaryOut.txt", arr[1], amm_of_ME);
			if (Factory) delete Factory;
			break;
		case 0:
			for (size_t i = 0; i < 2; i++)
				for (size_t j = 0; j < 5; j++)
					return 0;
		default:
			cout << "\nВыбран несуществующий пункт меню\n";
			break;
		}
	}
}