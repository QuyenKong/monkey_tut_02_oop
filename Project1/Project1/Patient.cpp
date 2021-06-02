#include "Patient.h"
//Constructor
Patient::Patient() {
		initResistance();
		doStart();
	}
int Patient::random(int minN, int maxN) {
		return minN + rand() % (maxN + 1 - minN);
	}
void Patient::initResistance() {
		m_resistance =  random(1000, 9000);
	}
	
void Patient::doStart() {
		m_state = ALIVE;
		int randomAlphaVirus = random(20, 40);
		int randomBetaVirus = random(20, 40);
		for (int i = 0;i <= randomAlphaVirus;i++) {
			AlphaCoronaVirus* alpha = new AlphaCoronaVirus[randomAlphaVirus];
			m_virusList.push_back(alpha);
		}
		for (int i = 0;i <= randomBetaVirus;i++) {
			BetaCoronaVirus* beta= new BetaCoronaVirus[randomBetaVirus];
			m_virusList.push_back(beta);
		}
	}
void Patient::takeMedicine() {
		list<CoronaVirus*> m_virusCloneList;
		std::list<CoronaVirus*>::iterator virus = m_virusList.begin();
		while (virus != m_virusList.end())
		{
			int medicine = random(1, 60);
			(*virus)->reduceResistance(medicine);
			int a = (*virus)->getResistance();
			if (a > 0)
			{
				m_virusCloneList = (*virus)->doClone(); 
				cout << "Virus co suc de khang " << (*virus)->getResistance() + medicine << " da duoc nhan ban \n";
				++virus;
			}
			else
			{
				if ((*virus)->getResistance() < -1000)
				{
					int xxa = 1;
				}
				cout << "Virus co suc de khang " << (*virus)->getResistance()+medicine << " da bi thuoc co suc de khang la " << medicine << " tieu diet\n";
				m_virusList.erase(virus++);
			}
			
		}
		if (m_resistance < sumVirusResistance()) {
			doDie();
		}
		if (m_virusCloneList.size() != 0) {
			for (list<CoronaVirus*>::iterator virus = m_virusCloneList.begin(); virus != m_virusCloneList.end(); virus++) {
				m_virusList.push_back((*virus));
			}
		}
	}
int Patient::sumVirusResistance() {
		int sum = 0;
		for (list<CoronaVirus*>::iterator virus = m_virusList.begin(); virus != m_virusList.end(); virus++) {
			 sum += (*virus)->getResistance();
		}
		return sum;
	}
void Patient::doDie() {
		for (list<CoronaVirus*>::iterator virus = m_virusList.begin(); virus != m_virusList.end(); ++virus) {
			(*virus)->doDie();
		}
		m_state = DIE;
		cout << "Benh nhan da chet";
	}
	int Patient::getState() {
		return m_state;
		
	}
void Patient::checkVirus() {
		cout << "Benh nhan con " << m_virusList.size() << " con virus";
	}