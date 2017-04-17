#include "stdafx.h"
//Product.cpp
#include "BuilderProduct.h" 
#include <iostream>
using namespace std;
BuilderProduct::BuilderProduct() 
{
	ProducePart();
	cout << "return a product" << endl;
}
BuilderProduct::~BuilderProduct() 
{
}

void BuilderProduct::ProducePart() 
{
	cout << "build part of product.." << endl; 
}

ProductPart::ProductPart() 
{
	cout<<"build productpart.."<<endl;
}
ProductPart::~ProductPart()
{
}
ProductPart* ProductPart::BuildPart()
{
	return new ProductPart; 
}