// pattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

//main.cpp
#include "Factory.h" 
#include "Product.h"
#include <iostream> 
using namespace std;

int main()
{
	Factory* fac = new ConcreteFactory();
	Product* p = fac->CreateProduct();
	return 0;
}

 
void menu()
{
	cout << "1.Factory设计模式" << endl;
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
		Factory* fac = new ConcreteFactory();
		Product* p = fac->CreateProduct();
		break;
	default:
		cout << "you select is error" << endl;
		break;
	}
}