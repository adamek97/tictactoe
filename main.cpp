#include <iostream>
#include <kolkoKrzyzyk.h>
using namespace std;
void tictactoe()
{
kolkoKrzyzyk gra =kolkoKrzyzyk();
 int x,y;
do
{

gra.wydrukuj();
    cout<<"podaj x: ";
    cin>>x;
    cout<<"podaj y: ";
    cin>>y;
}
while (gra.setWspolrzednych(x,y));
gra.wydrukuj();
}
int main()
{
 tictactoe();
 cout<<"chcesz zagrac ponownie ? ";
 char z;
 do
 {
     cin >>z ;
 }
 while ( z=='Y'||z=='y'||z=='N'||z=='n');
    if ( z=='Y'||z=='y')
 {
     main();
 }
    return 0;
}
