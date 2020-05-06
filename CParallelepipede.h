#pragma once

#ifndef CPARALLELEPIPEDE_H
#define CPARALLELEPIPEDE_H

#include "CRectangle.h"
class CParallelepipede :
	public CRectangle
{
protected:
	double m_dblHauteur;
	double m_dblDx;
	double m_dblDy;
public:
	CParallelepipede(double largeur, double longueur,double hauteur, double dx = 0, double dy = 0, double x = 0, double y = 0, double z = 0)
		: CRectangle(largeur, longueur, x, y), m_dblHauteur(hauteur), m_dblDx(dx), m_dblDy(dy) {
		this->m_dblz = z;
	}
	~CParallelepipede() {}

	double perimetre() {
		return 0;
	} 
	double aire() {
		return 2 * (m_dblLargeur * m_dblLongueur + m_dblLongueur * m_dblHauteur + m_dblHauteur*m_dblLargeur);
	}
	double volume() {
		return m_dblLargeur * m_dblHauteur * m_dblLongueur;

	}
	string description(t_desc type);
	string toString();
};

#endif // !CPARALLELEPIPEDE_H