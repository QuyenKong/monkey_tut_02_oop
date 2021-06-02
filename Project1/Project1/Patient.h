#pragma once
#include "CoronaVirus.h"
#include "AlphaCoronaVirus.h"
#include "BetaCoronaVirus.h"
#define ALIVE 1
#define DIE 0
class Patient
{
private:
	int m_resistance; // de khang cua benh nhan 
	std::list<CoronaVirus*> m_virusList;
	int m_state;// trang thai song chet cua benh nhan
public:
	//Constructor
	Patient();
	int random(int minN, int maxN);
	void initResistance();
	void doStart();
	void takeMedicine();
	int sumVirusResistance();
	void doDie();
	int getState();
	void checkVirus();
};

