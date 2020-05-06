#include "CParallelepipede.h"
string CParallelepipede::description(t_desc type)
{
    string strDesc;
    if (type == courte)
    {
        strDesc = "Parallelepipede";
    }
    else if (type == longue)
    {
        ostringstream oss;
        strDesc = CFigure::description(type) + " <|- Parallelepipede\n";
        strDesc += "{\n";
        strDesc += "\tx = "; oss << m_dblx; strDesc += oss.str() + "\n";
        strDesc += "\ty = "; oss.str(""); oss << m_dbly; strDesc += oss.str() + "\n";
        strDesc += "\tz = "; oss.str(""); oss << m_dblz; strDesc += oss.str() + "\n";
        strDesc += "\tlargeur = "; oss.str(""); oss << m_dblLargeur; strDesc += oss.str() + "\n";
        strDesc += "\tlongueur = "; oss.str(""); oss << m_dblLongueur; strDesc += oss.str() + "\n";
        strDesc += "\thauteur = "; oss.str(""); oss << m_dblHauteur; strDesc += oss.str() + "\n";
        strDesc += "\tdx = "; oss.str(""); oss << m_dblDx; strDesc += oss.str() + "\n";
        strDesc += "\tdy = "; oss.str(""); oss << m_dblDy; strDesc += oss.str() + "\n";
        strDesc += "}\n";
    }
    else
    {
        strDesc = "";
    }
    return strDesc;
}
string CParallelepipede::toString()
{
    ostringstream oss;
    oss << m_dblLargeur << " " << m_dblLongueur << " " << m_dblHauteur << " " << m_dblDx << " " << m_dblDy;
    return CFigure::toString() + " " + oss.str();
}