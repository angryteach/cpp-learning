// This is a comment


#include <iostream>

using namespace std;

namespace myspace {
	void myfunc(){
		cout << "Hello!\n" << endl;
	}
}

int main()
{
	int answer{42};
	myspace::myfunc();	
	cout << "The answer to life, the Universe and everything is " 
	<< answer 
	<< endl;
	
	return 0;
}
