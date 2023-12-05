#include <iostream>
using namespace std;

int rozet_yaz(string isim[],int rozetler[],int sayi)
{
    for (int i =0; i < sayi; i++)
    {
       string ad = isim[i];
       int rozet_sayisi = rozetler[i];
       cout << ad << " ismli ogrenci "<< rozet_sayisi << " rozet aldi"<<endl;

    }
}


  int main()
{
    int ogrenci_sayisi = 3;
    string isim[ogrenci_sayisi] = {"Zeynep", "Betul", "Defne"};
    int rozetler[ogrenci_sayisi]{31,28,25};

    rozet_yaz(isim,rozetler,ogrenci_sayisi);
}
