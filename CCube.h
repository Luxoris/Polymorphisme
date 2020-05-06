#pragma once
#ifndef CCUBE_H
#define CCUBE_H

#include "CCarre.h"
class CCube :
	public CCarre
{
public:
	CCube(double largeur, double x = 0, double y = 0, double z = 0)
		: CCarre(largeur, x, y) {
		this->m_dblz = z;
	}
	~CCube() {}
	inline double perimetre() override {
		return 0;
	}
	inline double aire() override {
		return 6 * (m_dblLargeur * m_dblLargeur);
	}
	inline double volume() override {
		return (m_dblLargeur * m_dblLargeur * m_dblLargeur);
	}
	string description(t_desc type);
	string toString();
};

#endif // !CCUBE_H