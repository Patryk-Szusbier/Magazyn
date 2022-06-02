#pragma once

#include <iostream>
#include <string>

using namespace std;


class Computer_Parts
{
    int id;
public:
    Computer_Parts(int i);

    void show();
};

//Klasa procesora
class Processor : public Computer_Parts
{
    string name;
    int MHz;
public:
    Processor(string n = "s", int i = 0, int MHz = 1);

    void show();
    void save();
    void open();
   
};

//Klasa karty graficznej
class Graphic_Card : public Computer_Parts
{
    string name;
    int Vram;
public:
    Graphic_Card(string n = "s", int rr = 0, int id = 0);

    void show();
    void save();
    void open();
 
};

//Klasa pamiêci RAM
class RAM_memory : public Computer_Parts
{
    string name;
};

//Klasa p³yty g³ownej
class Motherboard : public Computer_Parts
{
    string name;
};

//Klasa zasilacza
class Power_Supply : public Computer_Parts
{
    string name;
};

//Klasa z danymi producenta
class Producent
{
    int id, NIP;
    string name, adress;
public:
    Producent(int id, string na, string ad, int N)
    {
        id = id;
        NIP = N;
        name = na;
        adress = ad;
    }
    void show()
    {
        cout << "Id Producenta: " << id << endl;
        cout << "NIP: " << NIP << endl;
        cout << "Nazwa: " << name << ". Adres: " << adress << endl;
    }
};
//Klasa magazynu
class Warehouse 
{

public:
    void Main_Menu();
    void Towar();
    void Stan_magazynowy();
    void Producenci();
    void Dostawa();
    void Add_new_product();
    void Add_new_producent();

};