/*

	1.1 What is concurrency

	- Concurrency: two or more separate activities happening at the same time

	1.1.2 Approaches to concurrency

	- Concurrency with multiple processes: 
	Divide the application into multiple, separate, single-thread processes
	that runs at the same time. 

	Pros:
	1. Easier to write safe concurrent code with processes rather than threads
	2. Can run separate processes on distinct machines connected over network, a cost-effective way of 
	increasing the available parallelishm and improving performance.

	Cons: 
	1. Communication between processes is either complicated to set up OR slow OR both.
	2. Inherent overhead in running multiple processes. It takes time to start a process, the OS
	must devote internal resources to manage the process

	- Concurrency with multiple threads
	Run multiple threads in a single process. All threads in a process share the same address space,
	most of the data can be accessed directly from all threads. 









*/