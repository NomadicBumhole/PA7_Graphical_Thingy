#include "Creature.h"


Creature::Creature(Attack newAttack1, Attack newAttack2, Attack newAttack3, Attack newAttack4,
	string newName, string newType, int newDefense, int newStrength, int newHealth)
{
	mAttack1 = newAttack1;
	mAttack2 = newAttack2;
	mAttack3 = newAttack3;
	mAttack4 = newAttack4;

	mConscious = true;

	mName = newName;
	mType = newType;
	mDefense = newDefense;
	mStrength = newStrength;
	mHealth = newHealth;
}

string Creature::getName()
{
	return mName;
}


string Creature::getType()
{
	return mType;
}


int Creature::getDefense()
{
	return mDefense;
}


int Creature::getStrength()
{
	return mStrength;
}


int Creature::getHealth()
{
	return mHealth;
}




void Creature::setName(string newName)
{
	mName = newName;
}


void Creature::setType(string newType)
{
	mType = newType;
}


void Creature::setDefense(int newDefense)
{
	mDefense = newDefense;
}


void Creature::setStrength(int newStrength)
{
	mStrength = newStrength;
}


void Creature::setHealth(int newHealth)
{
	mHealth = newHealth;
}



Creature & Creature::operator=(const Creature rhs)
{
	//mAttack1 = 
	//mAttack2 = newAttack2;
	//mAttack3 = newAttack3;
	//mAttack4 = newAttack4;

	//mConscious = true;

	//mName = newName;
	//mType = newType;
	//mDefense = newDefense;
	//mStrength = newStrength;
	//mHealth = newHealth;
}