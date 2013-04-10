//Bracket Operator 
// a safe array exapmle

#include <iostream>
#include "stdlib.h" 
using namespace std;

class MyClass
{
	int a[3];//class variavble
	public:
		MyClass(int i, int j, int k)
		{
			a[0] = i;
			a[1] = j;
			a[2] = k;
		}
		int &operator[](int i);
	
};
//provide range checking for My class 
int &MyClass::operator[](int i)
{
	if(i < 0|| i > 2)
	{
		cout << "Boundary Error\n";
		exit(1);
	}
	return a[i];
}

int main()
{
	MyClass ob(1,2,3);
	cout << ob[1];
	cout << " ";
	
	ob[1] = 25;
	cout << ob[1];
	ob[3] = 44;

	return 0;
}//main



