#include "PersonS.h"
#include <iostream>
using namespace std;

Person::Person()
{
	cout << "Person()" << endl;
}
Person::~Person()
{
	cout << "~Person()" << endl;
}
void Person::eat()
{
	m_strName = "Jim";
	m_iAge = 10;
	cout << "eat()" << endl;
}