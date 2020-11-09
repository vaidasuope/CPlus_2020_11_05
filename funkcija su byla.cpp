#include <iostream>
#include <fstream>
using namespace std;
ifstream in("pazymiai.txt");
ofstream out("rez.txt");
void kiekis(int &kiek);
void ivedimasMasyvo(int Z[], int kiek);
void isvedimasMasyvo(int Z[], int kiek, string txt);
void veiksmaiSuKiekiu(int Z[], int kiek, int W[]);//W[] - masyvas, kuriame saugomi kiekiai
void kiekiuSpausdinimas(int W[], string txt);

int main()
{
    int kiekP, kiekJ, kiekM;
    kiekis(kiekP);
    int P[kiekP];
    ivedimasMasyvo(P, kiekP);
    kiekis(kiekJ);
    int J[kiekJ];
    ivedimasMasyvo(J, kiekJ);
    kiekis(kiekM);
    int M[kiekM];
    ivedimasMasyvo(M, kiekM);

    isvedimasMasyvo(P, kiekP, " Petriuko ");
    isvedimasMasyvo(J, kiekJ, " Jolita ");
    isvedimasMasyvo(M, kiekM, " Martyno ");
    int KP[10], KJ[10], KM[10];
    veiksmaiSuKiekiu(P, kiekP, KP);
    veiksmaiSuKiekiu(J, kiekJ, KJ);
    veiksmaiSuKiekiu(M, kiekM, KM);
    kiekiuSpausdinimas(KP, "Petriuko");
    kiekiuSpausdinimas(KJ, "Jolitos");
    kiekiuSpausdinimas(KM, "Martyno");

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
void ivedimasMasyvo(int Z[], int kiek)
{
   for(int i=0; i<kiek; i++)
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





