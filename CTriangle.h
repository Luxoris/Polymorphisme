#pragma once
#ifndef CTRIANGLE_H
#define CTRIANGLE_H

#include "CFigure.h"
class CTriangle : public CFigure
{
protected:
	double m_dblbase, m_dblhauteur;
public:
	CTriangle(double base, double hauteur, double x = 0, double y = 0)
		: CFigure(x, y, 0), m_dblbase(base), m_dblhauteur(hauteur) {}
	~CTriangle() {}
	double perimetre() {
		return sqrt(m_dblbase * m_dblbase + m_dblhauteur * m_dblhauteur) +
			m_dblbase + m_dblhauteur;
	}
	double aire() { return m_dblbase * m_dblhauteur / 2; }
	string description(t_desc type);
	string toString();
};

#endif // !CTRIANGLE_H