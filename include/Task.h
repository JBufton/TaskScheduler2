#ifndef TASK_H__
#define TASK_H__

class Task
{
	public:
		Task() = default;
		~Task() = default;

		void Run();

	private:
		std::function<void()> m_Function;
};


#endif
