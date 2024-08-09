#include <iostream>

#pragma once
class GavClass
{
public:
	GavClass()  { std::cout << "\tGavClass()\n"; }
	~GavClass() { std::cout << "\t~GavClass(" << name_ << ")\n"; }

	
	char*		 set_name(char* nm);
	char*		 get_name();
	void		 set_id(int id);
	unsigned int get_id();
	char*		 say_my_name();
	float		 piNa(float n);

	int Left;
	int Top;

private:
	unsigned int id_   = 0;
	char*		 name_ = "name_default";
	const double pi_   = 3.1415;

};


char*		 GavClass::set_name(char* nm) { name_ = nm;	return nm;		}
char*		 GavClass::get_name()		  {				return name_;	}
void		 GavClass::set_id(int id)	  { id_ = id;					}
unsigned int GavClass::get_id()			  {				return id_;		}
float		 GavClass::piNa(float n)	  { return pi_ / n;				}
char*		 GavClass::say_my_name() {
	std::cout <<
		"\tname: " << name_ << " #" << id_ << "\n"
		"\tid: "   << id_ << "\n";
	return name_;
}
