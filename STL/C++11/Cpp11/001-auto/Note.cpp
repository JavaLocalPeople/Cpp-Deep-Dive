#include <map>
#include <vector>
#include <string>

using namespace std;

/*
	auto: type inference
	- placeholder for a type
	- simplify writing, removing the need for typedefs

*/

class foo
{

};

int main()
{
	auto i = 42; // i is int
	auto l = 42LL; // l is an long long
	auto p = new foo(); // p is a foo*

	map<string, vector<int>> mp = {
		{"hello", {1,2} },
		{ "bye",{ 3,4 } },

	};

	// old way
	printf("----------------------old--------------------------\n");
	map<string, vector<int>>::iterator it = mp.begin();
	for (it; it != mp.end(); ++it)
	{
		string str = it->first;
		printf("str: %s\n", str.c_str());

		for (auto i : it->second)
		{
			printf("val: %d\n", i);
		}
	}
	printf("----------------------old--------------------------\n");
	printf("----------------------new--------------------------\n");

	// new way
	for (auto it = begin(mp); it != end(mp); ++it)
	{
		string str = it->first;
		printf("str: %s\n", str.c_str());

		for (auto i : it->second)
		{
			printf("val: %d\n", i);
		}
	}
	printf("----------------------new--------------------------\n");

	getchar();
}