#include<iostream>
using namespace std;

int main()
	{
		int a=30;
		int b=10;
		int c=0;
		cout<<"Value of a="<<a<<endl;
		cout<<"Value of b="<<b<<endl;

		c=a+b;
		cout<<"a+b="<<c<<endl;

		c=a-b;
		cout<<"a-b="<<c<<endl;

		c=a*b;
		cout<<"a*b="<<c<<endl;

		c=a/b;
		cout<<"a/b="<<c<<endl;

		c=a%b;
		cout<<"a%b="<<c<<endl;

		c=++a;
		cout<<"Preincrement(++a1)="<<c<<endl;//31
		c=++a;
		cout<<"Preincrement(++a2)="<<c<<endl;//32
		c=++a;
		cout<<"Preincrement(++a3)="<<c<<endl;//33
		c=++a;
		cout<<"Preincrement(++a4)="<<c<<endl;//34

		c=--a;
		cout<<"Predecrement(--a1)="<<c<<endl;//33
		c=--a;
		cout<<"Predecrement(--a2)="<<c<<endl;//32
		c=--a;
		cout<<"Predecrement(--a3)="<<c<<endl;//31
		c=--a;
		cout<<"Predecrement(--a4)="<<c<<endl;//30

		c=a++;
		cout<<"Postincrement(a1++)="<<c<<endl;//30
		c=a++;
		cout<<"Postincrement(a2++)="<<c<<endl;//31
		c=a++;
		cout<<"Postincrement(a3++)="<<c<<endl;//32
		c=a++;
		cout<<"Postincrement(a4++)="<<c<<endl;//33

		c=a--;
		cout<<"Postdecrement(a1--)="<<c<<endl;//34
		c=a--;
		cout<<"Postdecrement(a2--)="<<c<<endl;//33
		c=a--;
		cout<<"Postdecrement(a3--)="<<c<<endl;//32
		c=a--;
		cout<<"Postdecrement(a4--)="<<c<<endl;//31

		return 0;
	}
