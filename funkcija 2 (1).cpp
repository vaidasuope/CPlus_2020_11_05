#include <iostream>
using namespace std;
void kiekis(int &kiek, string txt);
void ivedimasMasyvo(int Z[], int kiek, string txt);
void isvedimasMasyvo(int Z[], int kiek, string txt);
void veiksmaiSuKiekiu(int Z[], int kiek, int W[]);//W[] - masyvas, kuriame saugomi kiekiai
void kiekiuSpausdinimas(int W[], string txt);

int main()
{
    int kiekP, kiekJ, kiekM;
    kiekis(kiekP, "Petriukas");
    int P[kiekP];
    ivedimasMasyvo(P, kiekP, " Petriuko ");
    kiekis(kiekJ, "Jolita");
    int J[kiekJ];
    ivedimasMasyvo(J, kiekJ, " Jolita ");
    kiekis(kiekM, "Martynas");
    int M[kiekM];
    ivedimasMasyvo(M, kiekM, " Martyno ");
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


    return 0;
}

//-----------Kiekis----------------
void kiekis(int &kiek, string txt)
{
    cout<<"Kiek "<<txt<<" turi pazymiu?";
    cin>>kiek;
}
//--------------------------------
//------------Masyvo ivedimas-------
void ivedimasMasyvo(int Z[], int kiek, string txt)
{
   for(int i=0; i<kiek; i++)
    {
        cout<<"Koks "<<txt<<" "<<i+1<<"-sis pazymys? ";
        cin>>Z[i];
        if(Z[i]>10 or Z[i]<1 ){
                                cout<<"\nBlogas pazymys. Kartokite\n";
                                i--;
                                }
    }
}
//--------------------------------
//-------------Masyvo isvedimas-----------
void isvedimasMasyvo(int Z[], int kiek, string txt)
{
    cout<<txt<<" pazymiai\n";
    for(int i=0; i<kiek;i++)
    {
        cout<<Z[i]<<" ";
    }
    cout<<endl;
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
    cout<<txt<<" pazymiu kiekiai\n";
    for(int j=0; j<10; j++)
    {
      if( W[j]!=0 ) cout<<j+1<<"-uku turim "<<W[j]<<"\n";
    }
    cout<<endl;
}
//---------------------------------------------





