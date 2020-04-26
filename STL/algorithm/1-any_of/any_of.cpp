#include <array>

#include <algorithm>

using namespace std;

/*

	(c++11)
	bool any_of(InputIterator first, InputIterator last, UnaryPredicate pred)

	TL,DR.
		Test if any element in range fulfills condition



	Explain:
		Return true if pred returns ture for any of the element in the range [first, last), false otherwise
		If [first, last) is an empty range, return false.

	Parameters:
		first, last: Input iterators to the intial and final positions in a sequence.
		The range is [first, last)

		pred: Unary function that accepts an element in the range as argument and return a value convertible to bool
		Value returned indicates whether the element fulfills the conditiuon checked by this function.
		The function shall not modify its argument.
		This can either be a function pointer or a function object.

	Return:
		True: if pred return true for any of the elements in the range [first, last)
		False: otherwise OR if [first, last) is an empty range

	Complexity:
		Up to linear in the distance between first and last
	
*/

int main()
{
	int cnt = 0;

	/*
		any_of to check whether any of the elements are negative.
	*/
	printf("%d: Some of the elements are negative\n", cnt++);

	{
		std::array<int, 5> arr = { 0, 3, 2, -5, 1 };

		bool res = any_of(arr.begin(), arr.end(), [](int i) {
			return i < 0; 
		});

		printf("%s\n", res ? "true" : "false");
	}

	printf("%d: None of the elements are negative\n", cnt++);

	{
		std::array<int, 5> arr = { 0, 3, 2, 9, 1 };

		bool res = any_of(arr.begin(), arr.end(), [](int i) {
			return i < 0;
		});

		printf("%s\n", res ? "true" : "false");
	}

	printf("%d: Empty Container\n", cnt++);
	
	{
		std::array<int, 0> arr = { };

		bool res = any_of(arr.begin(), arr.end(), [](int i) {
			return i < 0;
		});

		printf("%s\n", res ? "true" : "false");
	}

	getchar();
}