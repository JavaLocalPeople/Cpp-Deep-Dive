#include <utility> // std::move()
#include <string>
#include <vector>

using namespace std;

/*

	Moving semantics

	- Performance optimization: Allows to transfer ownership of the assets and properties
	of an object directly without having to copy them when the argument is an rvalue


*/

int main()
{
	{
		/*
			std::move() := move as rvalue
			
		*/
		string foo = "foo-str";
		string bar = "bar-str";
		vector<string> vec;

		vec.push_back(foo);		  // copy

								  /*
								  move: transfer its content into the vector.
								  [bar] loses its value.
								  */
		vec.push_back(move(bar));
	}
	
	{
		/*
			std::forward() := 
			
			- allow perfect forwarding of arguments taken as rvalue referemces to deduced types,
			preserving any potential move semantics involved.

		*/



	}


	getchar();
}