#pragma once

template <typename T>
class ring
{
private:
	int m_size;
	T * m_value;
	int m_pos;
public:
	class iterator;
public:
	ring(int size) :
		m_size(size),
		m_pos(0)
	{
		m_value = new T[m_size];
	};

	int size()
	{
		return m_size;
	}
	void add(T item)
	{
		m_value[m_pos] = item;
		m_pos++;
		if (m_pos == m_size)
		{
			m_pos = 0;
		}
	}
	T& get(int pos)
	{
		return m_value[pos];
	}
	iterator begin()
	{
		return iterator(0, *this);
	}
	iterator end()
	{
		return iterator(m_size, *this);
	}

	~ring() 
	{
		delete[] m_value;
	};
};

template <typename T>
class ring<T>::iterator
{
private:
	int m_pos;
	ring &m_ring;

public:
	iterator(int pos, ring &aring) :
		m_pos(pos),
		m_ring(aring)
	{

	}

	//+ prefix
	iterator operator ++(int)
	{
		m_pos++;
		return *this;
	}

	iterator operator ++()
	{
		m_pos++;
		return *this;
	}
	T& operator*()
	{
		return m_ring.get(m_pos);
	}

	bool operator!=(const iterator &other) const
	{
		return m_pos != other.m_pos;
	}
};