//BuilderProduct.h
#ifndef _PRODUCT_H_ 
#define _PRODUCT_H_
class BuilderProduct {
public:
	BuilderProduct();
	~BuilderProduct();
	void ProducePart();
};
class ProductPart
{
public:
	ProductPart();
	~ProductPart();
	ProductPart* BuildPart();
};
#endif