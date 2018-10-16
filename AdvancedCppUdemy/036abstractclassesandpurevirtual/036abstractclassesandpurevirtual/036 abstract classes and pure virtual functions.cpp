#include <iostream>
#include <string>

using namespace std;

class Cha
{
public:
	Cha();
	~Cha();
	virtual void speak() {
		cout << "Cha speak!!" << endl;
	};

private:

};
class Con :public Cha
{
public:
	Con();
	~Con();
	void speak() {
		cout << "Con speak!!" << endl;
	};
private:

};

class Chau:public Con
{
public:
	Chau();
	~Chau();

private:

};

Chau::Chau()
{
}

Chau::~Chau()
{
}
Con::Con()
{
}

Con::~Con()
{
}

Cha::Cha()
{
}

Cha::~Cha()
{
}


class Animal
{
private:
	int weight;
public:
	virtual void run() = 0;
};

class pitchBull : public Animal
{
	virtual void run()
	{
		cout << "pitch bull run and bite!!!" << endl;
	}
};
int main()
{
	Con conn;
	conn.speak();
	pitchBull pb;
	Animal* ani = &pb;
	ani->run();
	return 1;
}