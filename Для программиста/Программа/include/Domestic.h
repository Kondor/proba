#ifndef DOMESTIC_H
#define DOMESTIC_H
#include "ForClassName.h"
#include "TypesOfWolves.h"
class Domestic : public TypesOfWolves
{
    protected:

        char favourite_food[100]="";

    public:
        Domestic(const char*, int, double, double,const char*,bool);

        Domestic();
        virtual ~Domestic();

        char* GetFavouriteFood();

        void SetFavouriteFood();

        virtual void PrintInfo() const;

       /// int Load(Domestic& b);
       /// void Save(Domestic& b);

    void writeFile (std::ofstream &file_out);
    void readFile (std::ifstream &file_in);



};

#endif // DOMESTIC_H
