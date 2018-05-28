

#include <iostream>
using namespace std;

bool function(int input);

int main()
{
	cout<<"This is me\n";
	cout<<"Welcome to my program!\n";

	int var=0;
	cin>>var;

	bool result = function(var);

	cout<<"This is your result: " << result;

	return 0;
}

bool function(int input)
{
	if(input>0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


