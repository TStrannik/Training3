#include <iostream>

#pragma once
class GavClass
{
public:
	 GavClass() { std::cout << "\tGavClass()\n"; }
	~GavClass() { std::cout << "\t~GavClass(" << name_ << ")\n"; }

	
	char*		 set_name(char* nm);
	char*		 say_my_name();
	float		 piNa(float n);
	unsigned int get_id();

private:
	unsigned int id_   = 0;
	char*		 name_ = "name_default";
	const float	 pi_   = 3.1415;

};

float		 GavClass::piNa(float n)		{									 return pi_ / n; }
char*		 GavClass::set_name(char* nm)	{ name_ = nm;						 return nm;		 }
char*		 GavClass::say_my_name()		{ std::cout << (name_) << std::endl; return name_;	 }
unsigned int GavClass::get_id()				{									 return id_;	 }

