/* Classes and objects */

#include <iostream>
#include <typeinfo>

int main()
{
	int age {15}; // change this variable around 18 to see the output

	try
	{
		if (age < 18)
		{
			throw 505;
		}
		else
		{
			std::cout << "You are old enough." << std::endl;
		}
	}
	catch (int err)
	{
		std::cout << "You got an error #" << err << "\n"
			<< "You are not of age." << "\n"
			<< "Typeid of the error: " << typeid(err).name() << std::endl;
	}

	return 0;
}
