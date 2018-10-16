#pragma once

template <class kieudulieu>
class Segment
{
	kieudulieu min;
	kieudulieu max;
public:
	Segment(kieudulieu min, kieudulieu max);
	~Segment();
	bool checkElementInSegment(kieudulieu a);
};

template<class kieudulieu>
inline Segment<kieudulieu>::Segment(kieudulieu min, kieudulieu max)
{
	this->min = min;
	this->max = max;
}

template<class kieudulieu>
inline Segment<kieudulieu>::~Segment()
{
}

template<class kieudulieu>
inline bool Segment<kieudulieu>::checkElementInSegment(kieudulieu a)
{
	if (a <= max && a >= min) return true;
	return false;
}
