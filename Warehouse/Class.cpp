#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip> 
#include<fstream>
#include<filesystem>
#include "Class.h"

using namespace std;

int prid ,grid,ramid,motid,powid,haid, prodid;
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
    cout << " | ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (idpr == a)
        {
            producenci[i].gname();
        }
    }
    cout << " | " << name << " | " << MHz << " | " << amount << endl;
}
void Processor::show_min()
{
    Computer_Parts::show();
    cout << " | ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (idpr == a)
        {
            producenci[i].gname();
        }
    }
        cout << " | " << name << " | "<<amount << endl;
}
void Processor::show()
{
    cout << " | ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (idpr == a)
        {
            producenci[i].gname();
        }
    }
    cout << " | " << name << " | " << amount << endl;
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
void GraphicCards::show_all()
{
    Computer_Parts::show();
    cout << " | ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (idp == a)
        {
            producenci[i].gname();
        }
    }
    cout << " | " << name << " | " << Vram << "GB | " << amount << endl;
}
void GraphicCards::show_min()
{
    Computer_Parts::show();
    cout << " | ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (idp == a)
        {
            producenci[i].gname();
        }
    }
    cout << " | " << name << " | " << amount << endl;
}
void GraphicCards::show()
{
    cout << " | ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (idp == a)
        {
            producenci[i].gname();
        }
    }
    cout << " | " << name << " | " << amount << endl;
}
string GraphicCards::get_name()
{
    return name;
}
int GraphicCards::get_Vram()
{
    return Vram;
}
int GraphicCards::get_idp()
{
    return idp;
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
RAM_memory::RAM_memory(string nam, int g, int T, int id, int idp, int am) : Computer_Parts(id)
{
    name = nam;
    GB = g;
    Takt = T;
    prod = idp;
    amount = am;
}
void RAM_memory::show_all()
{
    Computer_Parts::show();
    cout << " | ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (prod == a)
        {
            producenci[i].gname();
        }
    }
    cout << " | " << name << " | " << GB << " GB | " <<Takt<<" MHz | "<< amount << endl;
}
void RAM_memory::show_min()
{
    Computer_Parts::show();
    cout << " | ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (prod == a)
        {
            producenci[i].gname();
        }
    }
    cout << " | " << name << " | " << amount << endl;
}
void RAM_memory::show()
{
    cout << " | ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (prod == a)
        {
            producenci[i].gname();
        }
    }
    cout << " | " << name << " | " << amount << endl;
}
string RAM_memory::get_name()
{
    return name;
}
int RAM_memory::get_GB()
{
    return GB;
}
int RAM_memory::get_Tac()
{
    return Takt;
}
int RAM_memory::get_prod()
{
    return prod;
}
int RAM_memory::get_amo()
{
    return amount;
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
    cout << " | ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (prod == a)
        {
            producenci[i].gname();
        }
    }
    cout << " | " << name << " | " << format << " | "<<socket<<" | " << amount << endl;
}
void Motherboard::show_min()
{
    Computer_Parts::show();
    cout << " | ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (prod == a)
        {
            producenci[i].gname();
        }
    }
    cout << " | " << name << " | " << amount << endl;
}
void Motherboard::show()
{
    cout << " | ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (prod == a)
        {
            producenci[i].gname();
        }
    }
    cout << " | " << name << " | " << amount << endl;
}
string Motherboard::get_name()
{
    return name;
}
int Motherboard::get_prod()
{
    return prod;
}
int Motherboard::get_amo()
{
    return amount;
}
string Motherboard::get_form()
{
    return format;
}
string Motherboard::get_sock()
{
    return socket;
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
    cout << " | ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (prod == a)
        {
            producenci[i].gname();
        }
    }
    cout << " | " << name << " | "<<Power<<" W | " << amount << endl;
}
void Power_Supply::show_min()
{
    Computer_Parts::show();
    cout << " | ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (prod == a)
        {
            producenci[i].gname();
        }
    }
    cout << " | " << name << " | " << amount << endl;
}
void Power_Supply::show()
{
    cout << " | ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (prod == a)
        {
            producenci[i].gname();
        }
    }
    cout << " | " << name << " | " << amount << endl;
}
void Power_Supply::add_amm(int t)
{
    amount = amount + t;
}
string Power_Supply::get_name()
{
    return name;
}
int Power_Supply::get_powder()
{
    return Power;
}
int Power_Supply::get_prod()
{
    return prod;
}
int Power_Supply::get_am()
{
    return amount;
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
    cout << " | ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (prod == a)
        {
            producenci[i].gname();
        }
    }
    cout << " | " << name << " | " << poj << " GB | " << amount << endl;
}
void Hard_Drive::show_min()
{
    Computer_Parts::show();
    cout << " | ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (prod == a)
        {
            producenci[i].gname();
        }
    }
    cout << " | " << name << " | " << amount << endl;
}
void Hard_Drive::show()
{
    cout << " | ";
    for (int i = 0; i < producenci.size(); i++)
    {
        int a = producenci[i].get_id();
        if (prod == a)
        {
            producenci[i].gname();
        }
    }
    cout << " | " << name << " | " << amount << endl;
}
string Hard_Drive::get_name()
{
    return name;
}
int Hard_Drive::get_poj()
{
    return poj;
}
int Hard_Drive::get_prod()
{
    return prod;
}
int Hard_Drive::get_amo()
{
    return amount;
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
    cout << "ID | PRODUCENT | NAZWA | ZEGAR | ILOSC"<<endl;
    for (int i = 0; i < procesory.size(); i++)
    {
         procesory[i].show_all();
    }
    cout << endl << "=============Karty graficzne=============" << endl;
    cout << "ID | PRODUCENT | NAZWA | VRAM | ILOSC"<<endl;
    for (int i = 0; i < karty.size(); i++)
    {
        karty[i].show_all();
    }
    cout << endl << "=================Pamiêæ RAM===================" << endl;
    cout << "ID | PRODUCENT | NAZWA | GB | TAKTOWANIE | ILOSC " << endl;
    for (int i = 0; i < ramy.size(); i++)
    {
        ramy[i].show_all();
    }
    cout << endl << "================P³yty g³ówne======================" << endl;
    cout << "ID | PRODUCENT | NAZWA | FORMAT | SOCKET | ILOSC " << endl;
    for (int i = 0; i < plyty.size(); i++)
    {
        plyty[i].show_all();
    }
    cout << endl << "======================Zasilacze======================" << endl;
    cout << "ID | PRODUCENT | NAZWA | MOC | ILOSC" << endl;
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
    char n;
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
    cout << "Kontynuowaæ? ";
    cin >> n;
    system("cls");
    Main_Menu();
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
    int n,m,b;
    char tem;
    do
    {
        cout << "Jaki produkt chcesz dodaæ? " << endl;
        cout << "Lista czêœci które mo¿na dodaæ: " << endl;
        cout << "1.Procesor" << endl;
        cout << "2.Karta graficzna" << endl;
        cout << "3.Dysk" << endl;
        cout << "4.Koœci RAM" << endl;
        cout << "5.P³yta g³ówna" << endl;
        cout << "6.Zasilacz" << endl;
        cin >> n;
        system("cls");
        switch (n)
        {
        case 1:
            for (int i = 0; i < procesory.size(); i++)
            {
                cout << (i + 1) << " ";
                procesory[i].show();
            }
            cout << endl << "Ktory produkt chcesz dodaæ? " << endl;
            cin >> m;
            cout << "Iloœæ produktu do dodania na magazyn. " << endl;
            cin >> b;
            procesory[(m - 1)].add_amm(b);
            break;
        case 2:
            for (int i = 0; i < karty.size(); i++)
            {
                cout << (i + 1) << " ";
                karty[i].show();
            }
            cout << endl << "Ktory produkt chcesz dodaæ? " << endl;
            cin >> m;
            cout << "Iloœæ produktu do dodania na magazyn. " << endl;
            cin >> b;
            karty[(m - 1)].add_amm(b);
            break;
        case 3:
            for (int i = 0; i < dyski.size(); i++)
            {
                cout << (i + 1) << " ";
                dyski[i].show();
            }
            cout << endl << "Ktory produkt chcesz dodaæ? " << endl;
            cin >> m;
            cout << "Iloœæ produktu do dodania na magazyn. " << endl;
            cin >> b;
            dyski[(m - 1)].add_amm(b);
            break;
        case 4:
            for (int i = 0; i < ramy.size(); i++)
            {
                cout << (i + 1) << " ";
                ramy[i].show();
            }
            cout << endl << "Ktory produkt chcesz dodaæ? " << endl;
            cin >> m;
            cout << "Iloœæ produktu do dodania na magazyn. " << endl;
            cin >> b;
            ramy[(m - 1)].add_amm(b);
            break;
        case 5:
            for (int i = 0; i < plyty.size(); i++)
            {
                cout << (i + 1) << " ";
                plyty[i].show();
            }
            cout << endl << "Ktory produkt chcesz dodaæ? " << endl;
            cin >> m;
            cout << "Iloœæ produktu do dodania na magazyn. " << endl;
            cin >> b;
            plyty[(m - 1)].add_amm(b);
            break;
        case 6:
            for (int i = 0; i < zasilacze.size(); i++)
            {
                cout << (i + 1) << " ";
                zasilacze[i].show();
            }
            cout << endl << "Ktory produkt chcesz dodaæ? " << endl;
            cin >> m;
            cout << "Iloœæ produktu do dodania na magazyn. " << endl;
            cin >> b;
            zasilacze[(m - 1)].add_amm(b);
            break;
        }
        cout << "Chcesz kontynuwaæ? T/N";
        cin >> tem;
        system("cls");
    } while (tem == 'T');
    Main_Menu();

}
void Warehouse::odejmij()
{
    int n, m, b;
    char tem;
    do
    {
        cout << "Jaki produkt chcesz odj¹æ z magazynu? " << endl;
        cout << "Lista czêœci które mo¿na wybraæ: " << endl;
        cout << "1.Procesor" << endl;
        cout << "2.Karta graficzna" << endl;
        cout << "3.Dysk" << endl;
        cout << "4.Koœci RAM" << endl;
        cout << "5.P³yta g³ówna" << endl;
        cout << "6.Zasilacz" << endl;
        cin >> n;
        system("cls");
        switch (n)
        {
        case 1:
            for (int i = 0; i < procesory.size(); i++)
            {
                cout << (i + 1) << " ";
                procesory[i].show();
            }
            cout << endl << "Ktory produkt chcesz odj¹æ? " << endl;
            cin >> m;
            cout << "Iloœæ produktu do dodania na magazyn. " << endl;
            cin >> b;
            procesory[(m - 1)].rem_amm(b);
            break;
        case 2:
            for (int i = 0; i < karty.size(); i++)
            {
                cout << (i + 1) << " ";
                karty[i].show();
            }
            cout << endl << "Ktory produkt chcesz odj¹æ? " << endl;
            cin >> m;
            cout << "Iloœæ produktu do dodania na magazyn. " << endl;
            cin >> b;
            karty[(m - 1)].rem_amm(b);
            break;
        case 3:
            for (int i = 0; i < dyski.size(); i++)
            {
                cout << (i + 1) << " ";
                dyski[i].show();
            }
            cout << endl << "Ktory produkt chcesz odj¹æ? " << endl;
            cin >> m;
            cout << "Iloœæ produktu do dodania na magazyn. " << endl;
            cin >> b;
            dyski[(m - 1)].rem_amm(b);
            break;
        case 4:
            for (int i = 0; i < ramy.size(); i++)
            {
                cout << (i + 1) << " ";
                ramy[i].show();
            }
            cout << endl << "Ktory produkt chcesz odj¹æ? " << endl;
            cin >> m;
            cout << "Iloœæ produktu do dodania na magazyn. " << endl;
            cin >> b;
            ramy[(m - 1)].rem_amm(b);
            break;
        case 5:
            for (int i = 0; i < plyty.size(); i++)
            {
                cout << (i + 1) << " ";
                plyty[i].show();
            }
            cout << endl << "Ktory produkt chcesz odj¹æ? " << endl;
            cin >> m;
            cout << "Iloœæ produktu do dodania na magazyn. " << endl;
            cin >> b;
            plyty[(m - 1)].rem_amm(b);
            break;
        case 6:
            for (int i = 0; i < zasilacze.size(); i++)
            {
                cout << (i + 1) << " ";
                zasilacze[i].show();
            }
            cout << endl << "Ktory produkt chcesz odj¹æ? " << endl;
            cin >> m;
            cout << "Iloœæ produktu do dodania na magazyn. " << endl;
            cin >> b;
            zasilacze[(m - 1)].rem_amm(b);
            break;
        }
        cout << "Chcesz kontynuwaæ? T/N";
        cin >> tem;
        system("cls");
    } while (tem == 'T');
    Main_Menu();
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
                ramy.push_back(RAM_memory(nazwa, vr, temp, ramid, pr,zero));
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
    cout << "5.Odejmij z magazynu" << endl;
    cout << "6.Dodaj nowy produkt do listy" << endl;
    cout << "7.Dodaj nowego producenta do listy." << endl;
    cout << "8.Koniec programu" << endl;

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
        Warehouse::odejmij();
        break;  
    case 6:
        system("cls");
        Warehouse::Add_new_product();
        break;
    case 7:
        system("cls");
        Warehouse::Add_new_producent();
        break;
    case 8:
        system("cls");
        Warehouse::end();
        break;
    }
    
}
bool is_file_empty(ifstream& pFile)
{
    return pFile.peek() == ifstream::traits_type::eof();
}
void Warehouse::start()
{
    string linia,nazwa,temp1,temp2;
    int x1, x2, x3,x4,x5;
    double y1;

 //---------------------------------procesory-------------------------------------

    ifstream pro("procesory.txt");
    if (!is_file_empty(pro))
    {
        while (!pro.eof())
        {
            for (int i = 0; i < 5; i++)
            {
                getline(pro, linia);
                if (i == 0)
                    x1 = stoi(linia);
                if (i == 1)
                    nazwa = linia;
                if (i == 2)
                    y1 = stod(linia);
                if (i == 3)
                    x2 = stoi(linia);
                if (i == 4)
                    x3 = stoi(linia);
            }
            procesory.push_back(Processor(nazwa, x1, y1, x3, x2));
        }
        pro.close();
    }
    

//----------------------------karty graficzne------------------------------------------

    ifstream gra("karty_graficzne.txt");
    if (!is_file_empty(gra))
    {
        while (!gra.eof())
        {
            for (int i = 0; i < 5; i++)
            {
                getline(gra, linia);
                if (i == 0)
                    x1 = stoi(linia);
                if (i == 1)
                    nazwa = linia;
                if (i == 2)
                    x2 = stoi(linia);
                if (i == 3)
                    x3 = stoi(linia);
                if (i == 4)
                    x4 = stoi(linia);
            }
            karty.push_back(GraphicCards(nazwa, x2, x1, x4, x3));
        }
        gra.close();
    }
    

//-------------------------------Producenci-----------------------------------------
    ifstream prod("producenci.txt");
    if (!is_file_empty(prod))
    {
        while (!prod.eof())
        {

            for (int i = 0; i < 2; i++)
            {
                getline(prod, linia);
                if (i == 0)
                    x1 = stoi(linia);
                if (i == 1)
                    nazwa = linia;
            }
            producenci.push_back(Producent(x1, nazwa));
        }
        prod.close();
    }
  

//---------------------------------------RAM-------------------------------
    ifstream ram("pamiec_ram.txt");
    if (!is_file_empty(ram))
    {
        while (!ram.eof())
        {
            for (int i = 0; i < 6; i++)
            {
                getline(ram, linia);
                if (i == 0)
                    x1 = stoi(linia);
                if (i == 1)
                    nazwa = linia;
                if (i == 2)
                    x2 = stoi(linia);
                if (i == 3)
                    x3 = stoi(linia);
                if (i == 4)
                    x4 = stoi(linia);
                if (i == 5)
                    x5 = stoi(linia);
            }
            ramy.push_back(RAM_memory(nazwa, x2, x3, x1, x4, x5));
        }
        ram.close();
    }
   

//------------------------------P³yta g³ówna--------------------------------
    ifstream mot("plyty_glowne.txt");
    if (!is_file_empty(mot))
    {
        while (!mot.eof())
        {
            for (int i = 0; i < 6; i++)
            {
                getline(mot, linia);
                if (i == 0)
                    x1 = stoi(linia);
                if (i == 1)
                    nazwa = linia;
                if (i == 2)
                    temp1 = linia;
                if (i == 3)
                    temp2 = linia;
                if (i == 4)
                    x2 = stoi(linia);
                if (i == 5)
                    x3 = stoi(linia);
            }
            plyty.push_back(Motherboard(nazwa, temp1, temp2, x3, x1, x2));
        }
        mot.close();
    }
    
//---------------------------Zasilacze------------------------------
    ifstream sup("zasilacze.txt");
    if (!is_file_empty(sup))
    {
        while (!sup.eof())
        {
            for (int i = 0; i < 5; i++)
            {
                getline(mot, linia);
                if (i == 0)
                    x1 = stoi(linia);
                if (i == 1)
                    nazwa = linia;
                if (i == 2)
                    x2 = stoi(linia);
                if (i == 3)
                    x3 = stoi(linia);
                if (i == 4)
                    x4 = stoi(linia);
            }
            zasilacze.push_back(Power_Supply(nazwa, x3, x4, x3, x1));
        }
        sup.close();
    }

//---------------------Dyski twarde----------------------------
    ifstream hard("dyski.txt");
    if (!is_file_empty(hard))
    {
        while (!hard.eof())
        {
            for (int i = 0; i < 5; i++)
            {
                getline(hard, linia);
                if (i == 0)
                    x1 = stoi(linia);
                if (i == 1)
                    nazwa = linia;
                if (i == 2)
                    x2 = stoi(linia);
                if (i == 3)
                    x3 = stoi(linia);
                if (i == 4)
                    x4 = stoi(linia);
            }
            dyski.push_back(Hard_Drive(nazwa, x2, x1, x3, x4));
        }
        hard.close();
    }

//--------------------Zmienne indeksów--------------------------
    ifstream ids("id.txt");
    if (!is_file_empty(ids))
    {
        while (!ids.eof())
        {
            for (int i = 0; i < 7; i++)
            {
                getline(ids, linia);
                if (i == 0)
                    prid = stoi(linia);
                if (i == 1)
                    grid = stoi(linia);
                if (i == 2)
                    ramid = stoi(linia);
                if (i == 3)
                    motid = stoi(linia);
                if (i == 4)
                    powid = stoi(linia);
                if (i == 5)
                    haid = stoi(linia);
                if (i == 6)
                    prodid = stoi(linia);
            }
        }
        ids.close();
    }
}

