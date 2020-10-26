#include "Wild.h"
//#include "TypesOfWolves.h"
#include <cstring>
#include <iostream>
#include <fstream>
#include <ostream>


Wild::Wild()
{
    //ctor
}

Wild::Wild(

    const char *name,
    int age,
    double middle_cost,
    double speed,
    int number_people_eaten,
    bool isCruel
    ) : TypesOfWolves(name,age,middle_cost,speed,isCruel),number_people_eaten(number_people_eaten)
    {

        type = 5;

    }

/*Wild::Wild(const char* filename)
{

}
*/




void Wild::PrintInfo() const
{
    TypesOfWolves::PrintInfo();
    std::cout << "Число съеденных людей: " << number_people_eaten <<  std::endl;

}


int Wild::GetNumberPeopleEaten()
{
    return number_people_eaten;

}

 void Wild::SetNumberPeopleEaten()
 {
     std::cout << "Введите количество съеденных людей: ";
     std::cin>>number_people_eaten;
     std::cout<<std::endl;
 }

/*
void Wild::save(std::ofstream& fout)
{
    TypesOfWolves::save(fout);
    fout.write(reinterpret_cast<char*>(&number_people_eaten), sizeof(number_people_eaten));



}

void Wild::load(std::ifstream& fin)
{
    TypesOfWolves::load(fin);
    fin.read(reinterpret_cast<char*>(&number_people_eaten), sizeof(number_people_eaten));
}

/*char Wild::GetType()
{
    return this->type;
}

int Wild::Load(Wild& b) {
		char Name[50];

		//const char* sl = "art.txt";
        const char* sl = "art2.txt";
		std::ifstream fin;
		fin.open(sl, std::ios::in);
		if (!fin.is_open()) {
			std::cout << "Ошибка открытия файла." << std::endl;
			return 0;
		}
		else
        {while(fin.read((char*)&b, sizeof(Wild)))
        {
            b.PrintInfo();

        }
        }
		fin.close();
		return 1;
	}
	void Wild::Save(Wild& b) {
		char Name[50];
		//const char* sl = "art.txt";
		const char* sl = "art2.txt";
		std::ofstream fout;
		fout.open(sl, std::ios::out);
		fout.write((char*)&b, sizeof(Wild));
		fout.close();
	}
	*/


	void Wild:: readFile (std::ifstream &file_in)
{
file_in >> name;
file_in >> age;
file_in >> middle_cost;
file_in >>speed;
file_in >> number_people_eaten;
//file_in >> number_eaten_kangaroo;
file_in >> isCruel;
}

void Wild:: writeFile (std::ofstream &file_out)
{

file_out << name << std::endl;
file_out << age << std::endl;
file_out << middle_cost << std::endl;
file_out <<speed << std::endl;
file_out << number_people_eaten << std::endl;
//file_out << number_eaten_kangaroo<< std::endl;
file_out << isCruel << std::endl;
}



Wild::~Wild()
{
    //dtor
}
