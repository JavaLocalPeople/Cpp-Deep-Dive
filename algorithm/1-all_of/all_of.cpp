#include <array>

#include <algorithm>


using namespace std;

/*
	(c++11)
	bool all_of(InputIterator first, InputIterator last, UnaryPredicate pred)
	
	TL,DR.
	Test condition on all elements in range

	


	Parameters:
		first, last: Input iterators to the intial and final positions in a sequence. 
		The range is [first, last)

		pred: Unary function that accepts an element in the range as argument and return a value convertible to bool
		Value returned indicates whether the element fulfills the conditiuon checked by this function.
		The function shall not modify its argument.
		This can either be a function pointer or a function object.

	Return:
		True: all the elements in thr range OR the range is empty
		False: otherwise
	
	Complexity:
		Up to linear in the distance between first and last



*/
int main()
{
	int cnt = 0;

	/*
		all_of to check whether all elements are odd. 
	*/
	printf("%d: All elements are odd\n", cnt++);
	{
		std::array<int, 5> arr = { 3, 5, 7, 9, 11 };

		bool res = all_of(arr.begin(), arr.end(), [](int i) {
			return i % 2 == 1;
		});

		printf("%s\n", res ? "true" : "false");
	}

	printf("%d: Not all elements are odd\n", cnt++);
	{
		std::array<int, 5> arr = { 3, 5, 7, 8, 11 };

		bool res = all_of(arr.begin(), arr.end(), [](int i) {
			return i % 2 != 0;
		});

		printf("%s\n", res ? "true" : "false");
	}
	printf("%d: Empty container\n", cnt++);
	{
		std::array<int, 5> arr = {};

		bool res = all_of(arr.begin(), arr.end(), [](int i) {
			return i % 2 != 0;
		});

		printf("%s\n", res ? "true" : "false");
	}

	getchar();
}