#ifndef TASK_H__
#define TASK_H__

template<typename T, typename Y, typename O>
class Task
{
	public:
		Task(T _Function, Y _OutputType, O _Arguments);
		~Task() = default;

		void Run();

		Y GetOutput();

	private:
		T m_Function;
		Y m_Output;
		O m_Arguments;
}


#endif
