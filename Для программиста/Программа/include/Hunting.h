#ifndef HUNTING_H
#define HUNTING_H
#include "Domestic.h"
#include <iostream>
#include "ForClassName.h"
class Hunting : public Domestic
{
    protected:
        int number_caught_geese;


    public:

        Hunting(const char*, int, double, double,const char*,int,bool);

        Hunting();
        virtual ~Hunting();

        int GetNumberCaughtGeese();

        void SetNumberCaughtGeese();

        void Characters();

        virtual void PrintInfo() const;

        int Load(Hunting& b);
        void Save(Hunting& b);

         friend std::ostream& operator+(std::ostream& out, Hunting& b) {
			out << "\nИмя: " << b.GetName()
			 << "\nВозраст: " << b.GetAge()
			  << "\nСредняя стомость: " << b.GetMiddleCost()
				<< "\nСкорость: " << b.GetSpeed()
				<< "\nЖесткость: " << b.GetIsCruel()
				<< "\nЛюбимая еда: "<< b.GetFavouriteFood()
				<< "\nКоличество обнаруженных бомб: "<< b.GetNumberCaughtGeese()
				<< std::endl;
		}
    void writeFile (std::ofstream &file_out);
    void readFile (std::ifstream &file_in);


};

#endif // HUNTING_H