void Warehouse::end()
{
    //zapis procesorów
    ofstream zapis("procesory.txt");
    for(int i = 0; i < procesory.size(); i++)
    {
        zapis << procesory[i].get_id() << endl;
        zapis << procesory[i].get_name() << endl;
        zapis << procesory[i].M() << endl;
        zapis << procesory[i].get_idpr() << endl;
        zapis << procesory[i].amm();


        if (i != (procesory.size() - 1))
        {
            zapis << endl;
        }
    }
    zapis.close();
    //zapis producentów
    ofstream prod("producenci.txt");
    for (int i = 0; i < producenci.size(); i++)
    {
        prod << producenci[i].get_id() << endl;
        prod << producenci[i].get_name();
        if (i != (producenci.size() - 1))
        {
            prod << endl;
        }
    }
    prod.close();
    //zapis kart graficznych
    ofstream kart("karty_graficzne.txt");
    for (int i = 0; i < karty.size(); i++)
    {
        kart << karty[i].get_id() << endl;
        kart << karty[i].get_name() << endl;
        kart << karty[i].get_Vram() << endl;
        kart << karty[i].get_idp() << endl;
        kart << karty[i].get_am();
        if (i != (karty.size() - 1))
        {
            kart << endl;
        }
    }
    kart.close();
    //zapis pamiêci ram
    ofstream ram("pamiec_ram.txt");
    for (int i = 0; i < ramy.size(); i++)
    {
        ram << ramy[i].get_id() << endl;
        ram << ramy[i].get_name() << endl;
        ram << ramy[i].get_GB() << endl;
        ram << ramy[i].get_Tac() << endl;
        ram << ramy[i].get_prod() << endl;
        ram << ramy[i].get_amo();
        if (i != (ramy.size() - 1))
        {
            ram << endl;
        }
    }
    ram.close();
    //zapis p³yt g³ównych
    ofstream ply("plyty_glowne.txt");
    for (int i = 0; i < plyty.size(); i++)
    {
         ply << plyty[i].get_id() << endl;
         ply << plyty[i].get_name() << endl;
         ply << plyty[i].get_form() << endl;
         ply << plyty[i].get_sock() << endl;
         ply << plyty[i].get_prod() << endl;
         ply << plyty[i].get_amo();
         if (i != (plyty.size() - 1))
         {
             ply << endl;
         }
    }
    ply.close();
    //zapis zasilaczy
    ofstream sup("zasilacze.txt");
    for (int i = 0; i < zasilacze.size(); i++)
    {
        sup << zasilacze[i].get_id() << endl;
        sup << zasilacze[i].get_name() << endl;
        sup << zasilacze[i].get_powder() << endl;
        sup << zasilacze[i].get_prod() << endl;
        sup << zasilacze[i].get_am();
        if (i != (zasilacze.size() - 1))
        {
            sup << endl;
        }
    }
    //zapis dysków twardych
    ofstream hard("dyski.txt");
    for (int i = 0; i < dyski.size(); i++)
    {
        hard << dyski[i].get_id() << endl;
        hard << dyski[i].get_name() << endl;
        hard << dyski[i].get_poj() << endl;
        hard << dyski[i].get_prod() << endl;
        hard << dyski[i].get_amo();
        if (i != (dyski.size() - 1))
        {
            hard << endl;
        }
    }

    ofstream id("id.txt");
    id << prid << endl;
    id << grid << endl;
    id << ramid << endl;
    id << motid << endl;
    id << powid << endl;
    id << haid << endl;
    id << prodid;
    id.close();
}