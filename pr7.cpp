#include<iostream>
#include<string>

using namespace std;


class Animal
{
public:
	virtual void Voice() = 0;
	
	void SetName(string n)
	{
		n = name;
	}
	
	PrintName()
	{
		cout << name << endl;
	}
	
protected:
	string name;
};

class Cat : public Animal
{
public:
	void Voice() override
	{
		cout << "Meow" << endl;
	}
	
	void Purr()
	{
		cout << "Cat purrs" << endl;
	}
};

class Dog : public Animal
{
public:
	void Voice() override
	{
		cout << "Guv" << endl;
	}
	
	void WagTheTail()
	{
		cout << "Dog wagging the tail" << endl;
	}
};

class Parrot : public Animal
{
public:
	void Voice() override
	{
		cout << "CHIRICK" << endl;
	}
	
	void Fly()
	{
		cout << "The parrot flies" << endl;
	}
};

int main()
{
	return 0;
}