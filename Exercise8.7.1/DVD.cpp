/*
 * DVD.cpp
 *
 *  Created on: Jul 4, 2018
 *      Author: SoftStar
 */

#include "DVD.h"

DVD::DVD(string initTitel, int initAltersfreigabe, string initGenre):Medium(initTitel), altersfreigabe(initAltersfreigabe), genre(initGenre)
{
	// TODO Auto-generated constructor stub

}

DVD::~DVD() {
	// TODO Auto-generated destructor stub
}

void DVD::ausgabe() const
{
	Medium::ausgabe();
	std::cout << "FSK: " <<  altersfreigabe<< std::endl;
	std::cout << "Genre: " << genre << std::endl;
}

bool DVD::ausleihen(Person person,Datum ausleihdatum)
{
	int age_month = ausleihdatum - person.getGeburtsdatum();
	int age = age_month/12;


	cout<<"\n"<<person.getName()<<"'s age is "<<age<<endl;

	if (status)
	{
		std::cout << "Das Medium \"" << titel << "\" ist bereits verliehen!" << std::endl;
		return false;
	}
	else if(age < this->altersfreigabe)
	{
		std::cout << "You are not old enough to borrow DVD \"" << titel << "\"!" << std::endl;
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
