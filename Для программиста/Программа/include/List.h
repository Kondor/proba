#pragma once
//#include <list>

#include <cstddef>

#include "TypesOfWolves.h"

#include <Node.h>
#include "Wild.h"

#include "Wolves.h"
#include "Dingo.h"
#include "Service.h"
#include "Hunting.h"
#include <vector>

#include "ForClassName.h"
#include <cstdlib>

#include <cstring>
#include <conio.h>
//#include <Wild.h>
//#include <TypesOfWolves.h>
template<typename T>
class List
{
    public:
        int listSize;   /// кол-во элементов

        int kol; /// кол - во элементов в файле




        void printSize()    /// печатаем кол-во элементов списка
        {
            std::cout << "Количество в списке " << listSize << std::endl;
        }

        List<T>()
        {
            this->listSize = 0;
            this->head = NULL;
        }

        void Add(T *element)   /// добавление элемента в начало
        {
            if (this->head == NULL)
            {

                this->head = new Node<T>(element, NULL);

            } else {
                Node<T> *head = new Node<T>(element, this->head);
                this->head = head;
            }

            listSize++;
        }








        void popFront()     ///удалить элемент из начала
        {
            Node<T> *tmp = head;
            head = head->next;
            delete tmp;

            listSize--;
        }

        void deleteAll()    ///отчистить список
        {
            while(listSize != 0)
            {
                popFront();
            }
        }

        void printAll()     /// печать полей всего списка
        {
            T *data;
            Node<T> *current = this->head;

            if (listSize == 1)
            {
                data = current->data;
                (*data).PrintInfo();
            }

            else{

            if (listSize != 0)
            {
                do
                {
                    data = current->data;
                    (*data).PrintInfo();
                    current = current->next;
                } while(current->next != NULL);

                data = current->data;
                (*data).PrintInfo();
            }
            }
            std::cout << std::endl;
        }



        T findById(int index)   /// Найти элемент по номеру (с нуля)
        {
            if(index < 0 ||
               (listSize - 1) < index)
            {
                std::cout << "ОШИБКА! Выход за границу списка" << std::endl;
                return T();
            }

            if (index == 0)
            {
                return *(head->data);
            }
            else
            {
                Node<T> *current = this->head;

                for (int i = 0; i < index; i++)
                {
                    current = current->next;
                }

                return *(current->data);
            }
        }

