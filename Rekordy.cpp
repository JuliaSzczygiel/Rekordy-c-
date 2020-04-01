#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

struct Gra 
{
    string tytul, wydawca, gatunek; 
    int rok_wydania, ocena;
};

int main ()
{
    Gra gra1;
        cout<<"Podaj tytul: ";          cin>>gra1.tytul;
        cout<<"Podaj wydawce: ";        cin>>gra1.wydawca;
        cout<<"Podaj gatunek: ";        cin>>gra1.gatunek;
        cout<<"Podaj rok wydania: ";    cin>>gra1.rok_wydania;
        cout<<"Wpisz ocene 1-10: ";     cin>>gra1.ocena;
    
    Gra gra2;
        cout<<"Podaj tytul: ";          cin>>gra2.tytul;
        cout<<"Podaj wydawce: ";        cin>>gra2.wydawca;
        cout<<"Podaj gatunek: ";        cin>>gra2.gatunek;
        cout<<"Podaj rok wydania: ";    cin>>gra2.rok_wydania;
        cout<<"Wpisz ocene 1-10: ";     cin>>gra2.ocena;
        
        fstream plik;
        plik.open("Gry.txt", ios::out);

        plik<<gra1.tytul<<endl;
        plik<<gra1.wydawca<<endl;
        plik<<gra1.gatunek<<endl;
        plik<<gra1.rok_wydania<<endl;
        plik<<gra1.ocena<<endl;
        plik<<gra2.tytul<<endl;
        plik<<gra2.wydawca<<endl;
        plik<<gra2.gatunek<<endl;
        plik<<gra2.rok_wydania<<endl;
        plik<<gra2.ocena<<endl;

        plik.close(); //zapis do pliku rekordów

        plik.open("Gry.txt", ios::in);

        if(plik.good()==false)
            {
                cout<<"Plik nie istnieje!";
                exit(0);
            }

        plik.close(); //odczyt z pliku rekordów

        cout<<gra1.tytul<<endl;
        cout<<gra1.wydawca<<endl;
        cout<<gra1.gatunek<<endl;
        cout<<gra1.rok_wydania<<endl;
        cout<<gra1.ocena<<endl;
        cout<<gra2.tytul<<endl;
        cout<<gra2.wydawca<<endl;
        cout<<gra2.gatunek<<endl;
        cout<<gra2.rok_wydania<<endl;
        cout<<gra2.ocena<<endl;
        
    return 0;
}