#pragma once
class MyBase
{
private:
	int m_data;
protected:
	static MyBase * m_pMyBaseInstance;
	MyBase();
	MyBase(int X);
	MyBase(const MyBase &  other) {};
	MyBase& operator = (const MyBase& other) {};
public:
	~MyBase();
	void setDataX(int value);
	int getDataX() const;
	virtual void setDataY(int value) = 0;
	virtual int getDataY() const = 0;
	static MyBase* getInstance();
};

