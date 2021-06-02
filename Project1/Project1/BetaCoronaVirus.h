#pragma once
#include "CoronaVirus.h"
#include <iostream>
#define NS3 1
#define NS5 2
#define E 3
using namespace std;

class BetaCoronaVirus :
    public CoronaVirus
{
private:
	int m_Protein;
public:
	//Constructors:
	BetaCoronaVirus();
	//copy constructor
	BetaCoronaVirus(const BetaCoronaVirus& c);
	//destructor 	
	~BetaCoronaVirus();
	// Getter 
	int	getProtein();
	//Setter
	void setProtein(int protein);
	//handle doBorn
	void doBorn();
	//handle doClone
	virtual std::list<CoronaVirus*> doClone();
	//handle doDie
	void doDie();
	//handle initResistance 
	void initResistance();
};

