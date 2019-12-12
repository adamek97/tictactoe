#include "pole.h"
char znak;
bool pole::setKolko()
{
    if (znak==' ')
    {
        znak='o';
        return true;
    }
    else
        {
            return false;
}
}
bool pole::setKrzyzyk()
{
    if (znak==' ')
    {
        znak='x';
        return true;
    }
    else
        {
            return false;
}
}
void pole::setPuste()
{
    znak=' ';
}
char pole::getZnak()
{
    return znak;

}
pole::pole()
{
    znak=' ';
}

pole::~pole()
{
    //dtor
}