        void deleteElement(int index) /// удаление элемента по номеру (с нуля)
        {
            if(index < 0 ||
               (listSize - 1) < index)
            {
               std:: cout << "ОШИБКА! Выход за границу списка" << std::endl;
                //return ;
                exit(0);
            }


            if (index == 0)
            {
                popFront();
            }
            else
            {
                Node<T> *previous = this->head;
                for (int i = 0; i < index - 1; i++)
                {
                    previous = previous->next;
                }

                Node<T> *toDelete = previous->next;
                previous->next = toDelete->next;

                delete toDelete;
                listSize--;
            }
        }
/*
      void save()
{




   std::ofstream fout("f.txt",std::ios::in);

   Node<T> * tmp = head;
   while(tmp != 0)
   {
      //T g;
      //fout<<g;
      //d = tmp->data;
      fout << tmp->data << " ";
     // f.write((char*)&d,sizeof(T));
      tmp = tmp->next;
   }
}
*/

void Output()       /// СОХРАНЕНИЕ
{

    char nname[10];
    std::string line;
    std::cout << "Введите название файла, в который нужно загрузить список:" << std::endl;
    std::cin >> line;
    strcpy(nname, line.c_str());


    std::ofstream fout(nname);
    if (fout)
    {
        //fout << listSize << "." << std::endl;
        //fout.clear();


        Node<T> *buffer = head;
        while (buffer != NULL)
        {
            //buffer -> data -> writeFile(fout);
            buffer -> data->writeFile(fout);
            buffer = buffer -> next;
        }
        if ((listSize == 0))
        {
            std::cout << "Список пуст." << std::endl;
        }
        else
        {
            std::cout << "Список успешно загружен в файл:" << nname << "." << std::endl;
        }
    }
    else
    {
        std::cerr << "Ошибка открытия файла." << std::endl;
    }
}






/*

void vivod(List &lst){
    std::ifstream b1;
b1.open("f.txt");
while (!b1.is_open())
{
T* b= new T;
b->readFile(b1);
lst.pushBack1(b);
}
b1.close();


}
*/
/*

void open()
{

   std::ifstream fin("f.txt");
   if (!fin)
   {
       std::cout << "Error!" <<std::endl;
       return;
   }
       //T *el = new T;


   while (!fin.is_open()){
        T *lst = new T;
       lst->readFile(fin);
       append(lst);
       }
   fin.close();
}
void Add(T *element)
{   if (this->head == NULL)
            {
                this->head = new Node<T>(element, NULL);

            } else {
                Node<T> *head = new Node<T>(element, this->head);
                this->head = head;
            }

            listSize++;

}

*/





/*
        void diskIn(List& lst, const char* namefile)
{
    std::ifstream infile(namefile,std::ios::binary);
    int d = 0;
    infile.seekg(0);
    infile.read( reinterpret_cast<char*>(&d),sizeof(int) );
    while( !infile.eof() )
    {

        infile.read( reinterpret_cast<char*>(&d),sizeof(int) );
    }
}*/

/*
void append(T* a)
{
	listSize++;
	if (last) {

		///a->next = last->next;
		last = last->next = a;
	}
	else
		last = a->next = a;
}
*/

/*

    void load_from_file();

    void Save_List(List<T> data,const char* namefile);

    void Load_List(List<T> &data,const char* namefile);

    void SaveList(List<T> lst,const char* namefile);

    int LoadList (List<T>& lst,const char* namefile);

    //int Load(Dingo& b);

    int Load(T &b) {
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

*/


/*
   ///void push_back1(List<T>& lst);

   /// void push_back(List<T>& lst);

   /// void pushB(List<T> &element);
*/


    ///void download(std::ifstream &file_in){
    void download(std::ifstream &file_in){
    char nname[10];
    std::string line;
    std::cout << "Введите название файла, из которого нужно загрузить список:" << std::endl;
    std::cin >> line;
    strcpy(nname, line.c_str());
     std::ifstream fout(nname);
   /// if (fout)

//std::ifstream b1
//b1.open("f.txt");
///T* b = new T;
file_in.seekg(0);
///if (!file_in.is_open())
    if (!fout)
{
    std::cout << "Не открывает" << std::endl;
    std::exit(0);
}
else
{



///while (!file_in.eof())
while (!fout.eof())
{


        T* b = new T;

b->readFile(fout);

Add(b);

kol++;

}
deleteElement(0);
///std::cout << kol << std::endl;
fout.close();
file_in.close();


//printTrack(list);
}


    }

/*
     operator T&() {
        return t;
    }

    operator T const &() const {
        return t;
    }
    */


  ///  void insert1(List<T> *a);

    protected:

    private:
        T t;

        Node<T> *head; /// указатель на начало списка
        List<T> *head1;
        List <T> *next1;
        List<T>* first;

        Node<T> *last;

