#include "Product.h"

void MilitaryEquipment::Initialize(MilitaryEquipment* ME)
{
	this->power = ME->power;
	this->range = ME->range;
	this->combat_weight = ME->combat_weight;
	this->caliber = ME->caliber;
	this->crew = ME->crew;
	this->year = ME->year;
	this->amount = ME->amount;
	this->type_of_weapon = ME->type_of_weapon;
	this->movement = ME->movement;
}
void MilitaryEquipment::Initialize(float _power, float _range, float _combat_weight, float _caliber, size_t _crew, size_t _year, size_t _amount, string _type_of_weapon, string _movement)
{
	power = _power;
	range = _range;
	combat_weight = _combat_weight;
	caliber = _caliber;
	crew = _crew;
	year = _year;
	amount = _amount;
	type_of_weapon = _type_of_weapon;
	movement = _movement;
}
string MilitaryEquipment::get_all_data()
{
	string data;
	data += "\n\tмощность: ";
	data += to_string(power);
	data += "\n\tдальность: ";
	data += to_string(range);
	data += "\n\tтип оружия: ";
	data += type_of_weapon;
	data += "\n\tкалибр: ";
	data += to_string(caliber);
	data += "\n\tметод передвижения: ";
	data += movement;
	data += "\n\tгод создания: ";
	data += to_string(year);
	data += "\n\tколичество: ";
	data += to_string(amount);
	data += "\n\tбоевая масса: ";
	data += to_string(combat_weight);
	data += "\n\tэкипаж: ";
	data += to_string(crew);
	return data;
}


RuTank::RuTank(MilitaryEquipment* T)
{
	Initialize(T);
}
RuTank::RuTank(float _power, float _range, float _combat_weight, float _caliber, size_t _crew, size_t _year, size_t _amount, string _type_of_weapon, string _movement)
{
	Initialize(_power, _range, _combat_weight, _caliber, _crew, _year, _amount, _type_of_weapon, _movement);
}
string RuTank::get_data_to_print()
{
	string data;
	data += "\nБоевой танк - Россия";
	data += get_all_data();
	return data;
}

RuTroopCarrier::RuTroopCarrier(MilitaryEquipment* T)
{
	Initialize(T);
}
RuTroopCarrier::RuTroopCarrier(float _power, float _range, float _combat_weight, float _caliber, size_t _crew, size_t _year, size_t _amount, string _type_of_weapon, string _movement)
{
	Initialize(_power, _range, _combat_weight, _caliber, _crew, _year, _amount, _type_of_weapon, _movement);
}
string RuTroopCarrier::get_data_to_print()
{
	string data;
	data += "\nБронетранспортер - Россия";
	data += get_all_data();
	return data;
}

RuRobot::RuRobot(MilitaryEquipment* T)
{
	Initialize(T);
}
RuRobot::RuRobot(float _power, float _range, float _combat_weight, float _caliber, size_t _crew, size_t _year, size_t _amount, string _type_of_weapon, string _movement)
{
	Initialize(_power, _range, _combat_weight, _caliber, _crew, _year, _amount, _type_of_weapon, _movement);
}
string RuRobot::get_data_to_print()
{
	string data;
	data += "\nБоевой робот - Россия";
	data += get_all_data();
	return data;
}

RuHowitzer::RuHowitzer(MilitaryEquipment* T)
{
	Initialize(T);
}
RuHowitzer::RuHowitzer(float _power, float _range, float _combat_weight, float _caliber, size_t _crew, size_t _year, size_t _amount, string _type_of_weapon, string _movement)
{
	Initialize(_power, _range, _combat_weight, _caliber, _crew, _year, _amount, _type_of_weapon, _movement);
}
string RuHowitzer::get_data_to_print()
{
	string data;
	data += "\nГаубица - Россия";
	data += get_all_data();
	return data;
}

RuFighter::RuFighter(MilitaryEquipment* T)
{
	Initialize(T);
}
RuFighter::RuFighter(float _power, float _range, float _combat_weight, float _caliber, size_t _crew, size_t _year, size_t _amount, string _type_of_weapon, string _movement)
{
	Initialize(_power, _range, _combat_weight, _caliber, _crew, _year, _amount, _type_of_weapon, _movement);
}
string RuFighter::get_data_to_print()
{
	string data;
	data += "\nИстребитель - Россия";
	data += get_all_data();
	return data;
}


UsTank::UsTank(MilitaryEquipment* T)
{
	Initialize(T);
}
UsTank::UsTank(float _power, float _range, float _combat_weight, float _caliber, size_t _crew, size_t _year, size_t _amount, string _type_of_weapon, string _movement)
{
	Initialize(_power, _range, _combat_weight, _caliber, _crew, _year, _amount, _type_of_weapon, _movement);
}
string UsTank::get_data_to_print()
{
	string data;
	data += "\nБоевой танк - США";
	data += get_all_data();
	return data;
}

UsTroopCarrier::UsTroopCarrier(MilitaryEquipment* T)
{
	Initialize(T);
}
UsTroopCarrier::UsTroopCarrier(float _power, float _range, float _combat_weight, float _caliber, size_t _crew, size_t _year, size_t _amount, string _type_of_weapon, string _movement)
{
	Initialize(_power, _range, _combat_weight, _caliber, _crew, _year, _amount, _type_of_weapon, _movement);
}
string UsTroopCarrier::get_data_to_print()
{
	string data;
	data += "\nБронетранспортер - США";
	data += get_all_data();
	return data;
}

UsRobot::UsRobot(MilitaryEquipment* T)
{
	Initialize(T);
}
UsRobot::UsRobot(float _power, float _range, float _combat_weight, float _caliber, size_t _crew, size_t _year, size_t _amount, string _type_of_weapon, string _movement)
{
	Initialize(_power, _range, _combat_weight, _caliber, _crew, _year, _amount, _type_of_weapon, _movement);
}
string UsRobot::get_data_to_print()
{
	string data;
	data += "\nБоевой робот - США";
	data += get_all_data();
	return data;
}

UsHowitzer::UsHowitzer(MilitaryEquipment* T)
{
	Initialize(T);
}
UsHowitzer::UsHowitzer(float _power, float _range, float _combat_weight, float _caliber, size_t _crew, size_t _year, size_t _amount, string _type_of_weapon, string _movement)
{
	Initialize(_power, _range, _combat_weight, _caliber, _crew, _year, _amount, _type_of_weapon, _movement);
}
string UsHowitzer::get_data_to_print()
{
	string data;
	data += "\nГаубица - США";
	data += get_all_data();
	return data;
}

UsFighter::UsFighter(MilitaryEquipment* T)
{
	Initialize(T);
}
UsFighter::UsFighter(float _power, float _range, float _combat_weight, float _caliber, size_t _crew, size_t _year, size_t _amount, string _type_of_weapon, string _movement)
{
	Initialize(_power, _range, _combat_weight, _caliber, _crew, _year, _amount, _type_of_weapon, _movement);
}
string UsFighter::get_data_to_print()
{
	string data;
	data += "\nИстребитель - США";
	data += get_all_data();
	return data;
}
