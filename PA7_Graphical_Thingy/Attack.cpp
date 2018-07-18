#include "Attack.h"


Attack::Attack(int newAttack, string newName, string newType)
{
	mAttack = newAttack;
	mName = newName;
	mType = newType;
}




int Attack::getAttack()
{
	return mAttack;
}


string Attack::getName()
{
	return mName;
}


string Attack::getType()
{
	return mType;
}


string Attack::getSpecial()
{
	return mSpecial;
}



void Attack::setAttack(int newAttack)
{
	mAttack = newAttack;
}


void Attack::setName(string newName)
{
	mName = newName;
}


void Attack::setType(string newType)
{
	mType = newType;
}


void Attack::setSpecial(string newSpecial)
{
	mSpecial = newSpecial;
}



Attack & Attack::operator=(const Attack rhs)
{
	this->mAttack = rhs.mAttack;
	this->mName = rhs.mName;
	this->mSpecial = rhs.mSpecial;
	this->mType = rhs.mType;

	return *this;
}