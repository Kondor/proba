#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>

#include "ForClassName.h"
#include "TypesOfWolves.h"

TypesOfWolves::TypesOfWolves(const char* name, int age,double middle_cost,double speed,  bool isCruel): age(age), middle_cost(middle_cost), speed(speed), isCruel(isCruel)
{
    strcpy(this->name,name);
    type = 7;




}



TypesOfWolves::TypesOfWolves()
{

}
/*TypesOfWolves::TypesOfWolves():age(0),middle_cost(0.0),isCruel(1)
{
strcpy(name, "TypesOfWolvew");

}*/

char* TypesOfWolves::GetName()
{
    return this->name;
}

int TypesOfWolves::GetAge()
{
    return age;

}
bool TypesOfWolves::GetIsCruel()
{
    return isCruel;
}

int TypesOfWolves::GetType()
{
    return this->type;
}

double TypesOfWolves::GetMiddleCost()
{
    return middle_cost;
}
double TypesOfWolves::GetSpeed()
{
    return speed;

}



void TypesOfWolves::PrintInfo() const
{
    /*if (type == 1)
    {
        std::cout << "Название класса: Волки" << std::endl;
    }
    if (type == 2)
    {
        std::cout << "Название класса: Динго" << std::endl;
    }
    if (type == 3)
    {
        std::cout << "Название класса: Служебные собаки" << std::endl;
    }
    if (type == 4)
    {
        std::cout << "Название класса: Охотничьи собаки" << std::endl;
    }*/

    std::cout

    //<< "Тип - " << num << "\n"
   // << name << "\n"
    //<< classname << "\n"
    << "Имя - " << name << "\n"
    << "Возраст - " << age << "\n"
    << "Средняя стоимость - " << middle_cost << "\n"
 ///   << "Скорость - " << speed << "\n"
  << "Скорость - " << speed << std::endl;
    ///<< "Жесткость животного: " << (*this).isCruel << std::endl;


}
/*TypesOfWolves::TypesOfWolves(const char*)
{

}*/


/*TYPES TypesOfWolves::GetTYPES() const
{
    return types;
}
*/
/*void TypesOfWolves::save(std::ofstream& fout) {
    fout.write(reinterpret_cast<char*>(type), sizeof(type));
    fout.write(reinterpret_cast<char*>(name), sizeof(name));
    fout.write(reinterpret_cast<char*>(&age), sizeof(age));
    fout.write(reinterpret_cast<char*>(&middle_cost), sizeof(middle_cost));
    fout.write(reinterpret_cast<char*>(&isCruel), sizeof(isCruel));
}





void TypesOfWolves::load(std::ifstream& fin) {






    fin.read(reinterpret_cast<char*>(type), sizeof(type));
    fin.read(reinterpret_cast<char*>(name), sizeof(name));
    fin.read(reinterpret_cast<char*>(&age), sizeof(age));
    fin.read(reinterpret_cast<char*>(&middle_cost), sizeof(middle_cost));
    fin.read(reinterpret_cast<char*>(&isCruel), sizeof(isCruel));
}
*/

/*
int TypesOfWolves::Load(TypesOfWolves& b) {
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
        {while(fin.read((char*)&b, sizeof(TypesOfWolves)))
        {
            b.PrintInfo();

        }
        }
		fin.close();

		return 1;
	}
	void TypesOfWolves::Save(TypesOfWolves& b) {
		char Name[50];
		const char* sl = "art2.txt";
		std::ofstream fout;
		fout.open(sl, std::ios::out);
		fout.write((char*)&b, sizeof(TypesOfWolves));
		fout.close();
	}
*/


    void TypesOfWolves::SetName()
    {
    std::cout << "Введите кличку собаки: ";
       std::cin >> name;

        std::cout << std::endl;



    }
    void TypesOfWolves::SetAge()
    {

        std::cout << "Введите возраст: ";
        std::cin >> age;
        std::cout << std::endl;




    }
    void TypesOfWolves::SetMiddleCost()
    {
        std::cout << "Введите среднюю стоимость: ";
        std::cin >> middle_cost;
        std::cout << std::endl;

    }
    void TypesOfWolves::SetSpeed()
    {
        std::cout << "Введите скорость: ";
        std::cin >> speed;
        std::cout << std::endl;
    }
    void TypesOfWolves::SetIsCruel()
    {
        std::cout << "Введите жесткость(true или false): ";
        std::cin >> isCruel;
        std::cout << std::endl;
    }

    void TypesOfWolves::SetType()
    {
        std::cout << "Введите тип животного: ";
        std::cin >> type;
        std::cout << std::endl;
    }


void TypesOfWolves:: readFile (std::ifstream &file_in)
{
file_in >> name;
file_in >> age;
file_in >> middle_cost;
file_in >>speed;
//file_in >> number_people_eaten;
//file_in >> number_eaten_kangaroo;
file_in >> isCruel;
}

void TypesOfWolves:: writeFile (std::ofstream &file_out)
{

file_out << name << std::endl;
file_out << age << std::endl;
file_out << middle_cost << std::endl;
file_out <<speed << std::endl;
//file_out << number_people_eaten << std::endl;
//file_out << number_eaten_kangaroo<< std::endl;
file_out << isCruel << std::endl;
}








TypesOfWolves::~TypesOfWolves()
{
    //dtor
}