        //Link<T>* last;

};
/*

template <typename T>
void List <T>::Load_List(List<T> &data1,const char* namefile)
{

std::ifstream fin(namefile,std::ios::binary); //Открыли для только для чтения в бинарном режиме

List<T> *data = this->head1;
fin.seekg(0);
if (!fin.is_open())
{
    std::cout << "Не открывает" << std::endl;
    //exit(0);
}
else
{
    std::cout << "Чтение открыто" << std::endl;

    T d;
    while(fin.read((char*)&d,sizeof(T)))
    {
            List<T>* newlink;


        //Node<T>* newlink;







    }
fin.close();

}

}
*/


    /*




    std::ifstream f;

    Node<T>* head = this->head;
    T *d = NULL;
    f.open(namefile,std::ios::binary);
    f.seekg(0);

    //f.read(reinterpret_cast<char*>(&d),sizeof(T));




    if(!f.is_open())

    {
        std::cout<<"Ошибка открытия файла!"<<std::endl;
        //return 0;
    }
    else
    while(f.read((char*)&d,sizeof(T)))
    {
        Node<T>* newlink;

        newlink->data = d;
        newlink->next = head;
        head = newlink;


        f.read(reinterpret_cast<char*>(&d),sizeof(T));
    }
    f.close();
    //return 1;
}
*/
/*
template <typename T>
void List<T>::Save_List(List<T> data,const char* namefile)
{

    Node<T>* tmp = head;
    std::ofstream f;
    T *d;
    f.open(namefile,std::ios::out|std::ios::trunc);
    if (tmp != NULL)
    {
        while (tmp!= NULL)
        {
            d = tmp->data;
           f.write((char*)&d,sizeof(T));
           tmp = tmp->next;
           std::cout << "Файл сохранён" << std::endl;
        }
    f.close();
    }
}
*/


/*
 template <typename T>
    void  List<T>::SaveList(List<T> lst,const char* namefile) {
        char Name1[50];

        //const char* sl = "art.txt";
        //const char* s1;
       // std::cout << "Введите имя файла, в который сохранить список и его расширение" << std::endl;
        //std::cin >> Name1;
       // s1 = Name1;
        Node<T>* current = head;
        std::ofstream f;
        //f.open(namefile, std::ios::out | std::ios::trunc);

        f.open(namefile,std::ios_base::in |std::ios_base::out | std::ios_base::binary);
      // f.open(namefile, std::ios::out | std::ios::app);
        if (current != NULL) {

            while (current != NULL) {
                f.write((char*)&current->data, sizeof(T));
                current = current->next;
            }
            //std::cout<<lst;


        }

        f.close();


    }
*/

