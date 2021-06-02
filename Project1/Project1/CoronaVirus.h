#pragma once
#include <string>
#include <fstream>
#include<iostream>
#include<math.h>
#include <fstream>
#include<string>
#include <list>
#include <list>
#define SOURCE D:/Monkey/Tutorial-02/monkey_tut_02_oop/ATGX.bin   


class CoronaVirus
{
protected:
	std::string m_DNA;
	int m_Resistance;// de khang cua virus	
public:
	// Constructors:
	CoronaVirus();
	//Copy Constructor:
	CoronaVirus(const CoronaVirus& c);
	//destructor 
	~CoronaVirus();
	// Getter 
	std::string getDNA();
	int getResistance();
	// Setter
	void setDNA(std::string dna);
	void setResistance(int r);
	//Load informaion from file 
	void loadADNInformation();
	void reduceResistance(int i_medicineResistance);
	int random(int minN, int maxN);
	// Pure virtual function.
		virtual void doBorn() = 0;
		virtual std::list<CoronaVirus*> doClone()=0 ;
		virtual void doDie() = 0;
		virtual void initResistance() = 0;
};

