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
    int get_id();
    virtual void add_amm(int t) = 0;
    virtual void rem_amm(int t) = 0;
};
//Klasa z danymi producenta
class Producent
{
    int id;
    string name;
public:
    Producent(int id = 0, string na = "none");

    void show();
    int get_id();
    void gname();
    string get_name();

};
//Klasa procesora
class Processor : public Computer_Parts
{
    string name;
    int amount, idpr;
    float MHz;
public:
    Processor(string n = "s", int i = 0, float MHz = 1.0, int amm = 0,int idpr = 0);

    void show();
    void show_all();
    void show_min();
    string get_name();
    int amm();
    float M();
    int get_idpr();
    virtual void add_amm(int t);
    virtual void rem_amm(int t);
};

//Klasa karty graficznej
class GraphicCards : public Computer_Parts, public Producent
{
    string name;
    int Vram,amount,idp;
public:
    GraphicCards(string n = "s", int rr = 0, int id = 0,int am = 0,int id2 = 0);

    void show();
    void show_all();
    void show_min();
    string get_name();
    int get_am();
    int get_Vram();
    int get_idp();
    virtual void add_amm(int t);
    virtual void rem_amm(int t);
};

//Klasa pamiêci RAM
class RAM_memory : public Computer_Parts
{
    string name;
    int GB, Takt,prod,amount;
public:
    RAM_memory(string nam = "s", int g = 0, int T = 0, int id = 0,int idp=0);

    void show_all();
    void show_min();
    string get_name();
    int get_GB();
    int get_Tac();
    int get_prod();
    int get_amo();
    virtual void add_amm(int t);
    virtual void rem_amm(int t);
};

//Klasa p³yty g³ownej
class Motherboard : public Computer_Parts
{
    string name,format,socket;
    int amount,prod;
public:
    Motherboard(string nam = "s", string forr = "ss", string soc = "sss", int amo = 0,int id1 = 0,int id2=0);

    void show_all();
    void show_min();
    string get_name();
    string get_form();
    string get_sock();
    int get_amo();
    int get_prod();
    virtual void add_amm(int t);
    virtual void rem_amm(int t);
};

//Klasa zasilacza
class Power_Supply : public Computer_Parts
{
    string name;
    int Power,amount,prod;
public:
    Power_Supply(string nam ="n", int Pow = 0, int am = 0, int pid = 0, int id1 = 0);

    void show_all();
    void show_min();
    string get_name();
    int get_powder();
    int get_am();
    int get_prod();
    virtual void add_amm(int t);
    virtual void rem_amm(int t);
};
//klasa dysków twardych
class Hard_Drive : public Computer_Parts
{
    string name;
    int poj, amount, prod;
public:
    Hard_Drive(string nam = "n", int po = 0, int id1 = 0, int pid = 0, int am = 0);
    void show_all();
    void show_min();
    string power();
    int get_poj();
    int get_amo();
    int get_prod();
    virtual void add_amm(int t);
    virtual void rem_amm(int t);

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
    void end();

};