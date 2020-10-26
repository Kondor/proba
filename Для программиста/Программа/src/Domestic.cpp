#include "Domestic.h"

#include "TypesOfWolves.h"
#include <iostream>
#include <cstring>
Domestic::Domestic()
{
    //ctor
}

Domestic::Domestic(

    const char *name,
    int age,
    double middle_cost,
    double speed,
    const char *favourite_food,
    bool isCruel
    ) : TypesOfWolves(name,age,middle_cost,speed,isCruel)
    {
        strcpy(this->favourite_food,favourite_food);

       type = 6;

    };


void Domestic::PrintInfo() const
{
    TypesOfWolves::PrintInfo();
    std::cout << "Ћюбимый корм: " << favourite_food << std::endl;
    ///std::cout << "∆есткость: " << isCruel <<  std::endl;

}

char* Domestic::GetFavouriteFood()
{
    return this->favourite_food;
}


/*int Domestic::Load(Domestic& b) {
		char Name[50];

		//const char* sl = "art.txt";
        const char* sl = "art2.txt";
		std::ifstream fin;
		fin.open(sl, std::ios::in);
		if (!fin.is_open()) {
			std::cout << "ќшибка открыти€ файла." << std::endl;
			return 0;
		}
		else
        {while(fin.read((char*)&b, sizeof(Domestic)))
        {
            b.PrintInfo();

        }
        }
		fin.close();
		return 1;
	}
	void Domestic::Save(Domestic& b) {
		char Name[50];
		//const char* sl = "art.txt";
		const char* sl = "art2.txt";
		std::ofstream fout;
		fout.open(sl, std::ios::out);
		fout.write((char*)&b, sizeof(Domestic));
		fout.close();
	}
*/


void Domestic::SetFavouriteFood()
{
    /*char str[100]="";
        std::cout << "¬ведите любимый корм: ";
        for(int i = 0; i < 100; i++)
        {
            str[i] = getchar();

            if (str[i] =='\n')
            break;

            std::cout << "¬ведите любимый корм собак: ";
            std::cin >> favourite_food;
            std::cout << std::endl;

        }

        char *favourite_food = strtok(str, " ");

        std::cout << std::endl;*/

            std::cout << "¬ведите любимый корм собак: ";
            std::cin >> favourite_food;
            std::cout << std::endl;

}
void Domestic :: readFile (std::ifstream &file_in)
{
file_in >> name;
file_in >> age;
file_in >> middle_cost;
file_in >>speed;
file_in >> favourite_food;
//file_in >> number_eaten_kangaroo;
file_in >> isCruel;
}

void Domestic:: writeFile (std::ofstream &file_out)
{

file_out << name << std::endl;
file_out << age << std::endl;
file_out << middle_cost << std::endl;
file_out <<speed << std::endl;
file_out << favourite_food << std::endl;
//file_out << number_eaten_kangaroo<< std::endl;
file_out << isCruel << std::endl;
}




Domestic::~Domestic()
{
    //dtor
}
