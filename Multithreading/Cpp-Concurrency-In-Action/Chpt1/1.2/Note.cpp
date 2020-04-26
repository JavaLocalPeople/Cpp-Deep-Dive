/*

	1.2 Why use concurrency?
	Separation of concerns AND performance
	
	- Separation of concerns
	Use concurrency to separate distinct areas of functionality.
	Code no longer have to be so closely intertwined.
	The interaction between are directly related to the task at hand.

	- Performance
	Herb Sutter: "If software is to take advantage of this increased computing power, it must be
	designed to run multiple tasks concurrently"

	- 2 ways to use currency for performance
	1. task parallelism: divide a single task into parts and run each in parallel, thus reducing the total
	runtime.

	2. data parallelism: use available parallelism to process more files at a time. 

	- Why not to use concurrency:
	1. Benefit is not worth the cost: code hard to understand, there is a direct intellectual cost
	2. Performance gain might not be as large as expected.
	3. Theads are a limited resource. Each thread requires a separate stack space.
	4. The more threads I am running, the more context switching the OS has to do. 







*/