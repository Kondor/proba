#include "Wolves.h"
#include "Wild.h"
#include <cstring>
#include "TypesOfWolves.h"

Wolves::Wolves()
{
    //ctor
}

Wolves::Wolves(

    const char *name,
    int age,
    double middle_cost,
    double speed,
    int number_people_eaten,
    int count_kill_fox,
    bool isCruel
    ) : Wild(name,age,middle_cost,speed,number_people_eaten,isCruel),count_kill_fox(count_kill_fox)
    {

        type = 1;

    }


void Wolves::PrintInfo() const
{
    Wild::PrintInfo();
    std::cout << "Количество убитых лис: " << count_kill_fox <<  std::endl;
    std::cout << "Жесткость: " << isCruel <<  std::endl;
    std::cout << std::endl;
}


int Wolves::GetCountKillFox()
{
    return count_kill_fox;

}




/*int Wolves::Load(Wolves& b) {
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
        {while(fin.read((char*)&b, sizeof(Wolves)))
        {
            b.PrintInfo();

        }
        }
		fin.close();
		return 1;
	}
	void Wolves::Save(Wolves& b) {
		char Name[50];
		//const char* sl = "art.txt";
		const char* sl = "art2.txt";
		std::ofstream fout;
		fout.open(sl, std::ios::out);
		fout.write((char*)&b, sizeof(Wolves));
		fout.close();
	}
*/

void Wolves::SetCountKillFox()
{
    std::cout << "Введите количество убитых лис: ";
    std::cin >>count_kill_fox;
    std::cout << std::endl;

}

void Wolves::Characters()
{
    SetName();
    ///std::cin >> name;
   /// std::cout << std::endl;
    SetAge();
    SetMiddleCost();
    SetSpeed();
    //SetType();
    //std::cin >> type;
    //std::cout << std::endl;
    SetNumberPeopleEaten();
    SetCountKillFox();
    SetIsCruel();




}

void Wolves:: readFile (std::ifstream &file_in)
{
file_in >> name;
file_in >> age;
file_in >> middle_cost;
file_in >>speed;
file_in >> number_people_eaten;
file_in >> count_kill_fox;
file_in >> isCruel;
}

void Wolves:: writeFile (std::ofstream &file_out)
{

file_out << name << std::endl;
file_out << age << std::endl;
file_out << middle_cost << std::endl;
file_out <<speed << std::endl;
file_out << number_people_eaten << std::endl;
file_out << count_kill_fox << std::endl;
file_out << isCruel << std::endl;
}







Wolves::~Wolves()
{
    //dtor
}
