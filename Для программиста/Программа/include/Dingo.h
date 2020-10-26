#ifndef DINGO_H
#define DINGO_H
#include "Wild.h"

class Dingo : public Wild
{
    protected:

        int number_eaten_kangaroo;


    public:
        Dingo();

        Dingo(const char*, int, double, double,int,int,bool);

        Dingo(const char*);

        virtual ~Dingo();

        int GetNumberEatenKangaroo();

        void SetNumberEatenKangaroo();

        void Characters();

        virtual void PrintInfo() const;
/*
        int Load(Dingo& b);
        void Save(Dingo& b);
        */

            //virtual void save(std::ofstream&);
         ///   virtual void load(std::ifstream&);

        friend std::ostream& operator+(std::ostream& out, Dingo& b) {
			out << "\nИмя: " << b.GetName()
			 << "\nВозраст: " << b.GetAge()
			  << "\nСредняя стомость: " << b.GetMiddleCost()
				<< "\nСкорость: " << b.GetSpeed()
				<< "\nЖесткость: " << b.GetIsCruel()
				//<< "\nРазмер: " << b.GetType()

				<< "\nКоличество съеденных людей: "<< b.GetNumberPeopleEaten()
				<< "\nКоличество убитых кенгуру: "<< b.GetNumberEatenKangaroo()
				<< std::endl;

		}

        void writeFile (std::ofstream &file_out);
		void readFile (std::ifstream &file_in);

		///void doan(std::ifstream &file_in);


};

#endif // DINGO_H
