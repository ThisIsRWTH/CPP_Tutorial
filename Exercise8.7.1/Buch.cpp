/*
 * Buch.cpp
 *
 *  Created on: Jul 4, 2018
 *      Author: SoftStar
 */

#include "Buch.h"

Buch::Buch(string initTitel, string initAutor) : Medium(initTitel), autor(initAutor)
{
// This is better to initialize member variables in initialization list!
//		this->autor = initAutor;
//		this->titel = initTitel;

}

Buch::~Buch() {
	// TODO Auto-generated destructor stub
}


void Buch::ausgabe() const
{
	//Suggested Method 2 : It is better due to software resuse
	Medium::ausgabe();

//Suggested Method 1
//	std::cout << "ID: " << ID << std::endl;
//		std::cout << "Titel: " << titel << std::endl;
//		switch (status)
//		{
//		case true:
//			std::cout << "Status : Das Medium ist seit dem " << datumAusgeliehen << " an " << personAusgeliehen.getName() << " ausgeliehen." << std::endl;
//			break;
//
//		case false:
//			std::cout << "Status: Medium ist zurzeit nicht verliehen." << std::endl;
//			break;
//		}


	std::cout << "Autor: " << autor << std::endl;
}
