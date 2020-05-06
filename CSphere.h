#pragma once
#ifndef CSPHERE_H
#define CSPHERE_H
#include "CCercle.h"
class CSphere :
	public CCercle
{
public:
	CSphere(double rayon, double x = 0, double y = 0, double z = 0)
		: CCercle(rayon, x, y){
		this->m_dblz = z;
	}
	~CSphere() {}
	inline double perimetre() override{
		return 0;
	}
	inline double aire() override{
		return 4 * M_PI * (m_dblRayon * m_dblRayon);
	}
	inline double volume() override{
		return (4 * M_PI * (m_dblRayon * m_dblRayon * m_dblRayon))/3;
	}
	string description(t_desc type);
	string toString();
};

#endif // !CSPHERE_H
