#ifndef WOLVES_H
#define WOLVES_H
#include "Wild.h"
#include <iostream>
#include "ForClassName.h"
class Wolves : public Wild
{
    protected:
    int count_kill_fox;

    public:
        Wolves(const char*, int, double, double,int,int,bool);

        Wolves();
        virtual ~Wolves();

        int GetCountKillFox();

        void SetCountKillFox();

        void Characters();

        virtual void PrintInfo() const;

       // int Load(Wolves& b);
      //  void Save(Wolves& b);

        friend std::ostream& operator+(std::ostream& out, Wolves& b) {
			out << "\nИмя: " << b.GetName()
			 << "\nВозраст: " << b.GetAge()
			  << "\nСредняя стомость: " << b.GetMiddleCost()
				<< "\nСкорость: " << b.GetSpeed()
				<< "\nЖесткость: " << b.GetIsCruel()
				//<< "\nРазмер: " << b.GetType()

				<< "\nКоличество съеденных людей: "<< b.GetNumberPeopleEaten()
				<< "\nУбитых лис: "<< b.GetCountKillFox()
				<< std::endl;
		}


    void writeFile (std::ofstream &file_out);
    void readFile (std::ifstream &file_in);




};

#endif // WOLVES_H
