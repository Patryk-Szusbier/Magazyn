#include <iostream>
#include <string>
#include <fstream>
#include "Class.h"

using namespace std;
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
Processor::Processor(string n , int i) :Computer_Parts(i)
{
    name = n;
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
    cout << "1.Wykaz czêœci na magazynie." << endl;
    cout << "2.Wyœwietl stan magazynowy." << endl;
    cout << "3.Wyœwietl dostêpnych producentów." << endl;
    cout << "4.Dodaj dostawê." << endl;
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