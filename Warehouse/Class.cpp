#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip> 
#include<fstream>
#include "Class.h"

using namespace std;

vector <Processor> procesory;
vector <Graphic_Card> karty;

int pid = 0,prodid = 0;
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
int Computer_Parts::get_id()
{
    return id;
}
//--------------------------------------------------------------
//|                     Klasa Processor                        |
//--------------------------------------------------------------
Processor::Processor(string n , int i, double MHz,int amm) :Computer_Parts(i)
{
    name = n;
    MHz = MHz;
    amount = amm;
    
}
//==================================================Do zmiany============================================

void Processor::show_all()
{
    Computer_Parts::show(); 
    cout<< " " << name << "   " << MHz <<endl;
}
void Processor::show_min()
{

}
string Processor::namee()
{
    return name;
}
int Processor::amm()
{
    return amount;
}
float Processor::M()
{
    return MHz;
}
int Processor::idd()
{

    return Computer_Parts::get_id();

}
//--------------------------------------------------------------
//|                     Klasa Graphic_Card                     |
//--------------------------------------------------------------
Graphic_Card::Graphic_Card(string n ,int rr,int id,int am) :Computer_Parts(id)
{
    name = n;
    Vram = rr;
    amount = am;
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
    char a;
    for (int i = 0; i < procesory.size(); i++)
    {
        procesory[i].show_all();
    }
    cout << "Chcesz kontynuowaæ?";
    cin >> a;
    system("cls");
    Main_Menu();
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
    int n, vr;
    string nazwa;
    char a;
    float mh;
    do
    {

        cout << "Lista czêœci które mo¿na dodaæ: "<<endl;
        cout << "1.Procesor" << endl;
        cout << "2.Karta graficzna" << endl;
        cout << "3.Dysk" << endl;
        cout << "4.Koœci RAM" << endl;
        cout << "5.P³yta g³ówna" << endl;
        cin >> n;
    
        if (0 < n < 6)
        {
            switch (n)
            {
            case 1:
                cout << "Podaj nazwe ";
                getline(cin >> ws, nazwa);
                cout << "Podaj Mhz";
                cin >> mh;
                system("cls");
                procesory.push_back(Processor(nazwa, pid, mh));
                pid++;
                cout << "Pomyœlnie dodano nowy produkt";
                break;

            case 2:
                cout << "Podaj nazwe."<<endl;
                cin >> nazwa;
                cout << "Podaj VRAM"<<endl;
                cin >> mh;
                system("cls");
                karty.push_back(Graphic_Card(nazwa, pid, mh));
                pid++;
                cout << "Pomyœlnie dodano nowy produkt";
                break;
            }
            //Reszta potem//
        }
        if(n>6)
        {
            cout << "Rz¹dana opcja nie istnieje"<<endl;
        }
        cout << "Czy chcesz kontynuowaæ? T/N" << endl;
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
    cout << "1.Wykaz czêœci na magazynie." << endl;
    cout << "2.Wyœwietl stan magazynowy." << endl;
    cout << "3.Wyœwietl dostêpnych producentów." << endl;
    cout << "4.Dodaj dostawê." << endl;
    cout << "5.Dodaj nowy produkt do listy" << endl;
    cout << "6.Dodaj nowego producenta do listy." << endl;
    cout << "7.Koniec programu" << endl;

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
    case 7:
        system("cls");
        Warehouse::end();
        break;
    }
    
}
void Warehouse::end()
{
    ofstream zapis("procesory.txt");

    for(int i = 0; i < procesory.size(); i++)
    {
        zapis << procesory[i].get_id()<<endl;
        zapis << procesory[i].namee()<<endl;
        zapis << procesory[i].M()<<endl;
        zapis << procesory[i].amm() << endl;

    }
    zapis.close();
}