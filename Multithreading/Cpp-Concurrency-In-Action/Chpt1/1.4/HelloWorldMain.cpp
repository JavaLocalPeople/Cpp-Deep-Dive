#include <thread>

using namespace std;

void hello()
{
	printf("Hello!\n");
}

int main()
{
	/*
		every thread has to have an initial function, which is where the new thread of execution begins.
		In this case, thread object named t has new function hello() as its initial function
	*/
	std::thread t(hello); 

	/*
		the initial thread continues execution and won't wait new thread to finish. 
		it could end the problem, possibly before the new thread had a chance to run.
		the .join() caues the calling thread(in main()) to wait for the new(t) thread. 
	*/
	t.join();

	getchar();
}