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
        int listSize;   /// ���-�� ���������

        int kol; /// ��� - �� ��������� � �����




        void printSize()    /// �������� ���-�� ��������� ������
        {
            std::cout << "���������� � ������ " << listSize << std::endl;
        }

        List<T>()
        {
            this->listSize = 0;
            this->head = NULL;
        }

        void Add(T *element)   /// ���������� �������� � ������
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








        void popFront()     ///������� ������� �� ������
        {
            Node<T> *tmp = head;
            head = head->next;
            delete tmp;

            listSize--;
        }

        void deleteAll()    ///��������� ������
        {
            while(listSize != 0)
            {
                popFront();
            }
        }

        void printAll()     /// ������ ����� ����� ������
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



        T findById(int index)   /// ����� ������� �� ������ (� ����)
        {
            if(index < 0 ||
               (listSize - 1) < index)
            {
                std::cout << "������! ����� �� ������� ������" << std::endl;
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

        void deleteElement(int index) /// �������� �������� �� ������ (� ����)
        {
            if(index < 0 ||
               (listSize - 1) < index)
            {
               std:: cout << "������! ����� �� ������� ������" << std::endl;
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

void Output()       /// ����������
{

    char nname[10];
    std::string line;
    std::cout << "������� �������� �����, � ������� ����� ��������� ������:" << std::endl;
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
            std::cout << "������ ����." << std::endl;
        }
        else
        {
            std::cout << "������ ������� �������� � ����:" << nname << "." << std::endl;
        }
    }
    else
    {
        std::cerr << "������ �������� �����." << std::endl;
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
			std::cout << "������ �������� �����." << std::endl;
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
    std::cout << "������� �������� �����, �� �������� ����� ��������� ������:" << std::endl;
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
    std::cout << "�� ���������" << std::endl;
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

        Node<T> *head; /// ��������� �� ������ ������
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

std::ifstream fin(namefile,std::ios::binary); //������� ��� ������ ��� ������ � �������� ������

List<T> *data = this->head1;
fin.seekg(0);
if (!fin.is_open())
{
    std::cout << "�� ���������" << std::endl;
    //exit(0);
}
else
{
    std::cout << "������ �������" << std::endl;

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
        std::cout<<"������ �������� �����!"<<std::endl;
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
           std::cout << "���� �������" << std::endl;
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
       // std::cout << "������� ��� �����, � ������� ��������� ������ � ��� ����������" << std::endl;
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
       // std::cout << "������� ��� �����, � ������� ��������� ������ � ��� ����������" << std::endl;
        //std::cin >> Name1;
        //s1 = Name1;
        std::ifstream f;
        T kst;

        f.open(namefile, std::ios::binary);
        //f.read(namefile,std::ios::binary);
        if (!f.is_open()) {
            std::cout << "������ �������� �����. ��������� �������!" << std::endl;
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
   /*     /////// �������� �� ������� !
template <typename T>  /// ��� ����, ��� ����������
int List<T>::LoadList (List<T>& lst,string FileName) {  //////// �������� �� ������� !
       /// void LoadList(MyList &Planet,string FileName)
{
    ifstream fin; ///������ �����
    const char *F; ///��� �����
    TypesOfWolves *p; ///��������� �� ������� �����
    F = FileName.c_str();
    string s1,s2,s3;

    fin.open(F);

    if(fin.is_open())
    {
    while(!fin.eof())  ///���� ���� �� ����
    {
        fin.sync();     ///������� ������
        getline(fin,s1);

        if (s1=="����")     ///
        {
            fin.sync();
            getline(fin,s1);

            if(s1=="�������")
            {
                fin.sync();
                getline(fin,s1);
                if (s1=="������")
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
            if(s1=="�������")
            {
                fin.sync();
                getline(fin,s1);
                if (s1=="�������")
                {
                    fin.sync();
                    getline(fin,s1);

                    fin.sync();
                    getline(fin,s2);
                    p = new Jungle(s1,atoi(s2.c_str()));
                    Planet.push_back(p);
                }

            }
        } ///����
        else

        if (s1=="����")     ///
        {
            fin.sync();
            getline(fin,s1);

            if(s1=="��������")
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

            if(s1=="�������")
            {

                    fin.sync();
                    getline(fin,s1);

                    fin.sync();
                    getline(fin,s2);

                    fin.sync();
                    getline(fin,s3);

                        if(s3=="���������")
                        {
                            p = new FreshWater(true,s2,atoi(s1.c_str()));
                            Planet.push_back(p);
                        }

                    else

                        if(s3=="�� ���������")
                        {
                            p = new FreshWater(false,s2,atoi(s1.c_str()));
                            Planet.push_back(p);
                        }

                }

            }///����



        } ///while

        cout << "���������" << endl;

     }


    else
        cout <<"�� ������� ������� ����" << endl;

    fin.close();


}
        }*/












            /*size_t offset = 0;
            std::ifstream f(namefile, std::ios::binary | std::ios::app);
            f.seekg(offset);
            f.read(reinterpret_cast<char*>(&g), sizeof(T));
            f.seekg(offset);



             char text[100];//������ ��������
             f.getline(text,sizeof(text));

                 std::ofstream out(namefile);//�������� �����


char *temp;
f >> temp;
////out << temp;

  ///  f.close();
 	///out.close();


                             // ifstream input("art2.txt");//��������� ������� �����
                        //    input.getline(text,sizeof(text));//��������� ������
                      //ofstream out("text2.txt");//�������� �����
                        //out<<text;//������� ������ ��������, ������ �� text.txt � text2.txt























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
