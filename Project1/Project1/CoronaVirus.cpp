#pragma once
#include <string>
#include <fstream>
#include<iostream>
#include<math.h>
#include <fstream>
#include<string>
#include <list>
#include <list>
#include "CoronaVirus.h"
#define SOURCE "D:/Monkey/Tutorial-02/monkey_tut_02_oop/ATGX.bin"
//Constructer
CoronaVirus:: CoronaVirus() {
	loadADNInformation();
}
//Copy Constructer
CoronaVirus::CoronaVirus(const CoronaVirus& c) {
	m_DNA = c.m_DNA;
	m_Resistance = c.m_Resistance;
}
//destructor 
CoronaVirus::~CoronaVirus() {
	m_Resistance = -1;
	m_DNA = "";
}
// Getter
std::string CoronaVirus::getDNA() {
	return  m_DNA;
}
// Getter
int CoronaVirus::getResistance() {
	return m_Resistance;
}

// Setter
void CoronaVirus::setDNA(std::string dna) {
	m_DNA = dna;
}
// Setter
void CoronaVirus::setResistance(int r) {
	m_Resistance = r;
}
//Load informaion from file 
void CoronaVirus::loadADNInformation() {
	std::fstream f;
	f.open(SOURCE, std::ios::in);

	getline(f, m_DNA);

	f.close();
}
// call this funtion to reduce virus resistant 
void CoronaVirus::reduceResistance(int i_medicineResistance) {
	m_Resistance -= i_medicineResistance;
}
//random funtion
int CoronaVirus::random(int minN, int maxN) {
	return minN + rand() % (maxN + 1 - minN);
}
