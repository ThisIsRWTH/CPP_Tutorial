/*
 * Buch.h
 *
 *  Created on: Jul 4, 2018
 *      Author: SoftStar
 */
#include <string>
using namespace std;

#ifndef BUCH_H_
#define BUCH_H_

#include "Medium.h"

class Buch: public Medium {

protected:
	string autor;

public:
	Buch(string initTitel, string initAutor);
	virtual ~Buch();

	virtual void ausgabe() const;
};

#endif /* BUCH_H_ */
