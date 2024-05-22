#pragma once
#include "Giasuc.h"
#include <iostream>
using namespace std;
class Sheep : public Giasuc
{
public:
	Sheep();
	~Sheep();
	virtual int sinhcon();
	virtual int sua();
	virtual void tiengkeu();
	virtual int getloai();
};

