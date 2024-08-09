#include "BaseClass.h"

#include <iostream>

float BaseClass::piNa(float n)		{			 return pi_ / n; }
char* BaseClass::set_name(char* nm) { name = nm; return nm;		 }