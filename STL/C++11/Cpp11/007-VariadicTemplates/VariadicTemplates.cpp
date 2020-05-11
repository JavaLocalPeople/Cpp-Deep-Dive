#include <iostream>

using namespace std;

/*

	Variadic Templates: A template with at least one parameter pack

	- The "..." syntax creates a parameter pack or expands one. It accepts zero or more template arguments. 

*/

void print()
{
	cout << "I am empty now!";
}

template <typename T, typename... Types>
void print(T var1, Types... var2)
{
	cout << var1 << endl;
	print(var2...);
}

int main()
{
	print(1, 2.4f, "Hello");

	getchar();
}

