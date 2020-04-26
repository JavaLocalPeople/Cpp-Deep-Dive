#include <array>

#include <algorithm>

using namespace std;

/*

	(c++11)
	bool none_of(InputIterator first, InputIterator last, UnaryPredicate pred)

	TL,DR.
	Test if no element in range fulfills condition



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
		True: if pred returns false for all the elements in the range [first, last) OR if the range is empty
		False: otherwise

	Complexity:
		Up to linear in the distance between first and last

*/

int main()
{
	int cnt = 0;

	/*
		none_of to check whether none of the elements are negative.
	*/

	printf("%d: None of the elements are negative\n", cnt++);
	{
		std::array<int, 5> arr = { 0, 3, 2, 5, 1 };
		bool res = none_of(arr.begin(), arr.end(), [](int i) {
			return i < 0;
		});

		printf("%s\n", res ? "true" : "false");
	}

	printf("%d: Some of the elements are negative\n", cnt++);
	{
		std::array<int, 5> arr = { 0, -1, 2, 5, 1 };
		bool res = none_of(arr.begin(), arr.end(), [](int i) {
			return i < 0;
		});

		printf("%s\n", res ? "true" : "false");
	}

	printf("%d: Empty Container\n", cnt++);

	{
		std::array<int, 0> arr = {};

		bool res = none_of(arr.begin(), arr.end(), [](int i) {
			return i < 0;
		});

		printf("%s\n", res ? "true" : "false");
	}

	getchar();
}

/*

- print true or false
printf("%s\n", res ? "true" : "false");


*/