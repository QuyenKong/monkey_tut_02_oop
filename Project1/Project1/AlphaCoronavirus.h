#pragma once
#include "CoronaVirus.h"
#include <string>
#include <fstream>
#include<iostream>
#include<math.h>
#include <fstream>
#include<string>
using namespace std;
#define REDCOLOR 1
#define BLUECOLOR 2

class AlphaCoronaVirus :
    public CoronaVirus
{
private:
	int m_Color;
public:

	//Constructors:
	AlphaCoronaVirus();
	//copy constructor
	AlphaCoronaVirus(const AlphaCoronaVirus& c);
	//destructor 	
	~AlphaCoronaVirus();
	// Getter 
	int	getColor();
	//Setter
	void setColor(int color);
	//handle doBorn
	virtual void doBorn();
	//handle doClone
	virtual std::list<CoronaVirus*> doClone();
	//handle doDie
	virtual void doDie();
	//handle initResistance 
	virtual void initResistance();
};