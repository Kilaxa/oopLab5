#pragma once
#include <iostream>
#include <string>
class Animal
{
public:
	std::string voice()
	{
		return "Silence";
	}
	~Animal()
	{
		std::cout << "~Animal" << std::endl;
	}
};

class Cat : public Animal
{
public:
	int* tmp;
	Cat()
	{
		tmp = new int[8];
	}
	std::string voice()
	{
		return "Meow";
	}
	~Cat()
	{
		std::cout << "~Cat" << std::endl;
		delete[] tmp;
	}
};

class AnimalCorrect
{
public:
	virtual std::string voice()
	{
		return "Silence";
	}
	virtual ~AnimalCorrect()
	{
		std::cout << "~Animal" << std::endl;
	}
};

class CatCorrect : public AnimalCorrect
{
public:
	int* tmp;
	CatCorrect()
	{
		tmp = new int[8];
	}
	std::string voice() override
	{
		return "Meow";
	}
	~CatCorrect() override
	{
		std::cout << "~Cat" << std::endl;
		delete[] tmp;
	}
};
	