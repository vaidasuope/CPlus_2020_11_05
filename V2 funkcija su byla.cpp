#include <iostream>
#include <fstream>
using namespace std;
ifstream in("pazymiaivieno.txt");
ofstream out("rez.txt");
//void kiekis(int &kiek);
void ivedimasMasyvo(int Z[], int &kiek);
void isvedimasMasyvo(int Z[], int kiek, string txt);
void veiksmaiSuKiekiu(int Z[], int kiek, int W[]);//W[] - masyvas, kuriame saugomi kiekiai
void kiekiuSpausdinimas(int W[], string txt);

int main()
{
    int kiekP, P[1000];
    ivedimasMasyvo(P, kiekP);


    isvedimasMasyvo(P, kiekP, " Petriuko ");

    int KP[10];
    veiksmaiSuKiekiu(P, kiekP, KP);

    kiekiuSpausdinimas(KP, "Petriuko");

    in.close();
    out.close();
    return 0;
}

//-----------Kiekis----------------
void kiekis(int &kiek)
{
   in>>kiek;
}
//--------------------------------
//------------Masyvo ivedimas-------
void ivedimasMasyvo(int Z[], int &kiek)
{
   kiek=0;
   while(!in.eof()) //skaityk duomenuis tol kol ne failo pabaiga
    {
        in>>Z[kiek];
        kiek++;
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





