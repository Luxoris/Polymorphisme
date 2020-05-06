#include "CRectangle.h"

string CRectangle::description(t_desc type)
{
    string strDesc;
    if (type == courte)
    {
        strDesc = "Rectangle";
    }
    else if (type == longue)
    {
        ostringstream oss;
        strDesc = CFigure::description(type) + " <|- Rectangle\n";
        strDesc += "{\n";
        strDesc += "\tx = "; oss << m_dblx; strDesc += oss.str() + "\n";
        strDesc += "\ty = "; oss.str(""); oss << m_dbly; strDesc += oss.str() + "\n";
        strDesc += "\tz = "; oss.str(""); oss << m_dblz; strDesc += oss.str() + "\n";
        strDesc += "\tlargeur = "; oss.str(""); oss << m_dblLargeur; strDesc += oss.str() + "\n";
        strDesc += "\tlongueur = "; oss.str(""); oss << m_dblLongueur; strDesc += oss.str() + "\n";
        strDesc += "}\n";
    }
    else
    {
        strDesc = "";
    }
    return strDesc;
}
string CRectangle::toString()
{
    ostringstream oss;
    oss << m_dblLargeur << " " << m_dblLongueur;
    return CFigure::toString() + " " + oss.str();
}