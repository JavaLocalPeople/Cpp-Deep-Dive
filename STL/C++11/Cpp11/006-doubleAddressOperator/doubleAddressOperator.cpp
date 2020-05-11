#include <algorithm>

using namespace std;

/*

	Double Address Operator: &&

	- it means an "rvalue reference"
	- Used in function parameters



*/

void fun(const int &lref)
{
	printf("l-value\n");
}

void fun(int &&rref)
{
	printf("r-value\n");
}

int main()
{
	int x{ 5 };
	fun(x);
	fun(5);

	getchar();
}