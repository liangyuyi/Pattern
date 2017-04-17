#include "stdafx.h"

//Builder.cpp
#include "Builder.h"
#include "BuilderProduct.h"
#include <iostream> 
using namespace std;
Builder::Builder() 
{
}
Builder::~Builder()
{
}

ConcreteBuilder::ConcreteBuilder()
{
}
ConcreteBuilder::~ConcreteBuilder() 
{
}
void ConcreteBuilder::BuildPartA(const string& buildPara) 
{
	cout << "Step1:Build PartA..." << buildPara << endl;
}
void ConcreteBuilder::BuildPartB(const string& buildPara) 
{
	cout << "Step1:Build PartB..." << buildPara << endl; 
}
void ConcreteBuilder::BuildPartC(const string& buildPara) 
{
	cout << "Step1:Build PartC..." << buildPara << endl; 
}
BuilderProduct* ConcreteBuilder::GetProduct()
{
	BuildPartA("pre-defined");
	BuildPartB("pre-defined");
	BuildPartC("pre-defined");
	return new BuilderProduct();
}