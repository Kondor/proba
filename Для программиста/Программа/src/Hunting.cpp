#include "Hunting.h"
//#include "TypesOfWolves.h"

Hunting::Hunting()
{
    //ctor
}


Hunting::Hunting(

    const char *name,
    int age,
    double middle_cost,
    double speed,
    const char *favourite_food,
    int number_caught_geese,
    bool isCruel
    ) : Domestic(name,age,middle_cost,speed,favourite_food,isCruel), number_caught_geese(number_caught_geese)
    {

       type = 4;

    }

void Hunting::PrintInfo() const
{
    Domestic::PrintInfo();
    std::cout << "Количество пойманных гусей: " << number_caught_geese <<  std::endl;
    std::cout << "Жесткость: " << isCruel <<  std::endl;
    std::cout << std::endl;

}


int Hunting::GetNumberCaughtGeese()
{
    return number_caught_geese;

}

/*int Hunting::Load(Hunting& b) {
		char Name[50];

		const char* sl = "art.txt";

		std::ifstream fin;
		fin.open(sl, std::ios::in);
		if (!fin.is_open()) {
			std::cout << "Ошибка открытия файла." << std::endl;
			return 0;
		}
		else
        {while(fin.read((char*)&b, sizeof(Hunting)))
        {
            b.PrintInfo();

        }
        }
		fin.close();
		return 1;
	}*/
	/*void Hunting::Save(Hunting& b) {
		char Name[50];
		const char* sl = "art.txt";
		std::ofstream fout;
		fout.open(sl, std::ios::out);
		fout.write((char*)&b, sizeof(Hunting));
		fout.close();
	}
*/

void Hunting::SetNumberCaughtGeese()
{
     std::cout << "Введите количество пойманных гусей ";
     std::cin>>number_caught_geese;
     std::cout<<std::endl;
}

void Hunting::Characters()
{


    //char name[100];
    SetName();
    /*std::cin >> name;

    std::cout << std::endl;*/
    SetAge();
    SetMiddleCost();
    SetSpeed();
    //SetType();
   /*) std::cout << "Введите любимый корм собак ";
    std::cin >> favourite_food;
    std::cout << std::endl;*/
    SetFavouriteFood();
    SetNumberCaughtGeese();
    SetIsCruel();


}

void Hunting:: readFile (std::ifstream &file_in)
{
file_in >> name;
file_in >> age;
file_in >> middle_cost;
file_in >>speed;
file_in >> favourite_food;
file_in >> number_caught_geese;
file_in >> isCruel;
}

void Hunting:: writeFile (std::ofstream &file_out)
{

file_out << name << std::endl;
file_out << age << std::endl;
file_out << middle_cost << std::endl;
file_out << speed << std::endl;
file_out << favourite_food << std::endl;
file_out << number_caught_geese<< std::endl;
file_out << isCruel << std::endl;
}






Hunting::~Hunting()
{
    //dtor
}
