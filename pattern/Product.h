//Product.h
#ifndef _PRODUCT_H_ //�����α���
#define _PRODUCT_H_
class Product{
public:
	virtual ~Product() = 0;
protected:
	Product();//���ι��캯��
};

class ConcreteProduct :public Product
{
public:
	ConcreteProduct();
	~ConcreteProduct();
};

#endif //~_PRODUCT_H_