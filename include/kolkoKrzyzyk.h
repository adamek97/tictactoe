#ifndef KOLKOKRZYZYK_H
#define KOLKOKRZYZYK_H
#include <pole.h>

class kolkoKrzyzyk
{
    public:
        kolkoKrzyzyk();
        virtual ~kolkoKrzyzyk();
        bool setWspolrzednych(int x,int y);
        void wydrukuj();
         void clearpol();
    protected:

    private:
        bool sprawdzWygrana();

bool gracz;
};

#endif // KOLKOKRZYZYK_H
