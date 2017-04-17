// pattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

//main.cpp
#include "Factory.h" 
#include "Product.h"
#include "AbstractFactory.h"
#include "Singleton.h"
#include "Builder.h"
#include "BuilderProduct.h"
#include "Director.h"
#include "Prototype.h"
#include <iostream> 
using namespace std;

int main()
{
	Prototype* p = new ConcretePrototype();
	Prototype* p1 = p->Clone();
	return 0;
}

 
void menu()
{
	cout << "1.Factory���ģʽ" << endl;
	cout << "2.AbstractFactory���ģʽ" << endl;
	cout << "3.Singleton (����)���ģʽ" << endl;
	cout << "4.Builder(������)ģʽ" << endl;
	cout << "5.Prototype(ԭ��)ģʽ" << endl;
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
	case 3:
	{
			  Singleton * sgn = Singleton::Instance();
			  break;
	}
	case 4:
	{
			  Director* d = new Director(new ConcreteBuilder());
			  d->Construct();
			  break;
	}
	case 5:
	{
			  Prototype* p = new ConcretePrototype();
			  Prototype* p1 = p->Clone();
			  break;
	}
	default:
	{
			   cout << "you select is error" << endl;
			   break;
	}
	}
}