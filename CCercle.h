#pragma once
#ifndef CCERCLE_H
#define CCERCLE_H

#include "CFigure.h"
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

class CCercle :
	public CFigure
{
protected:
	double m_dblRayon;
public:
	CCercle(double rayon, double x = 0, double y = 0)
		: CFigure(x, y, 0), m_dblRayon(rayon) {}
	~CCercle() {}
	double perimetre() {
		return M_PI * 2 * m_dblRayon;
	} double aire() {
		return M_PI * (m_dblRayon * m_dblRayon);
	}
	string description(t_desc type);
	string toString();

};

#endif // !CCERCLE_H