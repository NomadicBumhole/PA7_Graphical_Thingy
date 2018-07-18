#pragma once


#include <iostream>
#include <string>
#include <fstream>

#include "Attack.h"


class Creature
{
public:
	Creature(Attack newAttack1, Attack newAttack2, Attack newAttack3, Attack newAttack4,
		string newName = "Bird", string newType = "Normal", int newDefense = 2, int newStrength = 10, int newHealth = 50);

	string getName();
	string getType();
	int getDefense();
	int getStrength();
	int getHealth();

	void setName(string newName);
	void setType(string newType);
	void setDefense(int newDefense);
	void setStrength(int newStrength);
	void setHealth(int newHealth);

	Creature & operator=(const Creature rhs);
private:
	string mName;
	string mType;
	int mDefense;
	int mStrength;
	int mHealth;

	bool mConscious;

	Attack mAttack1;
	Attack mAttack2;
	Attack mAttack3;
	Attack mAttack4;
};