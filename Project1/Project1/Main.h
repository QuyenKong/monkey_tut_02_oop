#pragma once
#include<iostream>
#include "Patient.h"
using namespace std;
	int main() {
		Patient* a = new Patient();
		a->takeMedicine();
		a->checkVirus();
		return 0;
	}

