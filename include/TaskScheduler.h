#ifndef TASKSCHEDULER_H__
#define TASKSCHEDULER_H__

#include <vector>
#include <thread>
#include <queue>
#include <mutex>
#include "Task.h"

class TaskScheduler
{
	public:
		TaskScheduler(int _Threads);
		~TaskScheduler();
	
		int SubmitTask( std::function<void()> _Function );

		std::string CheckProgress( int _TaskID );

	private:
		std::mutex m_Lock;

		std::vector<std::thread> m_Threads;

		std::queue<Task> m_Tasks;

		std::vector<Task> m_CompletedTasks;

		int TaskCounter;

		bool m_Running = false;

		void StartThreads(int _Threads);
		void Running();
		void EndThreads();
};

#endif
