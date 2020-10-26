#include "Service.h"
//#include "Domestic.h"
//#include "TypesOfWolves.h"
#include <cstring>
Service::Service()
{
    //ctor
}

Service::Service(

    const char *name,
    int age,
    double middle_cost,
    double speed,
    const char *favourite_food,
    int number_detected_bombs,
    bool isCruel
    ) : Domestic(name,age,middle_cost,speed,favourite_food,isCruel), number_detected_bombs(number_detected_bombs)
    {

        type = 3;

    }

void Service::PrintInfo() const
{
    Domestic::PrintInfo();
    std::cout << "Количество обнаруженных бомб: " << number_detected_bombs <<  std::endl;
    std::cout << "Жесткость: " << isCruel <<  std::endl;
    std::cout << std::endl;

}


int Service::GetNumberDetectedBombs()
{
    return number_detected_bombs;

}


/*int Service::Load(Service& b) {
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
        {while(fin.read((char*)&b, sizeof(Service)))
        {
            b.PrintInfo();

        }
        }
		fin.close();
		return 1;
	}
	void Service::Save(Service& b) {
		char Name[50];
		//const char* sl = "art.txt";
		const char* sl = "art2.txt";
		std::ofstream fout;
		fout.open(sl, std::ios::out);
		fout.write((char*)&b, sizeof(Service));
		fout.close();
	}
*/

void Service::SetNumberDetectedBombs()
{
     std::cout << "Введите количество обнаруженных бомб: ";
     std::cin>>number_detected_bombs;
     std::cout<<std::endl;
}

void Service::Characters()
{


    SetName();
    //std::cin >> name;
   // std::cout << std::endl;
    SetAge();
    SetMiddleCost();
    SetSpeed();
    /*std::cout << "Введите любимый корм собак ";
    std::cin >> favourite_food;
    std::cout << std::endl;*/
    //SetType();
    SetFavouriteFood();
    SetNumberDetectedBombs();
    SetIsCruel();


}

void Service:: readFile (std::ifstream &file_in)
{
file_in >> name;
file_in >> age;
file_in >> middle_cost;
file_in >>speed;
file_in >> favourite_food;
file_in >> number_detected_bombs;
file_in >> isCruel;
}

void Service:: writeFile (std::ofstream &file_out)
{

file_out << name << std::endl;
file_out << age << std::endl;
file_out << middle_cost << std::endl;
file_out <<speed << std::endl;
file_out << favourite_food << std::endl;
file_out << number_detected_bombs<< std::endl;
file_out << isCruel << std::endl;
}




Service::~Service()
{
    //dtor
}
