#pragma once
#include<iostream>
#include "punto.h"
using namespace std;

class triangulo {
	public:
		punto v1;
		punto v2;
		punto v3;
		triangulo(){
			v1 = punto();
			v2 = punto();
			v3 = punto();
		}
};