#pragma once
#include "AlphaCoronavirus.h"
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

//Constructors
AlphaCoronaVirus::AlphaCoronaVirus() {
	doBorn();
	initResistance();
}
//destructor 	
AlphaCoronaVirus::~AlphaCoronaVirus() {
	doDie();
}

//copy constructor
AlphaCoronaVirus::AlphaCoronaVirus(const AlphaCoronaVirus& c) {
	m_DNA = c.m_DNA;
	m_Resistance = c.m_Resistance;
	m_Color = c.m_Color;
}

// Getter 
int AlphaCoronaVirus::getColor() {
	return m_Color;
}
//Setter
void AlphaCoronaVirus::setColor(int color) {
	m_Color = color;
}
std::list<CoronaVirus*> AlphaCoronaVirus::doClone() {
	AlphaCoronaVirus* a = new AlphaCoronaVirus(*this);
	list<CoronaVirus*>  listCoronaVirus;
	listCoronaVirus.push_back(a);
	return  listCoronaVirus;
 }
void AlphaCoronaVirus::doBorn() {
	loadADNInformation();
	m_Color = random(1, 2);
}
void AlphaCoronaVirus::doDie() {
	cout << "virus alpha da chet";
}
void AlphaCoronaVirus::initResistance() {
	if (m_Color == REDCOLOR) {
		m_Resistance = random(10, 20);
	}
	else {
		m_Resistance = random(10, 15);
	}
}


