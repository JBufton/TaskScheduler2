#include "include/TaskScheduler.h"
#include <iostream>

void SecondTask()
{
	std::cout << "Another Task is being performed!" << std::endl;
}

void TestTask()
{
	int temp = 0;
	while( temp < 99999999 )
	{
		temp++;
	}
	std::cout << "Task is being performed!" << std::endl;
}


int main()
{
	TaskScheduler Scheduler(4);
	std::function<void()> Function = TestTask;
	std::function<void()> Function2 = SecondTask;
	Scheduler.SubmitTask(Function);
	Scheduler.SubmitTask(Function2);

	return 0;
}
