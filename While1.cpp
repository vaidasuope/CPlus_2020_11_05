#include <iostream>
#include <fstream>
using namespace std;
int main()
{
   ifstream in("pazymiai.txt");
   ofstream out("rez.txt");
   int sk, k(0), ksk, x, suma(1);//kai suma, tai skaiciuojam nuo 0, o kai sandauga, tai nuo 1
   cout<<"sk= "; cin>>sk;
   ksk = sk;
   while(sk>0)
   {
       x = sk % 10;//liekana tik grazina, kai taip dalinam
       sk = sk / 10;//cia grazina sveikaji skaiciu tiktai
       suma = suma * x;
       k++;
   }

   cout<<"skaicius "<<ksk<<" sudarytas is "<<k<<" skaitmenu";
   cout<<"\n ju sandauga lygi "<<suma;
   /*587 / 10 = 58 / 10 = 5 / 10 = 0
   //7
   54874
   sk*/
    in.close();
    out.close();
    return 0;
}


