
#include "CTriangle.h"
string CTriangle::description(t_desc type)
{
	string strDesc;
	if (type == courte)
	{
		strDesc = "Triangle";
	}
	else if (type == longue)
	{
		ostringstream oss;
		strDesc = CFigure::description(type) + " <|- Triangle\n";
		strDesc += "{\n";
		strDesc += "\tx = "; oss << m_dblx; strDesc += oss.str() + "\n";
		strDesc += "\ty = "; oss.str(""); oss << m_dbly; strDesc += oss.str() + "\n";
		strDesc += "\tz = "; oss.str(""); oss << m_dblz; strDesc += oss.str() + "\n";
		strDesc += "\tbase = "; oss.str(""); oss << m_dblbase; strDesc += oss.str() + "\n";
		strDesc += "\thauteur = "; oss.str(""); oss << m_dblhauteur; strDesc += oss.str() + "\n"; 
		strDesc += "}\n";
	}
	else
	{
		strDesc = "";
	}
	return strDesc;
}
string CTriangle::toString()
{
	ostringstream oss;
	oss << m_dblbase << " " << m_dblhauteur;
	return CFigure::toString() + " " + oss.str();
}
