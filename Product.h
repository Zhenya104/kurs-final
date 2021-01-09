#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

class MilitaryEquipment;

class ITank;
class ITroopCarrier;
class IRobot;
class IHowitzer;
class IFighter;


class MilitaryEquipment
{
protected:
	float power,
		range,
		combat_weight,
		caliber;
	size_t crew, year, amount;
	string type_of_weapon, movement;
	string get_all_data();
public:
	void Initialize(float, float, float, float, size_t, size_t, size_t, string, string);
	void Initialize(MilitaryEquipment*);
	virtual string get_data_to_print() = 0;

};

class ITank : public MilitaryEquipment
{
private:
public:
	virtual ~ITank() {};
	virtual string get_data_to_print() = 0;
};
class ITroopCarrier : public MilitaryEquipment
{
private:
public:
	virtual ~ITroopCarrier() {};
	virtual string get_data_to_print() = 0;
};
class IRobot : public MilitaryEquipment
{
private:
public:
	virtual ~IRobot() {};
	virtual string get_data_to_print() = 0;
};
class IHowitzer : public MilitaryEquipment
{
private:
public:
	virtual ~IHowitzer() {};
	virtual string get_data_to_print() = 0;
};
class IFighter : public MilitaryEquipment
{
private:
public:
	virtual ~IFighter() {};
	virtual string get_data_to_print() = 0;
};

class RuTank : public ITank
{
private:
public:
	RuTank() {};
	RuTank(MilitaryEquipment*);
	RuTank(float, float, float, float, size_t, size_t, size_t, string, string);
	string get_data_to_print() override;
};
class RuTroopCarrier : public ITroopCarrier
{
private:
public:
	RuTroopCarrier() {};
	RuTroopCarrier(MilitaryEquipment*);
	RuTroopCarrier(float, float, float, float, size_t, size_t, size_t, string, string);
	string get_data_to_print() override;
};
class RuRobot : public IRobot
{
private:
public:
	RuRobot() {};
	RuRobot(MilitaryEquipment*);
	RuRobot(float, float, float, float, size_t, size_t, size_t, string, string);
	string get_data_to_print() override;
};
class RuHowitzer : public IHowitzer
{
private:
public:
	RuHowitzer() {};
	RuHowitzer(MilitaryEquipment*);
	RuHowitzer(float, float, float, float, size_t, size_t, size_t, string, string);
	string get_data_to_print() override;
};
class RuFighter : public IFighter
{
private:
public:
	RuFighter() {};
	RuFighter(MilitaryEquipment*);
	RuFighter(float, float, float, float, size_t, size_t, size_t, string, string);
	string get_data_to_print() override;
};

class UsTank : public ITank
{
private:
public:
	UsTank() {};
	UsTank(MilitaryEquipment*);
	UsTank(float, float, float, float, size_t, size_t, size_t, string, string);
	string get_data_to_print() override;
};
class UsTroopCarrier : public ITroopCarrier
{
private:
public:
	UsTroopCarrier() {};
	UsTroopCarrier(MilitaryEquipment*);
	UsTroopCarrier(float, float, float, float, size_t, size_t, size_t, string, string);
	string get_data_to_print() override;
};
class UsRobot : public IRobot
{
private:
public:
	UsRobot() {};
	UsRobot(MilitaryEquipment*);
	UsRobot(float, float, float, float, size_t, size_t, size_t, string, string);
	string get_data_to_print() override;
};
class UsHowitzer : public IHowitzer
{
private:
public:
	UsHowitzer() {};
	UsHowitzer(MilitaryEquipment*);
	UsHowitzer(float, float, float, float, size_t, size_t, size_t, string, string);
	string get_data_to_print() override;
};
class UsFighter : public IFighter
{
private:
public:
	UsFighter() {};
	UsFighter(MilitaryEquipment*);
	UsFighter(float, float, float, float, size_t, size_t, size_t, string, string);
	string get_data_to_print() override;
};
