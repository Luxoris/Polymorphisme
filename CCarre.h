#pragma once
#ifndef CCARRE_H
#define CCARRE_H

#include "CFigure.h"
class CCarre :
	public CFigure
{
protected:
	double m_dblLargeur;
public:
	CCarre(double largeur, double x = 0, double y = 0)
		: CFigure(x, y, 0), m_dblLargeur(largeur) {}
	~CCarre() {}
	double perimetre() {
		return m_dblLargeur * 4;
	} double aire() {
		return m_dblLargeur *
			m_dblLargeur;
	}
	string description(t_desc type) override;
	string toString() override;
};

#endif // !CCARRE_H