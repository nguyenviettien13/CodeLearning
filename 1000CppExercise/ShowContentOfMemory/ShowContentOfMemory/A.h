#pragma once
class A
{
private:
	int m_tuoi;
public:
	A();
	A(int tuoi);
	~A();
	int getTuoi() const;
	void setTuoi(int tuoi);
};

