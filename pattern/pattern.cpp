// pattern.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cout << "1.Factory���ģʽ" << endl;
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