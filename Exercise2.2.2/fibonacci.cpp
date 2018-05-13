//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXVIII
// Versuch 02
//
// Datei:  main.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

#include <iostream>

int fibonacci(int n)
{
//	int previousFib = 1;
	int previousFib = 0;
	int currentFib = 1;
	if(n == 0)
	{
		return 0;
	}

	if(n == 1)
	{
		return 1;
	}
	for (int i = 0; i < n-1; i++)
	{
		int newFib = previousFib + currentFib ;
		previousFib = currentFib;
		currentFib = newFib ;
//		currentFib = previousFib ;
	}
	return currentFib ;
}

int main ()
{
	std::cout << " Fibonacci - Zahlen von 0 bis 12:" << std::endl ;
	for (int i = 1; i <= 12 ; i ++)
	{
		std::cout << "f(" << i << ") = " << fibonacci(i) << std::endl ;
	}
	return 0;
}
