#ifndef SERVICE_H
#define SERVICE_H
#include "Domestic.h"
#include <iostream>


class Service : public Domestic
{
    protected:

        int number_detected_bombs;


    public:
        Service(const char*, int, double, double,const char*,int,bool);

        Service();
        virtual ~Service();

        int GetNumberDetectedBombs();

        void SetNumberDetectedBombs();

        void Characters();

        virtual void PrintInfo() const;

       /// int Load(Service& b);
       /// void Save(Service& b);


        friend std::ostream& operator+(std::ostream& out, Service& b) {
			out << "\nИмя: " << b.GetName()
			 << "\nВозраст: " << b.GetAge()
			  << "\nСредняя стомость: " << b.GetMiddleCost()
				<< "\nСкорость: " << b.GetSpeed()
				<< "\nЖесткость: " << b.GetIsCruel()
				<< "\nЛюбимая еда: "<< b.GetFavouriteFood()
				<< "\nКоличество обнаруженных бомб: "<< b.GetNumberDetectedBombs()
				<< std::endl;
		}




    void writeFile (std::ofstream &file_out);
    void readFile (std::ifstream &file_in);


};

#endif // SERVICE_H
