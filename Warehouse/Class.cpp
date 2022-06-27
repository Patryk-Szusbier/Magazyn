#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip> 
#include<fstream>
#include "Class.h"

using namespace std;

int prid = 1,grid=1,ramid=1,motid=1,powid=1,haid=1, prodid = 1;
const int zero = 0;
vector <Producent> producenci;
vector <Processor> procesory;
vector <GraphicCards> karty;
vector <RAM_memory> ramy;
vector <Motherboard> plyty;
vector <Power_Supply> zasilacze;
vector <Hard_Drive> dyski;

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
Processor::Processor(string n , int i, float MHz,int amm,int idpr) :Computer_Parts(i)
{
    name = n;
    this->MHz = MHz;
    amount = amm;
    this->idpr = idpr;
}
void Processor::show_all()
{
    Computer_Parts::show();
    cout << "  ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (idpr == a)
        {
            producenci[i].gname();
        }
    }
    cout << " " << name << "   " << MHz << "   " << amount << endl;
}
void Processor::show_min()
{
    Computer_Parts::show();
    cout << "  ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (idpr == a)
        {
            producenci[i].gname();
        }
    }
        cout << "  " << name << " "<<amount << endl;
}
string Processor::get_name()
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
int Processor::get_idpr()
{
    return idpr;
}
void Processor::add_amm(int t)
{
    amount = amount + t;
}
void Processor::rem_amm(int t)
{
    if (amount = amount - t < 0)
    {
        amount = 0;
    }
    else
    {
        amount = amount - t;
    }
    
}
//--------------------------------------------------------------
//|                     Klasa Graphic_Card                     |
//--------------------------------------------------------------
GraphicCards::GraphicCards(string n ,int rr,int id,int am, int id2) :Computer_Parts(id)
{
    name = n;
    Vram = rr;
    amount = am;
    idp = id2;
    
}
void GraphicCards::show()
{

    Computer_Parts::show();
    cout << "Karta Graficzna " << name << " " << Vram << " GB" << "  ";
    Producent::gname();
    cout << endl;
}
void GraphicCards::show_all()
{
    Computer_Parts::show();
    cout << "  ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (idp == a)
        {
            producenci[i].gname();
        }
    }
    cout << " " << name << "   " << Vram << "   " << amount << endl;
}
void GraphicCards::show_min()
{
    Computer_Parts::show();
    cout << "  ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (idp == a)
        {
            producenci[i].gname();
        }
    }
    cout << "  " << name << " " << amount << endl;
}
string GraphicCards::get_name()
{
    return name;
}
int GraphicCards::get_Vram()
{
    return Vram;
}
int GraphicCards::get_am()
{
    return amount;
}
void GraphicCards::add_amm(int t)
{
    amount = amount + t;
}
void GraphicCards::rem_amm(int t)
{
    if (amount = amount - t < 0)
    {
        amount = 0;
    }
    else
    {
        amount = amount - t;
    }

}
//--------------------------------------------------------------
//|                     Klasa RAM_memory                       |
//--------------------------------------------------------------
RAM_memory::RAM_memory(string nam, int g, int T, int id, int idp) : Computer_Parts(id)
{
    name = nam;
    GB = g;
    Takt = T;
    prod = idp;
}
void RAM_memory::show_all()
{
    Computer_Parts::show();
    cout << "  ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (prod == a)
        {
            producenci[i].gname();
        }
    }
    cout << " " << name << "   " << GB << "   " <<Takt<<"  "<< amount << endl;
}
void RAM_memory::show_min()
{
    Computer_Parts::show();
    cout << "  ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (prod == a)
        {
            producenci[i].gname();
        }
    }
    cout << "  " << name << " " << amount << endl;
}
void RAM_memory::add_amm(int t)
{
    amount = amount + t;
}
void RAM_memory::rem_amm(int t)
{
    if (amount = amount - t < 0)
    {
        amount = 0;
    }
    else
    {
        amount = amount - t;
    }

}
//-------------------------------------------------------------
//|                     Klasa Motherboard                      |
//--------------------------------------------------------------
Motherboard::Motherboard(string nam, string forr, string soc,int amo,int id1,int id2):Computer_Parts(id1)
{
    name = nam;
    format = forr;
    socket = soc;
    amount = amo;
    prod = id2;
}
void Motherboard::show_all()
{
    Computer_Parts::show();
    cout << "  ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (prod == a)
        {
            producenci[i].gname();
        }
    }
    cout << " " << name << "   " << format << "  "<<socket<<"   " << amount << endl;
}
void Motherboard::show_min()
{
    Computer_Parts::show();
    cout << "  ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (prod == a)
        {
            producenci[i].gname();
        }
    }
    cout << "  " << name << " " << amount << endl;
}
void Motherboard::add_amm(int t)
{
    amount = amount + t;
}
void Motherboard::rem_amm(int t)
{
    if (amount = amount - t < 0)
    {
        amount = 0;
    }
    else
    {
        amount = amount - t;
    }

}
//--------------------------------------------------------------
//|                     Klasa Power_Supply                     |
//--------------------------------------------------------------
Power_Supply::Power_Supply(string nam, int Pow, int am, int pid, int id1) :Computer_Parts(id1)
{
    name = nam;
    Power = Pow;
    amount = am;
    prod = pid;
}
void Power_Supply::show_all()
{
    Computer_Parts::show();
    cout << "  ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (prod == a)
        {
            producenci[i].gname();
        }
    }
    cout << "  " << name << " "<<"  "<<Power<<"W   " << amount << endl;
}
void Power_Supply::show_min()
{
    Computer_Parts::show();
    cout << "  ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (prod == a)
        {
            producenci[i].gname();
        }
    }
    cout << "  " << name << " " << amount << endl;
}
void Power_Supply::add_amm(int t)
{
    amount = amount + t;
}
void Power_Supply::rem_amm(int t)
{
    if (amount = amount - t < 0)
    {
        amount = 0;
    }
    else
    {
        amount = amount - t;
    }

}
//--------------------------------------------------------------
//|                     Klasa Hard_Drive                       |
//--------------------------------------------------------------
Hard_Drive::Hard_Drive(string nam, int po, int id1, int pid, int am) : Computer_Parts(id1)
{
    name = nam;
    poj = po;
    prod = pid;
}
void Hard_Drive::show_all()
{
    Computer_Parts::show();
    cout << "  ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (prod == a)
        {
            producenci[i].gname();
        }
    }
    cout << "  " << name << " " << "  " << poj << "GB   " << amount << endl;
}
void Hard_Drive::show_min()
{
    Computer_Parts::show();
    cout << "  ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (prod == a)
        {
            producenci[i].gname();
        }
    }
    cout << "  " << name << "  " << amount << endl;
}
void Hard_Drive::add_amm(int t)
{
    amount = amount + t;
}
void Hard_Drive::rem_amm(int t)
{
    if (amount = amount - t < 0)
    {
        amount = 0;
    }
    else
    {
        amount = amount - t;
    }

}


