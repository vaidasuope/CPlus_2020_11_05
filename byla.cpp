#include <iostream>
#include <fstream> //irankis darbui su bylomis
using namespace std;
int main()
{
   ifstream in("duom.txt");//susikuriame skaitymo komanda
   ofstream out("rez.txt");//susikuriame rasymo komanda
   int sk1, sk2, sk3, sk4, suma;
  in>>sk1>>sk2>>sk3>>sk4;
   //cin>>sk1>>sk2>>sk3>>sk4;
   suma = sk1 + sk2 + sk3 + sk4;
   out<<sk1<<" + "<<sk2<<" + "<<sk3<<" + "<<sk4<<" = "<<suma;
   cout<<"Valio!!! Mums pavyko :)";
    in.close();//uzdarome bylas
    out.close();//uzdarome bylas
    return 0;
}
