#include <iostream>
#include <fstream>
using namespace std;
ifstream in("pazymiaivieno.txt");
ofstream out("rez.txt");
void kiekis(int &kiek);
void ivedimasMasyvo(int Z[], int kiek);
void isvedimasMasyvo(int Z[], int kiek, string txt);
void veiksmaiSuKiekiu(int Z[], int kiek, int W[]);//W[] - masyvas, kuriame saugomi kiekiai
void kiekiuSpausdinimas(int W[], string txt);
/*Parasykite funkcija, kuri surastu kokiu pazymiu ir kiek
turi daugiausia Petriukas*/
void dazniausiasPazymys (int W[]);

int main()
{
    int kiekP;
    kiekis(kiekP);
    int P[kiekP];
    ivedimasMasyvo(P, kiekP);
    isvedimasMasyvo(P, kiekP, " Petriuko ");
    int KP[10];
    veiksmaiSuKiekiu(P, kiekP, KP);
    kiekiuSpausdinimas(KP, "Petriuko");
    dazniausiasPazymys(KP);
    in.close();
    out.close();
    return 0;
}

//-----------Kiekis----------------
void kiekis(int &kiek)
{
  int laik;
  kiek=0;
  while(!in.eof()) //skaityk duomenuis tol kol ne failo pabaiga
    {
      in>>laik;
      kiek++;
    }
    in.seekg(0);
}
//--------------------------------
//------------Masyvo ivedimas-------
void ivedimasMasyvo(int Z[], int kiek)
{
   for(int i = 0; i<kiek;i++)
    {
        in>>Z[i];
    }
}
//--------------------------------
//-------------Masyvo isvedimas-----------
void isvedimasMasyvo(int Z[], int kiek, string txt)
{
    out<<txt<<" pazymiai\n";
    for(int i=0; i<kiek;i++)
    {
        out<<Z[i]<<" ";
    }
    out<<endl;
}
//-----------------------------------
//------------kiekiu skaiciavimas-------------
void veiksmaiSuKiekiu(int Z[], int kiek, int W[])
{
    for(int j=0; j<10; j++)
    {
        W[j]=0;
        for(int i=0; i<kiek; i++) //1 1 2 5 8 4 1 1 2
        {
            if(Z[i]==j+1){W[j]++;} //4  W[0]=4 W[1]=2
        }
        out<<W[j];
        out<<endl;
    }
}
//------------------------------------------------
//--------------Kiekiu spausdinimas---------------
void kiekiuSpausdinimas(int W[], string txt)
{
    out<<txt<<" pazymiu kiekiai\n";
    for(int j=0; j<10; j++)
    {
      if( W[j]!=0 ) out<<j+1<<"-uku turim "<<W[j]<<"\n";
    }
    out<<endl;
}
//---------------------------------------------
//-------kokio pazymio turi daugiausia-----

void dazniausiasPazymys(int W[])     //W[] masyvas, kuriame saugojom pazymiu kiekius
{
    int max = W[0];
    int pazymys=1;
    for (int i = 0; i < 10; i++) {
        if (W[i] > max) //pirmiausia max prisiskiriam 0, o tada lyginam ar masyvo elementas didesnis uz max ar ne, jei taip - prisikriam masyvo reiskme.
        max=W[i];

    }
    out<<"Daugiausia turi "<<" (kiekis: "<<max<<")"<<"\n";
}







