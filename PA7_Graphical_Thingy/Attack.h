#pragma once

#include <iostream>
#include <string>
#include <fstream>

using std::string;

class Attack
{
public:
	Attack(int newAttack = 10, string newName = "Attack!", string newType = "Normal");

	int getAttack();
	string getName();
	string getType();
	string getSpecial();

	void setAttack(int newAttack);
	void setName(string newName);
	void setType(string newType);
	void setSpecial(string newSpecial);

	Attack & operator=(const Attack rhs);

private:
	int mAttack;
	string mName;
	string mType;
	string mSpecial;
};