/*

    template <typename T>
    int List<T>::LoadList (List<T> &lst,const char* namefile) {
        char Name1[50];

		const char* Namefile = "art2.txt";
        //const char* s1;
       // std::cout << "Введите имя файла, в котором находится список и его расширение" << std::endl;
        //std::cin >> Name1;
        //s1 = Name1;
        std::ifstream f;
        T kst;

        f.open(namefile, std::ios::binary);
        //f.read(namefile,std::ios::binary);
        if (!f.is_open()) {
            std::cout << "Ошибка открытия файла. Повторите попытку!" << std::endl;
            return 0;
        }
        else{

            //while (f.read(reinterpret_cast<char*>(&kst), sizeof(T))) {
    while (f.read((char*)&kst, sizeof(T))) {








            f.close();
    }
        return 1;
    }
        }*/
   /*     /////// ЗАГРУЗКА НЕ УДАЧНАЯ !
template <typename T>  /// ЭТО НАДО, ЕГО ИСПРАВЛЯЕМ
int List<T>::LoadList (List<T>& lst,string FileName) {  //////// ЗАГРУЗКА НЕ УДАЧНАЯ !
       /// void LoadList(MyList &Planet,string FileName)
{
    ifstream fin; ///объект ввода
    const char *F; ///имя файла
    TypesOfWolves *p; ///указатель на базовый класс
    F = FileName.c_str();
    string s1,s2,s3;

    fin.open(F);

    if(fin.is_open())
    {
    while(!fin.eof())  ///пока файл не пуст
    {
        fin.sync();     ///ОЧИСТКА БУФЕРА
        getline(fin,s1);

        if (s1=="Суша")     ///
        {
            fin.sync();
            getline(fin,s1);

            if(s1=="Пустыня")
            {
                fin.sync();
                getline(fin,s1);
                if (s1=="Низкий")
                {
                    fin.sync();
                    getline(fin,s1);

                    fin.sync();
                    getline(fin,s2);

                    p = new Wolves(s1,atoi(s2.c_str()));
                    Planet.push_back(p);
                }

             }
             else
            if(s1=="Джунгли")
            {
                fin.sync();
                getline(fin,s1);
                if (s1=="Высокий")
                {
                    fin.sync();
                    getline(fin,s1);

                    fin.sync();
                    getline(fin,s2);
                    p = new Jungle(s1,atoi(s2.c_str()));
                    Planet.push_back(p);
                }

            }
        } ///Суша
        else

        if (s1=="Вода")     ///
        {
            fin.sync();
            getline(fin,s1);

            if(s1=="Соленная")
            {
                    fin.sync();
                    getline(fin,s1);

                    fin.sync();
                    getline(fin,s2);

                    fin.sync();
                    getline(fin,s3);

                    p = new SaltyWater(s2,atoi(s1.c_str()),atoi(s3.c_str()));
                    Planet.push_back(p);
             }

             else

            if(s1=="Пресная")
            {

                    fin.sync();
                    getline(fin,s1);

                    fin.sync();
                    getline(fin,s2);

                    fin.sync();
                    getline(fin,s3);

                        if(s3=="Заболочен")
                        {
                            p = new FreshWater(true,s2,atoi(s1.c_str()));
                            Planet.push_back(p);
                        }

                    else

                        if(s3=="Не заболочен")
                        {
                            p = new FreshWater(false,s2,atoi(s1.c_str()));
                            Planet.push_back(p);
                        }

                }

            }///Вода



        } ///while

        cout << "Загружено" << endl;

     }


    else
        cout <<"Не удалось открыть файл" << endl;

    fin.close();


}
        }*/












            /*size_t offset = 0;
            std::ifstream f(namefile, std::ios::binary | std::ios::app);
            f.seekg(offset);
            f.read(reinterpret_cast<char*>(&g), sizeof(T));
            f.seekg(offset);



             char text[100];//массив символов
             f.getline(text,sizeof(text));

                 std::ofstream out(namefile);//выходной поток


char *temp;
f >> temp;
////out << temp;

  ///  f.close();
 	///out.close();


                             // ifstream input("art2.txt");//открываем входной поток
                        //    input.getline(text,sizeof(text));//считываем строку
                      //ofstream out("text2.txt");//выходной поток
                        //out<<text;//выводим массив символов, взятый из text.txt в text2.txt























            //typesofwolves->load(f);

            ///offset = f.tellg();



            //f.read(reinterpret_cast<char*>(&lst), sizeof(T));







        f.close();
        }*/
/*


/*

    void List::load_from_file()
{
    ifstream file("out.txt");
    while (!file.eof())
    {
        List* temp = new List;
        file >> temp->name;
        file >> temp->surname;
        file >> temp->group;
        file >> temp->marks;
        if (first == NULL)
        {
            temp->next = NULL;
            first = last = temp;
        }
        else
        {
            last->next = temp;
            temp->next = NULL;
            last = temp;
        }
    }
    file.close();
}
*/
/*
    template <typename T>
    void List<T>::insert1(List<T>* a)
{
	///kol++;
	listSize++;



	if (this->head1 == NULL)
		a->head1 = head1->next1;
	else
		head1 = a;
	head1->next1 = a;
}*/

/*

using std::istream;
using std::ostream;
template<typename T>
istream & operator>>(istream & is, List<T> & wt) {
    is.read(reinterpret_cast<char *>(&static_cast<T &>(wt)), sizeof(T));
    wt.printAll();
    return is;
}

template<typename T>
ostream & operator<<(ostream & os, List<T> const & wt) {
    os.write(
            reinterpret_cast<char const *>(&static_cast<T const &>(wt)),
            sizeof(T));
    return os;
}
*/
