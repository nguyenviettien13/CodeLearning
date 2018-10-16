#pragma once


template <class T>
class ring
{
private:
	int m_size;
	T * m_values;
	int m_pos;
public:
	class iterator;
	ring(int size) :
		m_size(size),
		m_values(NULL),
		m_pos(0)
	{
		m_values = new T[m_size];
	}
public:
	~ring()
	{
		delete[] m_values;
	};

	void add(T value)
	{
		m_values[m_pos] = value;
		m_pos++;
		if (m_pos == m_size)
		{
			m_pos = 0;
		}
	}
	T& get(int i)
	{
		return m_values[i];
	}

	int size()
	{
		return m_size;
	}
};

