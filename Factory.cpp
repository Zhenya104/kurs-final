#include "Factory.h"

void RuMilitaryEquipmentFactory::Initialize(string file)
{
	const size_t amm_of_ME = 5;
	MilitaryEquipment* ME[amm_of_ME] = { &t,&c,&r,&h,&f };
	float power,
		range,
		combat_weight,
		caliber;
	size_t crew, year, amount;
	string type_of_weapon, movement;
	std::ifstream fin(file);
	if (!fin)
	{
		std::cout << "could not open " << file << std::endl;
		std::cin.ignore();
		return;
	}
	for (size_t i = 0; i < amm_of_ME; i++)
	{
		fin >> power >> range >> combat_weight >> caliber >> crew >> year >> amount;
		getline(fin, type_of_weapon);
		type_of_weapon.erase(type_of_weapon.begin());
		getline(fin, movement);
		ME[i]->Initialize(power, range, combat_weight, caliber, crew, year, amount, type_of_weapon, movement);
	}
	fin.close();
}
RuMilitaryEquipmentFactory::RuMilitaryEquipmentFactory(string file)
{
	Initialize(file);
}

ITank* RuMilitaryEquipmentFactory::createTank()
{
	return new RuTank(&t);
}
ITroopCarrier* RuMilitaryEquipmentFactory::createTroopCarrier()
{
	return new RuTroopCarrier(&c);
}
IRobot* RuMilitaryEquipmentFactory::createRobot()
{
	return new RuRobot(&r);
}
IHowitzer* RuMilitaryEquipmentFactory::createHowitzer()
{
	return new RuHowitzer(&h);
}
IFighter* RuMilitaryEquipmentFactory::createFighter()
{
	return new RuFighter(&f);
}


void UsMilitaryEquipmentFactory::Initialize(string file)
{
	const size_t amm_of_ME = 5;
	MilitaryEquipment* ME[amm_of_ME] = { &t,&c,&r,&h,&f };
	float power,
		range,
		combat_weight,
		caliber;
	size_t crew, year, amount;
	string type_of_weapon, movement;
	std::ifstream fin(file);
	if (!fin)
	{
		std::cout << "could not open " << file << std::endl;
		std::cin.ignore();
		return;
	}
	for (size_t i = 0; i < amm_of_ME; i++)
	{
		fin >> power >> range >> combat_weight >> caliber >> crew >> year >> amount;
		getline(fin, type_of_weapon);
		type_of_weapon.erase(type_of_weapon.begin());
		getline(fin, movement);
		ME[i]->Initialize(power, range, combat_weight, caliber, crew, year, amount, type_of_weapon, movement);
	}
	fin.close();
}
UsMilitaryEquipmentFactory::UsMilitaryEquipmentFactory(string file)
{
	Initialize(file);
}

ITank* UsMilitaryEquipmentFactory::createTank()
{
	return new UsTank(&t);
}
ITroopCarrier* UsMilitaryEquipmentFactory::createTroopCarrier()
{
	return new UsTroopCarrier(&c);
}
IRobot* UsMilitaryEquipmentFactory::createRobot()
{
	return new UsRobot(&r);
}
IHowitzer* UsMilitaryEquipmentFactory::createHowitzer()
{
	return  new UsHowitzer(&h);
}
IFighter* UsMilitaryEquipmentFactory::createFighter()
{
	return  new UsFighter(&f);
}
