#include "include/TaskScheduler.h"
#include <iostream>

void TestTask()
{
	std::cout << "Task is being performed!" << std::endl;
}


int main()
{
	TaskScheduler Scheduler(4);
	std::function<void()> Function = TestTask;
	Scheduler.SubmitTask(Function);

	return 0;
}
