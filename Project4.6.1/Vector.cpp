//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1
// Versuch 04: Einführung in die Klasse
//
// Datei:  Vektor.cpp
// Inhalt: Sourcedatei der Klasse Vektor
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Vector.h"
#include <cmath>

Vector::Vector(double inX, double inY, double inZ)
{
	x = inX;
	y = inY;
	z = inZ;
}

Vector::~Vector()
{

}

void Vector::print()
{
	std::cout << "Vector{x=" << x << ", y=" << y << ", z=" << z << "}" << std::endl;
}

double Vector::getX()
{
	return x;
}

double Vector::getY()
{
	return y;
}

double Vector::getZ()
{
	return z;
}

Vector* Vector::substract(Vector* v)
{
	double nX = x - v->getX();
	double nY = y - v->getY();
	double nZ = z - v->getZ();

	Vector *result = new Vector(nX, nY, nZ);

	return result;


	//return new Vector(x - v->getX(), y - v->getY(), z - v->getZ());
}

//Solution of Part03
double Vector::scalarProduct(Vector* inputVector)
{
	double result = (x*inputVector->getX()) + (y*inputVector->getY()) + (z*inputVector->getZ());
	return result;
}

double Vector::angleBetweenVector(Vector* inputVector)
{
	double product = this->scalarProduct(inputVector);
	double lengthA = this->getLength();
	double lengthB = inputVector->getLength();

	double result = acos(product / (lengthA*lengthB));

	//result is rad (by default)
	//result is producted to 63.662 in order to generate Grad
	return result * 63.662;

}

double Vector::getLength()
{
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

void Vector::rotateOnZAxis(double rad)
{
	x = cos(rad) * x - sin(rad) * y;
	y = sin(rad) * x + cos(rad) * y;
}


Vector* Vector::add(Vector* v1, Vector* v2)
{
	return new Vector((v1->getX() + v2->getX()), (v1->getY() + v2->getY()),
		(v1->getZ() + v2->getZ()));
}

bool Vector::isOrthogonal(Vector* v1, Vector* v2)
{
	int crpr = ((v1->getX() * v2->getX()) + (v1->getY() * v2->getY()) + (v1->getZ() * v2->getZ()));
	return (crpr < 0.1 && crpr > -0.1);
}

