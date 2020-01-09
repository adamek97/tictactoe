#include "kolkoKrzyzyk.h"
#include <pole.h>
#include <iostream>
using namespace std;
pole tabela[3][3];
bool gracz=true;//false to krzyzyk, kolko to true
void  kolkoKrzyzyk::clearpol()
{
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
         tabela[i][j].setPuste();
         cout<<tabela[i][j].getZnak();
        }
}
}
bool checkRemis()
{
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (tabela[i][j].getZnak()==' ')
            {
                return false;
            }
        }
    }
    return true;
}
void kolkoKrzyzyk::wydrukuj()

{
    system("cls");
    cout << "\n\n\Kolko Krzyzyk\n\n";

    cout <<"teraz gracz: ";
    if (gracz)
        {
        cout <<"kolko"<<endl<<endl;

    }
    else {cout<<"krzyzyk"<<endl<<endl;}
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << tabela[0][0].getZnak() << "  |  " << tabela[0][1].getZnak() << "  |  " << tabela[0][2].getZnak() << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << tabela[1][0].getZnak() << "  |  " << tabela[1][1].getZnak() << "  |  " << tabela[1][2].getZnak() << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << tabela[2][0].getZnak() << "  |  " << tabela[2][1].getZnak() << "  |  " << tabela[2][2].getZnak() << endl;

    cout << "     |     |     " << endl << endl;
}

bool kolkoKrzyzyk::setWspolrzednych(int x,int y)
{
    if (x>2||x<0||y<0||y>2)
    {
        if (x>2||x<0)
        {
            cout<<"Nie poprawna liczba x= "<<x<<" Podaj ponownie liczby ";

        }
        if (y>2||y<0)
        {
            cout<<"Nie poprawna liczba y= "<<y<<" Podaj ponownie liczby ";

        }
return true ;
    }
    else
    {
        if (gracz)
        {
            if(tabela [y][x].setKolko())
            {
                cout<<"ustawilem kolko na ("<<x<<","<<y<<")"<<endl;
            }
            else
            {
                cout<<"nie udalo sie "<<endl;
            return true;
            }

            gracz=false;
            if (sprawdzWygrana())
            {
                cout<<"Wygral gracz O"<<endl;
            return false;
            }
        }
        else
        {
            if(tabela [y][x].setKrzyzyk())
            {
               // cout<<tabela[y][x].getZnak()<<endl;
                cout<<"ustawilem krzyzyk na("<<x<<","<<y<<")"<<endl;
            }
            else
            {
                cout<<"nie udalo sie "<<endl;
            return true;
            }

            gracz=true;
            if (sprawdzWygrana())
            {
                cout<<"Wygral gracz X"<<endl;
                return false;
            }
        }
        if(checkRemis())
        {
            return false;
        }
        return true;
    }
}
bool kolkoKrzyzyk::sprawdzWygrana()
{
    if ((tabela [0][0].getZnak()==tabela[0][1].getZnak())&&(tabela[0][1].getZnak()==tabela[0][2].getZnak()) && (tabela[0][0].getZnak()!=' '))
    {
        cout<<"1"<<endl;
        return true;
    }

    if ((tabela [1][0].getZnak()==tabela[1][1].getZnak())&& (tabela[1][1].getZnak()==tabela[1][2].getZnak()) && (tabela[1][0].getZnak()!=' '))
    {
        cout<<"2"<<endl;
        return true;
    }

    if (tabela [2][0].getZnak()==tabela[2][1].getZnak() && tabela[2][1].getZnak()==tabela[2][2].getZnak() && tabela[2][1].getZnak()!=' ')
    {
        cout<<"3"<<endl;
        return true;
    }

    if (tabela [0][0].getZnak()==tabela[1][0].getZnak() && tabela[1][0].getZnak()==tabela[2][0].getZnak() && tabela[2][0].getZnak()!=' ')
    {
        cout<<"4"<<endl;
        return true;
    }

    if (tabela [0][1].getZnak()==tabela[1][1].getZnak() && tabela[1][1].getZnak()==tabela[2][1].getZnak() && tabela[0][1].getZnak()!=' ')
    {
        cout<<"5"<<endl;
        return true;
    }

    if (tabela [0][2].getZnak()==tabela[1][2].getZnak() & tabela[1][2].getZnak()==tabela[2][2].getZnak() && tabela[0][2].getZnak()!=' ')
    {
        cout<<"6"<<endl;
        return true;
    }

    if (tabela [0][0].getZnak()==tabela[1][1].getZnak() && tabela[1][1].getZnak()==tabela[2][2].getZnak() && tabela[2][2].getZnak()!=' ')
    {
        cout<<"7"<<endl;
        return true;
    }

    if (tabela [0][2].getZnak()==tabela[1][1].getZnak() && tabela[1][1].getZnak()==tabela[2][0].getZnak() && tabela[1][1].getZnak()!=' ')
    {
        cout<<"8"<<endl;
        return true;
    }
    return false;
}

kolkoKrzyzyk::kolkoKrzyzyk()
{
    for (int i=0; i>3; i++)
    {
        for (int j=0; j>3; j++)
        {
            tabela [i][j]=pole();
        }
    }
}

kolkoKrzyzyk::~kolkoKrzyzyk()
{
    //dtor
}
