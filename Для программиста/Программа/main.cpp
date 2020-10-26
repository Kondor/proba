#include <iostream>
#include <clocale>
#include <fstream>

#include <ostream>
#include "TypesOfWolves.h"
#include "Wild.h"
#include "Domestic.h"
#include "Wolves.h"
#include "Dingo.h"
#include "Service.h"
#include "Hunting.h"
#include <stdlib.h>
#include "List.h"
#include "Node.h"

#include "ForClassName.h"
#include "Interface.h"
#include <windows.h>



#include "wrap.h"
#include <string>
//#include "ListRealize.h"
#include <cassert>
//#include "ForClassName.h"

using namespace std;

int main()
{

//setlocale(LC_ALL,"rus");

system("chcp 1251 > NUL" );

/*//SetConsoleOutputCP(1251);
//SetConsoleCP(1251);

//TypesOfWolves* ART1 = new TypesOfWolves("ana1",10,20.5,30.5,true);
//TypesOfWolves* ART2 = new TypesOfWolves("ana2",10,20.5,30.5,true);
//TypesOfWolves* ART3 = new TypesOfWolves("ana3",10,20.5,30.5,true);
//Wild* ART4 = new Wild("апа4",10,20.5,30.5,10,true);

//Wild* milten = new Wild("Milten",10,20.9,40.2,50,false);

//Wolves lo;
*/


TypesOfWolves NANAT("NANAT",10,20.5,30.5,true);







Domestic mk("kjd",10,20.5,30.5,"яда",false);


Wolves ma("няня",10,500.5,400.5,300,200,true);

///std::cout + ma;             /// ДЛЯ ПОКАЗА РАБОТЫ ПЕРЕГРУЗКИ
///std::cout <<  std::endl;           /// РАБОТАЕТ
//std::cout << NANAT << std::endl;        /// НЕ РАБОТАЕТ
///std::cout << mk << std::endl;


const char* Namefile = "art2.txt";


/*
///std::string fname = "xg1.txt";

///const char filename[] = "na.pr";
//std::remove(filename);



//List<TypesOfWolves> myList;

//myList.pushBack1(ART1);
//myList.pushBack1(ART2);
//myList.pushBack1(ART3);

//myList.Save_List(myList,filename);

//TypesOfWolves Hih("KRYA",10,20.5,30.5,false);

//Hih.Save(Hih);

//TypesOfWolves Hyt;

//Hyt.Load(Hih);

std::cout << "====================================" << std::endl;

//myList.SaveList(myList,Namefile);



//myList.LoadList(myList,Namefile);

//List<TypesOfWolves> moyList;

//moyList.SaveList(myList,Namefile);

//moyList.LoadList(myList,Namefile);
*/

Interface in;


/////////////////////////////////////////////// ДЛЯ МЕНЮ!
    List<Wolves> plst;
    List<Dingo> mlst;
    List<Service> clst;
    List<Hunting> slst;
    in.Menu(plst,mlst,clst,slst);



/*
Wolves* ART1 = new Wolves("арт",10,20.5,30.5,40,50,1);



List<Wolves> moyList;

moyList.pushBack1(ART1);

moyList.SaveList(moyList,Namefile);

List<Wolves> moy;
moy.LoadList(moyList,Namefile);


moy.printAll();*/




/*


//myList.SaveList(myList);

//myList.LoadList(myList);

//myList.LoadList(myList);
*/


/*
size_t offset = 0;
    while (true) {
        TypesOfWolves* user = Bynaries_Read(filename, offset);
        if (user  == NULL) {
            break;
        }
        user ->PrintInfo();
    }

*/



/*
//myList.printAll();

myList.printSize();
TypesOfWolves* ART5 = new TypesOfWolves;
myList.Load_List(ART5,filename);
*/





/*
string path = "myFile.txt";
ofstream fout;

fout.open(path.c_str(),ofstream::app);

if (!fout.is_open())
{
    std::cout << "Не открывает" << std::endl;
}
else
{
    std::cout << "Файл открыт" << std::endl;
    fout.write(reinterpret_cast<char*>(), sizeof(TypesOfWolves));
}

fout.close();

//string path1 = "fileText.txt";



template <typename T>
ifstream fin(filename,ios::binary); //Открыли для только для чтения в бинарном режиме

if (!fin.is_open())
{
    std::cout << "Не открывает" << std::endl;
    exit(0);
}
else
{
    std::cout << "Чтение открыто" << std::endl;
    T *d = new T;
    while(fin.read((char*)&d,sizeof(T)))
    {


    }
fin.close();

}


*/

/*
//myList.Load_List(ART3,filename);




//std::ifstream fin(filename, std::ios::binary | std::ios::app);
//fin.read(reinterpret_cast<char*>(&classname), sizeof(classname));


   // myList.Save_List(myList,filename);

    //std::cout << myList.Sizee()<<std::endl;

    //myList.Load_List(myList,filename);

    //std::cout << ART.GetClassName() << std::endl;


   // std::cout << NANAT.GetClassName() << std::endl;
   // std::cout << nan.GetClassName() << std::endl;


   // Hunting Terier("Terier",5,100000.012,63.5,"Pedigree",10,true);

    //std::cout << Terier.GetClassName() << std::endl;

   // Terier.PrintInfo();








//Wild a("тятя",10,20.5,30.5,10);

*/
















return 0;
}



