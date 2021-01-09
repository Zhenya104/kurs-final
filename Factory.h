#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include "Product.h"
using namespace std;

class IMilitaryEquipmentFactory;

class RuMilitaryEquipmentFactory;
class UsMilitaryEquipmentFactory;


class IMilitaryEquipmentFactory
{
protected:
	virtual void Initialize(string) = 0;
public:
	virtual ITank* createTank() = 0;
	virtual ITroopCarrier* createTroopCarrier() = 0;
	virtual IRobot* createRobot() = 0;
	virtual IHowitzer* createHowitzer() = 0;
	virtual IFighter* createFighter() = 0;
};

class RuMilitaryEquipmentFactory : public IMilitaryEquipmentFactory
{
private:
	RuTank t;
	RuTroopCarrier c;
	RuRobot r;
	RuHowitzer h;
	RuFighter f;
	void Initialize(string) override;
public:
	RuMilitaryEquipmentFactory(string);
	ITank* createTank() override;
	ITroopCarrier* createTroopCarrier() override;
	IRobot* createRobot() override;
	IHowitzer* createHowitzer() override;
	IFighter* createFighter() override;
};
class UsMilitaryEquipmentFactory : public IMilitaryEquipmentFactory
{
private:
	UsTank t;
	UsTroopCarrier c;
	UsRobot r;
	UsHowitzer h;
	UsFighter f;
	void Initialize(string) override;
public:
	UsMilitaryEquipmentFactory(string);
	ITank* createTank() override;
	ITroopCarrier* createTroopCarrier() override;
	IRobot* createRobot() override;
	IHowitzer* createHowitzer() override;
	IFighter* createFighter() override;
};
