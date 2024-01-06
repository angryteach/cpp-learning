/* Classes and objects */

#include <iostream>

using namespace std;

class Car
{
	private:
		int classID {123};
		void printID() { cout << "The ID: " << classID << endl; }
	
	public:
		string className {"4x4"};
		string classNickname;
		void printInfo() { cout << "The classname: " << className << endl; 
		cout << "The nickname:" << classNickname << endl; }
};

int main()
{
	Car car1;
	cout << "The className: " << car1.className << endl;
	cout << "The classNickname: " << car1.classNickname << endl;
	car1.className = "2x4";
	car1.classNickname = "Lada";
	cout << "The className: " << car1.className << endl;
	cout << "The classNickname: " << car1.classNickname << endl;
	//car1.printID();
	car1.printInfo();

	return 0;
}
