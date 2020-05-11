#include <thread>

using namespace std;

/*

	2.1 Basic Thread Management

	- Every C++ Program has at least one thread, which is started by the C++ runtime: the thread running main()

	2.1.1 Launching a thread

	//---------------------------------------------------------------------
	void do_some_work();

	int main()
	{
		std::thread my_thread(do_some_work);

		getchar();
	}
	//---------------------------------------------------------------------
	
	- pass an instance of a class with a function call operator to the thread constructur
	
	//---------------------------------------------------------------------
	class background_task
	{
		void do_something() const
		{
			printf("do something\n");
		}

	public:

		void operator()() const
		{
			do_something();
		}
	};

	int main()
	{
		background_task f;

		thread my_thread(f);
		my_thread.join();

		getchar();
	}
	//---------------------------------------------------------------------

	- avoid to declare as a function declaration

	thread my_thread(background_task()); // rather than launching a new thread, this returns a thread object

	could do
	1. thread my_thread((background_task())); // add one more parentheses to prevent interpretation as a function declaration
	2. thread my_thread{background_task()}; // use the new uniform initialization syntax with braces
	3. thread my_thread([]{
		do_something();
	});	// use lambda expression

	- You need to determine whether to wait it or leave it to run on its own. 

	- If don't wait thread to finish, need to ensure that the data access by the thread is valid
	until the thread has finished with it. Or this will cause undefined behavior



*/

struct func
{
	int& i;

	func(int& i_) : i(i_) {}

};

void hello()
{
	printf("hello\n");
}

int main()
{
	background_task f;

	thread my_thread([] {
		hello();
	});
	my_thread.join();

	getchar();
}
