#include <Task.h>

Task::Task( T _Function, Y _OutputType, O _Arguments)
{
	m_Function = _Function;
	m_Output = _OutputType;
	m_Arguments = _Arguments;
}

Y Task::GetOutput()
{
	return m_Output;
}

void Task:Run()
{

	m_Output = m_Function( m_Arguments );

}
