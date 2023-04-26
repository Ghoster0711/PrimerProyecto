#pragma once
#include<iostream>
#include<sstream>

using namespace std;

class Excepciones {
public:
	Excepciones();
	virtual ~Excepciones();
	virtual string toString() const = 0;
};