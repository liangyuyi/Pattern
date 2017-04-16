//Product.h
#ifndef _PRODUCT_H_ //避免多次编译
#define _PRODUCT_H_
class Product{
public:
	virtual ~Product() = 0;
protected:
	Product();//屏蔽构造函数
};

class ConcreteProduct :public Product
{
public:
	ConcreteProduct();
	~ConcreteProduct();
};

#endif //~_PRODUCT_H_