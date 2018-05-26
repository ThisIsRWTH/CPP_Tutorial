#include<iostream>
void zaehlen(int);

int main(int argc, char** argv)
{
	std::cout<< "Hello World!"<<std::endl;
	zaehlen(10);
	return 0;
}

void zaehlen(int max)
{
	for(int var=0; var<max;++var)
	{
		std::cout<<var<<std::endl;
		if(var == (int)(max/2))
		{
			std::cout<<"Haelfte ist geschafft!"<<std::endl;
		}
	}

}
