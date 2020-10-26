#include "Dingo.h"
//#include "Wild.h"
//#include "TypesOfWolves.h"
Dingo::Dingo()
{

}



Dingo::Dingo(

    const char *name,
    int age,
    double middle_cost,
    double speed,
    int number_people_eaten,
    int number_eaten_kangaroo,
    bool isCruel
    ) : Wild(name,age,middle_cost,speed,number_people_eaten,isCruel), number_eaten_kangaroo(number_eaten_kangaroo)
    {

        type = 2;


    }

void Dingo::PrintInfo() const
{

    Wild::PrintInfo();
    std::cout << "Количество съеденных кенгуру: " << number_eaten_kangaroo <<  std::endl;
    std::cout << "Жесткость: " << isCruel <<  std::endl;
    std::cout << std::endl;


}


int Dingo::GetNumberEatenKangaroo()
{
    return number_eaten_kangaroo;

}



/*int Dingo::Load(Dingo& b) {
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
        {while(fin.read((char*)&b, sizeof(Dingo)))
        {
            b.PrintInfo();

        }
        }
		fin.close();
		return 1;
	}
	void Dingo::Save(Dingo& b) {
		char Name[50];
		//const char* sl = "art.txt";
		const char* sl = "art2.txt";
		std::ofstream fout;
		fout.open(sl, std::ios::out);
		fout.write((char*)&b, sizeof(Dingo));
		fout.close();
	}

*/

void Dingo::SetNumberEatenKangaroo()
{

     std::cout << "Введите количество съеденных Кенгуру: ";
     std::cin>>number_eaten_kangaroo;
     std::cout<<std::endl;
}


void Dingo::Characters()
{





    //SetName();




    //std::cin >> name;

    //std::cout << std::endl;
    SetName();

    SetAge();
    SetMiddleCost();
    SetSpeed();
    //SetType();
    SetNumberPeopleEaten();
    SetNumberEatenKangaroo();
    SetIsCruel();

}

Dingo::Dingo(const char*)
{

}

/*void Dingo::load(std::ifstream& fin)
{
    Wild::load(fin);
    fin.read(reinterpret_cast<char*>(&number_eaten_kangaroo), sizeof(number_eaten_kangaroo));
}

void Dingo::save(std::ofstream& fout)
{
    Wild::save(fout);
    fout.write(reinterpret_cast<char*>(&number_eaten_kangaroo), sizeof(number_eaten_kangaroo));



}
*/

void Dingo:: readFile (std::ifstream &file_in)
{
//file_in >> num;

file_in >> name;

file_in >> age;

file_in >> middle_cost;

file_in >> speed;

file_in >> number_people_eaten;

file_in >> number_eaten_kangaroo;

file_in >> isCruel;
}

void Dingo:: writeFile (std::ofstream &file_out)
{

file_out << name << std::endl;
file_out << age << std::endl;
file_out << middle_cost << std::endl;
file_out << speed << std::endl;
file_out << number_people_eaten << std::endl;
file_out << number_eaten_kangaroo<< std::endl;
file_out << isCruel << std::endl;
}
/*
void Dingo::doan(std::ifstream &file_in){
//std::ifstream b1;
//b1.open("f.txt");
while (!file_in.eof())
{
Dingo* b= new Dingo;
b->readFile(file_in);


}
file_in.close();
//printTrack(list);
}
*/




Dingo::~Dingo()
{
    //dtor
}
