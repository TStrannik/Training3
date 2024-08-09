#include <iostream>

#pragma once
public
ref struct BaseClass
{
public:
	 BaseClass() { std::cout << "\tBaseClass()\n";  }
	~BaseClass() { std::cout << "\t~BaseClass(" << name << ")\n"; }

	char* set_name(char* nm);
	float piNa(float n);

private:
	char* name		 = "name_default";
	const double pi_ = 3.1415;

};

//ref struct ChildClass :
//	public BaseClass
//{
//
//	 ChildClass() {}
//	~ChildClass() {}
//
//private:
//
//
//};