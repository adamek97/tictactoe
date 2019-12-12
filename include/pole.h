#ifndef POLE_H
#define POLE_H


class pole
{
    public:
        pole();
        virtual ~pole();
        bool setKolko();
        bool setKrzyzyk();
        void setPuste();
        char getZnak();

    protected:

    private:
        char znak;
};

#endif // POLE_H
