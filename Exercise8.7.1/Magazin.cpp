/*
 * Magazin.cpp
 *
 *  Created on: Jul 4, 2018
 *      Author: SoftStar
 */

#include "time.h"
#include "Magazin.h"
#include "Datum.h"
using namespace std;

Magazin::Magazin(string initTitel, Datum initDatumAusgabe, string initSparte) : Medium(initTitel), datumAusgabe(initDatumAusgabe), sparte(initSparte)
{
	// TODO Auto-generated constructor stub

}

Magazin::~Magazin() {
	// TODO Auto-generated destructor stub
}

void Magazin::ausgabe() const
{
	Medium::ausgabe();
	std::cout << "Ausgabe: " << datumAusgabe << std::endl;
	std::cout << "Sparte: " << sparte << std::endl;
}

bool Magazin::ausleihen(Person person,Datum ausleihdatum)
{

	int monthDifference = ausleihdatum - datumAusgabe;


	if (status)
	{
		std::cout << "Das Medium \"" << titel << "\" ist bereits verliehen!" << std::endl;
		return false;
	}
	else if(monthDifference < 1)
	{
		std::cout << "You cannot borrow magazine \"" << titel << "\", since it is newly published!" << std::endl;
		return false;
	}
	else
	{
		status = true;
		personAusgeliehen = person;
		datumAusgeliehen = ausleihdatum;
		std::cout << "Das Medium \"" << titel << "\" wird an " << person.getName() << " verliehen." << std::endl;
		return true;
	}
}

