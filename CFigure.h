#pragma once
#ifndef CFIGURE_H
#define CFIGURE_H

#include <iostream>
#include <string>
#include <sstream> 

using namespace std;
typedef enum { courte, longue } t_desc;
class CFigure
{
protected:
	double m_dblx, m_dbly, m_dblz; //coordonnées du centre
public:
	CFigure(double x = 0, double y = 0, double z = 0) : m_dblx(x), m_dbly(y),
		m_dblz(z) {}
	virtual ~CFigure() {}
	virtual double perimetre() = 0 { return 0; }
	virtual double aire() = 0 { return 0; }
	virtual double volume() = 0 { return 0; }
	virtual string description(t_desc type) { return "Figure"; }
	virtual string toString();
};

#endif // !CFIGURE_H

