#include <algorithm>

/*
	Keyword: override

	"override" to indicate that a method is supposed to be an override of a virtual method in a base class



*/

class B
{
public:
	virtual void f(short)
	{
		printf("B::f\n");
	}
};

class D : public B
{
public:
	virtual void f(short) override
	{		
		printf("D::f\n");
	}
};

int main()
{
	D d;

	d.f(1);


	getchar();
}