//--------------------------------------------------------------
//|                     Klasa Producent                        |
//--------------------------------------------------------------
Producent::Producent(int id, string na )
{
   this ->id = id;
    name = na;
}
void Producent::show()
{
    cout << id << ". " << name << endl;
}
string Producent::get_name()
{
        return name;
}
int Producent::get_id()
{
    return id;
}
void Producent::gname()
{
    cout << name;
}

//--------------------------------------------------------------
//|                     Klasa Warehouse                        |
//--------------------------------------------------------------

void Warehouse::Towar()
{

    char a;
    cout << "===============Procesory================" << endl;
    for (int i = 0; i < procesory.size(); i++)
    {
         procesory[i].show_all();
    }
    cout << endl << "=============Karty graficzne=============" << endl;
    for (int i = 0; i < karty.size(); i++)
    {
        karty[i].show_all();
    }
    cout << endl << "=================Pamiêæ RAM===================" << endl;
    for (int i = 0; i < ramy.size(); i++)
    {
        ramy[i].show_all();
    }
    cout << endl << "================P³yty g³ówne======================" << endl;
    for (int i = 0; i < plyty.size(); i++)
    {
        plyty[i].show_all();
    }
    cout << endl << "======================Zasilacze======================" << endl;
    for (int i = 0; i < zasilacze.size(); i++)
    {
        zasilacze[i].show_all();
    }
    cout << "Chcesz kontynuowaæ?";
    cin >> a;
    system("cls");
    Main_Menu();
}
void Warehouse::Stan_magazynowy()
{
    cout << "===============Procesory================" << endl;
    for (int i = 0; i < procesory.size(); i++)
    {
        procesory[i].show_min();
    }
    cout << endl << "=============Karty graficzne=============" << endl;
    for (int i = 0; i < karty.size(); i++)
    {
        karty[i].show_min();
    }
    cout << endl << "=================Pamiêæ RAM===================" << endl;
    for (int i = 0; i < ramy.size(); i++)
    {
        ramy[i].show_min();
    }
    cout << endl << "================P³yty g³ówne======================" << endl;
    for (int i = 0; i < plyty.size(); i++)
    {
        plyty[i].show_min();
    }
    cout << endl << "======================Zasilacze======================" << endl;
    for (int i = 0; i < zasilacze.size(); i++)
    {
        zasilacze[i].show_min();
    }
}
void Warehouse::Producenci()
{
    char a;
    do
    {
        for (int i = 0; i < producenci.size(); i++)
        {
            producenci[i].show();
        }
        cout << "Czy chcesz wróciæ do menu g³ównego? T/N" << endl;
        cin >> a;
        system("cls");
    } while (a == 'T');
    Main_Menu();
}
void Warehouse::Dostawa()
{

}
void Warehouse::Add_new_product()
{
    int n,m,pr, vr;
    int temp;
    string nazwa,temp1,temp2;
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
        cout << "6.Zasilacz" << endl;
        cin >> n;
        if (n < 7 || n > 1)
        {
            switch (n)
            {
            case 1:
                cout << "Podaj nazwe "<<endl;
                getline(cin >> ws, nazwa);
                cout << "Podaj Mhz"<<endl;
                cin >> mh;
                for (int i = 0; i < producenci.size(); i++)
                {
                    producenci[i].show();
                }
                cout << endl << "Wybierz producenta. " << endl;
                cin >> pr;
                system("cls");
                procesory.push_back(Processor(nazwa, prid, mh, zero, pr));
                prid++;
                cout << "Pomyœlnie dodano nowy produkt";
                break;

            case 2:
                cout << "Podaj nazwe: " << endl;
                getline(cin >> ws, nazwa);
                cout << "Podaj iloœæ VRAM: " << endl;
                cin >> vr;
                for (int i = 0; i < producenci.size(); i++)
                {
                    producenci[i].show();
                }
                cout << endl << "Wybierz producenta. " << endl;
                cin >> pr;
                karty.push_back(GraphicCards(nazwa, vr, grid, zero, pr));

                grid++;
                cout << "Pomyœlnie dodano nowy produkt";
                break;
            case 3:
                cout << "Podaj nazwe: " << endl;
                getline(cin >> ws, nazwa);
                cout << "Podaj pojemnoœæ: " << endl;
                cin >> temp;
                for (int i = 0; i < producenci.size(); i++)
                {
                    producenci[i].show();
                }
                cout << endl << "Wybierz producenta. " << endl;
                cin >> pr;
                dyski.push_back(Hard_Drive(nazwa, temp, haid, pr, zero));
                haid++;
                cout << "Pomyœlnie dodano nowy produkt";
                break;
            case 4:
                cout << "Podaj nazwe: " << endl;
                getline(cin >> ws, nazwa);
                cout << "Podaj iloœæ GB: " << endl;
                cin >> vr;
                cout << "Podaj taktowanie: " << endl;
                cin >> temp;
                for (int i = 0; i < producenci.size(); i++)
                {
                    producenci[i].show();
                }
                cout << endl << "Wybierz producenta. " << endl;
                cin >> pr;
                ramy.push_back(RAM_memory(nazwa, vr, temp, ramid, pr));
                ramid++;
                cout << "Pomyœlnie dodano nowy produkt";
                break;
            case 5:
                cout << "Podaj nazwe: " << endl;
                getline(cin >> ws, nazwa);
                cout << "Podaj format p³yty: " << endl;
                getline(cin >> ws, temp1);
                cout << "Podaj socket p³yty: " << endl;
                getline(cin >> ws, temp2);
                for (int i = 0; i < producenci.size(); i++)
                {
                    producenci[i].show();
                }
                cout << endl << "Wybierz producenta. " << endl;
                cin >> pr;
                plyty.push_back(Motherboard(nazwa, temp1, temp2, zero, motid, pr));
                motid++;
                cout << "Pomyœlnie dodano nowy produkt";
                break;
            case 6:
                cout << "Podaj nazwe: " << endl;
                getline(cin >> ws, nazwa);
                cout << "Podaj moc: " << endl;
                cin >> temp;
                for (int i = 0; i < producenci.size(); i++)
                {
                    producenci[i].show();
                }
                cout << endl << "Wybierz producenta. " << endl;
                cin >> pr;
                zasilacze.push_back(Power_Supply(nazwa, temp, zero, pr, powid));
                powid++;
                cout << "Pomyœlnie dodano nowy produkt";
                break;
            }
        }
        if(n>7)
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
    string nazwa;
    cout << "Podaj nazwê producenta " << endl;
    getline(cin >> ws, nazwa);
    producenci.push_back(Producent(prodid, nazwa));
    prodid++;
    system("cls");
    cout << "Dodano pomyœlnie producenta";
    Main_Menu();
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
        zapis << procesory[i].get_name()<<endl;
        zapis << procesory[i].M()<<endl;
        zapis << procesory[i].get_idpr() << endl;
        zapis << procesory[i].amm() << endl;

    }
    zapis.close();

    ofstream prod("producenci.txt");
    for (int i = 0; i < producenci.size(); i++)
    {
        prod << producenci[i].get_id() << endl;
        prod << producenci[i].get_name() << endl;
    }
    prod.close();
    ofstream kart("karty_graficzne.txt");
    for (int i = 0; i < karty.size(); i++)
    {
        kart << karty[i].get_id();
        kart << karty[i].get_name();
        kart << karty[i].get_Vram();
        kart << karty[i].get_idp();
        kart << karty[i].get_am();
    }
    kart.close();
}