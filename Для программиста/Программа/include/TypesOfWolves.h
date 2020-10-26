

#pragma once
#include <ostream>
#include <fstream>
#include <iostream>

#include "ForClassName.h"

class TypesOfWolves
{
protected:
    //ClassName classname = TYPESOFWOLVES;
    char name[100] = "";
    int age;
    double middle_cost;
    double speed;
    ///TYPES types = TYPESOFWOLVES;

    std::string num;



   bool isCruel;     // признак Одинаковое названия, но разные значения


    public:
        TypesOfWolves(const char*, int, double, double,bool);
        TypesOfWolves(char*);
        TypesOfWolves();

        TypesOfWolves(const char*);

        //char type;

        int type;
        char* GetName();
        int GetAge();

        double GetMiddleCost();
        double GetSpeed();
        bool GetIsCruel();
        int GetType();

    ///TYPES GetTYPES() const;

    /// ОПИШЕМ SET'ы

    void SetName();
    void SetAge();
    void SetMiddleCost();
    void SetSpeed();
    void SetIsCruel();



    void SetType();


        //void load(const char*);
        virtual void PrintInfo() const;
/*
    virtual void save(std::ofstream&);
    virtual void load(std::ifstream&);

    void Save(TypesOfWolves& b);
    int Load(TypesOfWolves& b);
*/
    virtual ~TypesOfWolves();

    ///TypesOfWolves* read_f(const char*, size_t&);

    void writeFile (std::ofstream &file_out);
    void readFile (std::ifstream &file_in);





};


