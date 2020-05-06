#include "CCercle.h"

string CCercle::description(t_desc type)
{
    string strDesc;
    if (type == courte)
    {
        strDesc = "Cercle";
    }
    else if (type == longue)
    {
        ostringstream oss;
        strDesc = CFigure::description(type) + " <|- Cercle\n";
        strDesc += "{\n";
        strDesc += "\tx = "; oss << m_dblx; strDesc += oss.str() + "\n";
        strDesc += "\ty = "; oss.str(""); oss << m_dbly; strDesc += oss.str() + "\n";
        strDesc += "\tz = "; oss.str(""); oss << m_dblz; strDesc += oss.str() + "\n";
        strDesc += "\trayon = "; oss.str(""); oss << m_dblRayon; strDesc += oss.str()
            + "\n"; strDesc += "}\n";
    }
    else
    {
        strDesc = "";
    }
    return strDesc;
}
string CCercle::toString()
{
    ostringstream oss;
    oss << m_dblRayon;
    return CFigure::toString() + " " + oss.str();
}