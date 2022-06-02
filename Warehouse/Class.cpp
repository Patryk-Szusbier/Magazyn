#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Class.h"

using namespace std;

vector <Processor> procesory;
vector <Graphic_Card> karty;

//--------------------------------------------------------------
//|                     Klasa Computer_Parts                   |
//--------------------------------------------------------------
Computer_Parts::Computer_Parts(int i)
{
    id = i;
}
void Computer_Parts::show()
{
    cout << id;
}
//--------------------------------------------------------------
//|                     Klasa Processor                        |
//--------------------------------------------------------------
Processor::Processor(string n , int i, int MHz) :Computer_Parts(i)
{
    name = n;
    MHz = MHz;
    
}
void Processor::show()
{
    cout << "Id procesora: ";
    Computer_Parts::show();
    cout << endl;
    cout << "Nazwa procesora: " << name << endl;
}
//--------------------------------------------------------------
//|                     Klasa Graphic_Card                     |
//--------------------------------------------------------------
Graphic_Card::Graphic_Card(string n ,int rr,int id) :Computer_Parts(id)
{
    name = n;
    Vram = rr;
}
void Graphic_Card::show()
{
    cout << "Id produktu: ";
    Computer_Parts::show();
    cout << endl;
    cout << "Karta Graficzna " << name << " " << Vram << " GB" << endl;
}
void Graphic_Card::save()
{
   
}
void Graphic_Card::open()
{

}
//--------------------------------------------------------------
//|                     Klasa RAM_memory                       |
//--------------------------------------------------------------

//--------------------------------------------------------------
//|                     Klasa Motherboard                      |
//--------------------------------------------------------------

//--------------------------------------------------------------
//|                     Klasa Power_Supply                     |
//--------------------------------------------------------------

//--------------------------------------------------------------
//|                     Klasa Producent                        |
//--------------------------------------------------------------

//--------------------------------------------------------------
//|                     Klasa Warehouse                        |
//--------------------------------------------------------------

void Warehouse::Towar()
{

}
void Warehouse::Stan_magazynowy()
{

}
void Warehouse::Producenci()
{

}
void Warehouse::Dostawa()
{

}
void Warehouse::Add_new_product()
{
    int n, pid = 0, vr;
    string nazwa;
    char a;
    float mh;
    do
    {

        cout << "Lista cz�ci kt�re mo�na doda�: "<<endl;
        cout << "1.Procesor" << endl;
        cout << "2.Karta graficzna" << endl;
        cout << "3.Dysk" << endl;
        cout << "4.Ko�ci RAM" << endl;
        cout << "5.P�yta g��wna" << endl;
        cin >> n;
    
        if (0 < n < 6)
        {
            switch (n)
            {
            case 1:
                cout << "Podaj nazwe.";
                cin >> nazwa;
                cout << "Podaj Mhz";
                cin >> mh;
                system("cls");
                procesory.push_back(Processor(nazwa, pid, mh));
                pid++;
                cout << "Pomy�lnie dodano nowy produkt";
                system("cls");
            
                break;
            case 2:
                cout << "Podaj nazwe."<<endl;
                cin >> nazwa;
                cout << "Podaj VRAM"<<endl;
                cin >> mh;
                system("cls");
                karty.push_back(Graphic_Card(nazwa, pid, mh));
                cout << "Pomy�lnie dodano nowy produkt";
                
            }
            //Reszta potem//
        }
        else
        {
            cout << "Rz�dana opcja nie istnieje"<<endl;
        }
        cout << "Czy chcesz kontynuowa�? T/N" << endl;
        cin >> a;
        system("cls");
    } while (a == 'T');
    Main_Menu();

}
void Warehouse::Add_new_producent()
{

}
void Warehouse::Main_Menu()
{
    int i = 0;
    cout << "--------------------------------------------------------------" << endl;
    cout << "|                     PC Parts                               |" << endl;
    cout << "--------------------------------------------------------------" << endl<<endl;
    cout << "1.Wykaz cz�ci na magazynie." << endl;
    cout << "2.Wy�wietl stan magazynowy." << endl;
    cout << "3.Wy�wietl dost�pnych producent�w." << endl;
    cout << "4.Dodaj dostaw�." << endl;
    cout << "5.Dodaj nowy produkt do listy" << endl;
    cout << "6.Dodaj nowego producenta do listy." << endl;

    cin >> i;
    switch (i)
    {
    case 1:
        system("cls");
        Warehouse::Towar();
        break;
    case 2:
        system("cls");
        Warehouse::Stan_magazynowy();
        break;
    case 3:
        system("cls");
        Warehouse::Producenci();
        break;
    case 4:
        system("cls");
        Warehouse::Dostawa();
        break;
    case 5:
        system("cls");
        Warehouse::Add_new_product();
        break;
    case 6:
        system("cls");
        Warehouse::Add_new_producent();
        break;
    }
}