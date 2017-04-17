#include "stdafx.h"

//Prototype.cpp
#include "Prototype.h" 
#include <iostream> 
using namespace std;
Prototype::Prototype() 
{
}
Prototype::~Prototype() 
{
}

Prototype* Prototype::Clone() const
{
	return 0; 
}

ConcretePrototype::ConcretePrototype() 
{
	//cout << "ConcretePrototypt is create .." << endl;
}
ConcretePrototype::~ConcretePrototype() 
{
}
ConcretePrototype::ConcretePrototype(const ConcretePrototype& cp) 
{
	cout << "ConcretePrototype copy ..." << endl;
}
Prototype* ConcretePrototype::Clone() const 
{
	return new ConcretePrototype(*this); 
}
