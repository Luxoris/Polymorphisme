#pragma once

#ifndef CRECTANGLE_H
#define CRECTANGLE_H
#include "CFigure.h"
class CRectangle :
	public CFigure
{
protected:
	double m_dblLargeur;
	double m_dblLongueur;
public:
	CRectangle(double largeur, double longueur, double x = 0, double y = 0)
		: CFigure(x, y, 0), m_dblLargeur(largeur),m_dblLongueur(longueur) {}
	~CRectangle() {}
	double perimetre() {
		return m_dblLargeur * 2 + m_dblLongueur*2;
	} double aire() {
		return m_dblLargeur *
			m_dblLongueur;
	}
	string description(t_desc type);
	string toString();
};

#endif // !CRECTANGLE_H