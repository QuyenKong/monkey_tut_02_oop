#pragma once
#include "CoronaVirus.h"
#include "BetaCoronaVirus.h"
#include <iostream>
#define NS3 1
#define NS5 2
#define E 3
BetaCoronaVirus:: BetaCoronaVirus() {
	loadADNInformation();
	doBorn();
	initResistance();
}
//copy constructor
BetaCoronaVirus::BetaCoronaVirus(const BetaCoronaVirus& c) {
	m_DNA = c.m_DNA;
	m_Resistance = c.m_Resistance;
	m_Protein = c.m_Protein;
}
//destructor 	
BetaCoronaVirus::~BetaCoronaVirus() {
	doDie();
}
// Getter 
int	BetaCoronaVirus::getProtein() {
	return m_Protein;
}
//Setter
void BetaCoronaVirus::setProtein(int protein) {
	m_Protein = protein;
}
//handle doBorn
void BetaCoronaVirus::doBorn() {
	loadADNInformation();
	m_Protein = random(1, 3);
}
//handle doClone
std::list<CoronaVirus*> BetaCoronaVirus::doClone() {
	BetaCoronaVirus* a = new BetaCoronaVirus(*this);
	list<CoronaVirus*>  listCoronaVirus;
	listCoronaVirus.push_back(a);
	listCoronaVirus.push_back(a);
	return  listCoronaVirus;
}
//handle doDie
void BetaCoronaVirus::doDie() {
	cout << "virus beta  da chet";
}
//handle initResistance 
void BetaCoronaVirus::initResistance() {
	if (m_Protein == NS3) {
		m_Resistance = random(1, 10);
	}
	else if (m_Protein == NS5) {
		m_Resistance = random(11, 20);
	}
	else {
		m_Resistance = random(21, 30);
	}
}