#include <iostream>
using namespace std;
void ivedimas(int &skaicius, string txt);
void veiksmai(int skaicius1, int skaicius2, int &rezultatas);
void isvedimas(int rezultatas, string txt);
int main()
{
    int sk1, sk2, suma;
    ivedimas(sk1, "koks pirmas skaicius? \n");
    ivedimas(sk2, "sk2=\n");
    veiksmai(sk1, sk2, suma);
    isvedimas(suma, "Pagaliau apskaiciavom suma");

    return 0;
}
//-------------duomenu ivedimas-----------
void ivedimas(int &skaicius, string txt)
{
    cout<<txt;
    cin>>skaicius;
}
//----------------------------------------
//---------------Veiksmai---------------
void veiksmai(int skaicius1, int skaicius2, int &rezultatas)
{
    rezultatas = skaicius1 + skaicius2;
}
//----------------------------------------
//--------Isvedimas-----------------------
void isvedimas(int rezultatas, string txt)
{
cout<<txt<<rezultatas;
}
//------------------------------------------



