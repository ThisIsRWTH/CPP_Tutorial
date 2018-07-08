/*
 * Magazin.h
 *
 *  Created on: Jul 4, 2018
 *      Author: SoftStar
 */
#include <string>
#include "Datum.h"
using namespace std;

#ifndef MAGAZIN_H_
#define MAGAZIN_H_

#include "Medium.h"

class Magazin: public Medium {
public:
	Magazin(string,Datum,string);
	virtual ~Magazin();
	void ausgabe() const;
	bool ausleihen(Person person, Datum ausleihdatum);

protected:
	Datum datumAusgabe;
	string sparte;


};

#endif /* MAGAZIN_H_ */
