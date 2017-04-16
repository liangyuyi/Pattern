// pattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

//main.cpp
#include "Factory.h" 
#include "Product.h"
#include "AbstractFactory.h"
#include <iostream> 
using namespace std;

int main()
{
	AbstractFactory* cf1 = new ConcreteFactory1();
	cf1->CreateProductA();
	cf1->CreateProductB();
	AbstractFactory* cf2 = new ConcreteFactory2();
	cf2->CreateProductA(); 
	cf2->CreateProductB();
	return 0;
}

 
void menu()
{
	cout << "1.Factory设计模式" << endl;
	cout << "2.AbstractFactory设计模式" << endl;
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
	{
			  Factory* fac = new ConcreteFactory();
			  Product* p = fac->CreateProduct();
			  break;
	}
	case 2:
	{
			  AbstractFactory* cf1 = new ConcreteFactory1();
			  cf1->CreateProductA();
			  cf1->CreateProductB();
			  AbstractFactory* cf2 = new ConcreteFactory2();
			  cf2->CreateProductA();
			  cf2->CreateProductB();
			  break;
	}
	default:
	{
			   cout << "you select is error" << endl;
			   break;
	}
	}
}