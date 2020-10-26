#pragma once
#include "TypesOfWolves.h"
#include <ostream>
#include <fstream>
#include <iostream>
#include "ForClassName.h"
class Wild : public TypesOfWolves
{

protected:

    int number_people_eaten;


    public:
        Wild(const char*, int, double, double,int,bool);

        Wild();
        Wild(const char*);

        int GetNumberPeopleEaten();

        void SetNumberPeopleEaten();

        virtual void PrintInfo() const;

/*
        virtual void save(std::ofstream&);
        virtual void load(std::ifstream&);
        int Load(Wild& b);
        void Save(Wild& b);
        */

        virtual ~Wild();

        //char GetType();
        //virtual void GetType() const;

    void writeFile (std::ofstream &file_out);
    void readFile (std::ifstream &file_in);





};


