#pragma once
#include "Giasuc.h"
#include <iostream>
using namespace std;
class Goat : public Giasuc
{
public:
	Goat();
	~Goat();
	virtual int sinhcon();
	virtual int sua();
	virtual void tiengkeu();
	virtual int getloai();
};

