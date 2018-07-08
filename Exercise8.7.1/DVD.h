/*
 * DVD.h
 *
 *  Created on: Jul 4, 2018
 *      Author: SoftStar
 */

#include <string>
using namespace std;

#ifndef DVD_H_
#define DVD_H_

#include "Medium.h"

class DVD: public Medium {
public:
	DVD(string initTitel, int initAltersfreigabe, string initGenre);
	virtual ~DVD();
	void ausgabe() const;
	bool ausleihen(Person person, Datum ausleihdatum);
protected:
	int altersfreigabe;
	string genre;

};


#endif /* DVD_H_ */
