//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1
// Versuch 04: Einführung in die Klasse
//
// Datei:  Vektor.h
// Inhalt: Headerdatei der Klasse Vektor
//////////////////////////////////////////////////////////////////////////////

/**
* @file Vector.h
*
* Provides a Vector object with mathematical functionalities
*/

#ifndef Vektor_H
#define Vektor_H

/*!
* @brief A Vector object with mathematical functionalities
*/
class Vector
{
public:
	/*!
	* @brief The constructor of the vector class
	* @param x the x coordinate
	* @param y the y coordinate
	* @param z the z coordinate
	*/
	Vector(double x, double y, double z);
	~Vector();

private:
	//member
	double x;
	double y;
	double z;

public:
	/*!
	* @brief prints the vector coordinates to the console
	*/
	void print();

	/*!
	* @return The X coordinate of the Vector
	*/
	double getX();

	/*!
	* @return The Y coordinate of the Vector
	*/
	double getY();

	/*!
	* @return The Z coordinate of the Vector
	*/
	double getZ();

	/*!
	* @return The length of the Vector
	*/
	double getLength();


	/*!
	* @brief substracts the given vector from the this vector
	* @return The new Vector after the substraction
	*/
	Vector* substract(Vector* v);


	/*!
	* @brief Rotates the Vector on the Z axis with the given angle
	* @param rad The angle at which the Vector should be rotated on the Z axis
	*/
	void rotateOnZAxis(double rad);


	/*!
	* @brief Adds to Vector and returns the resulting vector
	* @param v1 The first vector
	* @param v2 The second vector
	* @return The result of adding two vectors
	*/
	static Vector* add(Vector* v1, Vector* v2);


	/*!
	* @brief Checks if two vectors are orthogonal to each other
	* @param v1 The first vector
	* @param v2 The second vector
	* @return True, if the two vectors are orthogonal, false if not
	*/
	static bool isOrthogonal(Vector* v1, Vector* v2);

	double scalarProduct(Vector* inputVector);
	double angleBetweenVector(Vector* inputVector);

};

#endif
