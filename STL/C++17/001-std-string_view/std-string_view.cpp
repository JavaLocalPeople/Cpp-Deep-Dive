#include <string>
#include <iostream>
#include <string_view>

using namespace std;

void fun(const std::string& s)
{
	cout << s << " " << reinterpret_cast<uintptr_t>(s.data()) << endl;
}

void fun2(string_view s)
{
	cout << s << " " << reinterpret_cast<uintptr_t>(s.data()) << endl;
}

int main()
{
	{
		/*
			string owns its content, mutable, stores in separate address
		
		*/
		string s1 = { "hello" };
		string s2 = s1; // s2 is a copy of s1
		s2[0] = 'H';

		/*
		uintptr_t: an unsigned interger type that is capable of storing a data pointer

		string.data() := return a pointer to an array representing the current string object

		reinterpret_cast :=

		*/
		cout << s1 << " " << reinterpret_cast<uintptr_t>(s1.data()) << endl;
		cout << s2 << " " << reinterpret_cast<uintptr_t>(s2.data()) << endl;
	}
	
	{
		/*
			- even pass string as reference, when the input is char or char ptr, it 
			will create a temporary copy of the string
		
		*/
		constexpr char data[] = "very long string...";
		cout << data << " " << reinterpret_cast<uintptr_t>(data) << endl;
		fun(data);
	}

	{
		/*
			struct string_view {
				const char* data;
				size_t length;
			};
			
			- string_view is immutable, light weight, does NOT own the content

		*/
		string s1 = { "hello" };
		string_view sv1 = s1;
		string_view sv2 = sv1;

		cout << s1 << " " << reinterpret_cast<uintptr_t>(s1.data()) << endl;
		cout << sv1 << " " << reinterpret_cast<uintptr_t>(sv1.data()) << endl;
		cout << sv2 << " " << reinterpret_cast<uintptr_t>(sv2.data()) << endl;

		printf("add to fun2\n");

		// pass by value, but string address stays the same (no copy on string)
		fun2(s1);
		fun2(sv1);

	}

	{
		/*
			API:

			substr: O(1)
			remove_prefix: O(1)
			remove_suffix: O(1)

			Limitation:
				- Immutable, can't append, concatenation
				- make sure the data is not mutated during the lifetime of string_view
		*/

	}
	getchar();
}