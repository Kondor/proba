#include "Interface.h"


#include <iostream>
#include <windows.h>
#include <clocale>
#include <cstring>
#include "Dingo.h"
#include "Service.h"

#include <cstring>


#include <ostream>




#include <fstream>
using namespace std;

Interface::Interface()
{

}

void Interface::Menu(List<Wolves> p,List<Dingo> m,List<Service> c,List<Hunting> s)
{

    setlocale(LC_ALL,"rus");
        std::cout << "----------------------------------------" << std::endl;
        std::cout << "|                 ����                 |" << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        std::cout << " �������� ��������: " << std::endl;
        std::cout << " 0. �����" << std::endl;
        std::cout << " 1. ���������� � ��������� " << std::endl;
        std::cout << " 2. ��������� ����� " << std::endl;
        std::cout << " 3. �������� ������" << std::endl;
        std::cout << " 4. �������� ������� � ������ " << std::endl;
        std::cout << " 5. ��������� ������ � ���� " << std::endl;
        std::cout << " 6. �������� ������ �� ����� " << std::endl;
        std::cout << " 7. ����� �������� �� ������ " << std::endl;
        std::cout << " 8. �������� �������� �� ������ " << std::endl;
        int counter0;


        std::cout << std::endl;
        std::cout << "������� � ������: ";
        std::cin >> counter0;               // ������ ��������

        ///const char* Namefile = "art2.txt";
        //const char* Namefile = "art3.pr";
        while (counter0 != 0)
        {

            switch (counter0)
            {
                    case 0:                     /// CASE 0

                    break;                      // �������

                    case 1:                     /// CASE 1
                    system("cls");
                    std::cout << std::endl;
                    std::cout << " �������� ������ �� ������� ����������������               " << std::endl;
                    std::cout << " ��������: ������� ���� �����������. ������ - ����� - 11  " << std::endl;
                    std::cout << " ����: ������� ������ ��������� �������.                   " << std::endl;
                    std::cout << "-----------------------------------------------------------" << std::endl << std::endl;
                    break;

                    case 2:     /// CASE 2

                        system("cls");
                        break;

                    case 3:     /// CASE 3
                        {

                int counter5;
                        system("cls");
                        std::cout<<"0. ��������� � �������� ���� "<<std::endl;
                        std::cout<<"1. ������� ���������� ������ "<<std::endl;

                    std::cout << std::endl;
                    std::cout << "������� � ������: ";
                    std::cin >> counter5;
                    system("cls");

                while (counter5 != 0)
                {

                switch(counter5) {
                        case 0:{

                            break;
                        }

                        case 1:{
                            if (p.listSize == 0 and m.listSize == 0 and c.listSize == 0 and s.listSize == 0)
                            {
                                std::cout << "������ ����!\n" << std::endl;
                                break;
                            }


                           if (p.listSize != 0)
                           {

                             //  if (type == 1)
                               std::cout<<std::endl;

                               std::cout << "�������� ������: �����" << std::endl;
                               std::cout<<std::endl;

                                p.printAll();

                           }

                            if (m.listSize != 0)
                           {
                               std::cout<<std::endl;

                               std::cout << "�������� ������: �����" << std::endl;
                               std::cout<<std::endl;

                               m.printAll();
                           }

                            if (c.listSize != 0)
                           {
                               std::cout<<std::endl;

                               std::cout << "�������� ������: ��������� ������" << std::endl;
                               std::cout<<std::endl;

                               c.printAll();
                           }

                            if (s.listSize != 0)
                           {
                               std::cout<<std::endl;

                               std::cout << "�������� ������: ��������� ������" << std::endl;
                               std::cout<<std::endl;

                               s.printAll();
                           }

                           ///std::cout << std::endl;
                           ///std::cout << "-----------------------------------------------------------" << std::endl;
                           std::cout <<"������ ������� �� ����� !\n" << std::endl;

                        break;
                        }






                        default:{ std::cout<<"������, ������� �������� ��������, ��������� �������!"<<std::endl; break;
                        }
                }
                ///std::cout << "������ 0(�������� ��� ��������) " << std::endl;
                //std::cin>>counter1;
                break;
                }
break;
}



                        /// �������� ������
                        break;

                    case 4:{

                int counter1;
                        system("cls");
                        std::cout<<"0. ����� "<<std::endl;
                        std::cout<<"1. �������� ����� ����� � ������ "<<std::endl;
                        std::cout<<"2. �������� ����� ����� � ������ "<<std::endl;
                        std::cout<<"3. �������� ����� ��������� ������ � ������ "<<std::endl;
                        std::cout<<"4. �������� ����� ��������� ������ � ������ "<<std::endl;

                    std::cout << std::endl;
                    std::cout << "������� � ������: ";
                    int type;    /// ��� �������
                    bool mistake = true;
                    //std::cin >> counter1;
                    std::cin >> type;   /// ������ 1 �� 4 �����
                    system("cls");

                        if (type == 0)
                        {
                            mistake = false;
                        }

                if (type == 1)
            {
                std::cout << "������ ��� ������: �����" << std::endl;
                Wolves* pl = new Wolves;
                pl->Characters();
                ///p.pushBack1(pl);
                 p.Add(pl);
                                    //p.SaveList(p,Namefile);
                system("cls");
                mistake = false;
            }

            if (type == 2)
            {
                std::cout << "������ ��� ������: �����" << std::endl;
                Dingo* ml = new Dingo;
                                    ml->Characters();
                                    m.Add(ml);
                                    system("cls");
                mistake = false;

            }

            if (type == 3)
            {
                std::cout << "������ ��� ������: ��������� ������" << std::endl;
                Service* cl = new Service;
                                    cl->Characters();
                                    c.Add(cl);
                                    system("cls");
                mistake = false;
            }

            if (type == 4)
            {
             std::cout << "������ ��� ������: ��������� ������" << std::endl;
             Hunting* sl = new Hunting;
                                    sl->Characters();
                                    s.Add(sl);
                                    system("cls");
                mistake = false;
            }
            if (mistake)
            {

                ///std::cerr << "������� ������������ ��������!" << std::endl;
                std::cout<<"������, ������� �������� ��������, ��������� ������� !" << std::endl;
                break;
            }









                      /*                ��� �������� ����!!!!!

                        case 0:{
                            break;
                        }

                        case 1:{

                            //Wolves* pl = new Wolves("��",10,20.5,30.5,100,500,false);
                            //pl->PrintInfo();
                             Wolves* pl = new Wolves;
                                    pl->Characters();
                                    p.pushBack1(pl);
                                    //p.SaveList(p,Namefile);
                                    system("cls");
                                    //p.clear();
                        break;
                        }

                        case 2:{
                            //Wolves* pl = new Wolves("��",10,20.5,30.5,100,500,false);
                            //pl->PrintInfo();
                             Dingo* ml = new Dingo;
                                    ml->Characters();
                                    m.pushBack1(ml);
                                    //m.SaveList(m,Namefile);
                                    system("cls");
                                    //p.clear();
                        break;
                        }
                        case 3:{
                            //Wolves* pl = new Wolves("��",10,20.5,30.5,100,500,false);
                            //pl->PrintInfo();
                             Service* cl = new Service;
                                    cl->Characters();
                                    c.pushBack1(cl);
                                    //c.SaveList(c,Namefile);
                                    system("cls");
                                    //p.clear();
                        break;
                        }
                        case 4:{
                            //Wolves* pl = new Wolves("��",10,20.5,30.5,100,500,false);
                            //pl->PrintInfo();
                             Hunting* sl = new Hunting;
                                    sl->Characters();
                                    s.pushBack1(sl);
                                    //s.SaveList(s,Namefile);
                                    system("cls");
                                    //p.clear();
                        break;
                        }

                        default:{ std::cout<<"������, ������� �������� ��������, ��������� �������!"<<std::endl; break;
                        } */
                ///}
                std::cout << "������� ������ �������� � ������ !" << std::endl;

                ///break;
               /// }
break;
}

                    case 5:{

                int counter2;
                        system("cls");
                        std::cout<<"0. ����� "<<std::endl;
                        std::cout<<"1. ��������� ������ ������ ����� � ����"<<std::endl;
                        std::cout<<"2. ��������� ������ ������ ����� � ����"<<std::endl;
                        std::cout<<"3. ��������� ������ ������ ��������� ������ � ���� "<<std::endl;
                        std::cout<<"4. ��������� ������ ������ ��������� ������ � ���� "<<std::endl;
                    std::cout << std::endl;
                    std::cout << "������� � ������: ";
                    std::cin >> counter2;
                    system("cls");

                while (counter2 != 0)
                {

                switch(counter2) {
                        case 0:{
                            break;
                        }

                        case 1:{
                            if (p.listSize == 0)
                                {
                                std::cout << "������ ����!\n" << std::endl;
                                }
                                else
                                {

                               std::cout << "��������� ������ ������ �����" << std::endl;

                               p.Output();




                                std::cout << "\n�������� ��������� !" << std::endl;
                                }
                                    //p.clear();
                        break;
                        }

                        case 2:{
                            if (m.listSize == 0)
                                {
                                std::cout << "������ ���� !" << std::endl;
                                }
                                else
                                {


                               m.Output();









                                std::cout << "\nC������� ��������� !" << std::endl;
                                }
                                    //p.clear();
                        break;
                        }

                        case 3:{
                            if (c.listSize == 0)
                                {
                                std::cout << "������ ���� !" << std::endl;
                                }
                                else
                                {



                                c.Output();
                                std::cout << "\nC������� ���������!" << std::endl;
                                }
                                    //p.clear();
                        break;
                        }
                        case 4:{
                            if (s.listSize == 0)
                                {
                                std::cout << "������ ���� !" << std::endl;
                                }
                                else
                                {


                                s.Output();
                                std::cout << "\nC������� ���������!" << std::endl;
                                }
                                    //p.clear();
                        break;
                        }




                        default:{ std::cout<<"������, ������� �������� ��������, ��������� �������!"<<std::endl; break;
                        }
                }
                ///std::cout << "������ 0(�������� ��� ��������)\n" << std::endl;
                //std::cin>>counter1;
                break;
                }
break;
}


                    case 6:{

                int counter2;
                        system("cls");
                        std::cout<<"0. ����� "<<std::endl;
                        std::cout<<"1. ��������� ������ ������� �� ����� "<<std::endl;

                    std::cout << std::endl;
                    std::cout << "������� � ������: ";
                    std::cin >> counter2;
                    system("cls");

                while (counter2 != 0)
                {

                switch(counter2) {
                        case 0:{
                            break;
                        }

                        case 1:{

                        system("cls");
                        std::cout<<"0. ����� "<<std::endl;
                        std::cout<<"1. ��������� ��� ������ ����� �� �����"<<std::endl;
                        std::cout<<"2. ��������� ��� ������ ����� �� �����"<<std::endl;
                        std::cout<<"3. ��������� ��� ������ ��������� ������ �� ����� "<<std::endl;
                        std::cout<<"4. ��������� ��� ������ ��������� ������ �� ����� "<<std::endl;

                       bool mistake = true;
                    int type;
                    std::cout << "������� � ������: ";
                    std::cin >> type;   /// ������ 1 �� 4 �����
                    system("cls");

                        if (type == 0)
                        {
                            mistake = false;
                        }

                        if (type == 1)
                        {
                            std::ifstream fin("wolves.txt");
                            p.download(fin);

                            std::cout << std::endl;
                            std::cout << "�������� ������ ���������!" << std::endl;
                            std::cout << std::endl;

                            mistake = false;
                        }

                        if (type == 2)
                        {
                            std::ifstream fin1("dingo.txt");
                            m.download(fin1);
                            std::cout << std::endl;
                            std::cout << "�������� ������ ���������!" << std::endl;
                            std::cout << std::endl;
                            mistake = false;
                        }

                        if (type == 3)
                        {

                            std::ifstream fin2("service.txt");
                            c.download(fin2);
                            std::cout << std::endl;
                            std::cout << "�������� ������ ���������!" << std::endl;
                            std::cout << std::endl;
                            mistake = false;
                        }

                        if (type == 4)
                        {
                            std::ifstream fin3("hunting.txt");
                            s.download(fin3);
                            std::cout << std::endl;
                            std::cout << "�������� ������ ���������!" << std::endl;
                            std::cout << std::endl;
                            mistake = false;
                        }

/*std::ifstream fin("wolves.txt");
p.download(fin);*/



/*std::ifstream fin1("dingo.txt");
m.download(fin1);*/



/*std::ifstream fin2("service.txt");
c.download(fin2);*/



/*std::ifstream fin3("hunting.txt");
s.download(fin3);*/

/*std::cout << std::endl;





std::cout << "�������� ������ ���������!" << std::endl;
std::cout << std::endl;
*/

                        break;
                        }




                        default:{ std::cout<<"������, ������� �������� ��������, ��������� �������!"<<std::endl; break;
                        }
                }

                //std::cin>>counter1;
                break;
                }
break;
}

                    case 7:{

                int counter3;
                        system("cls");
                        std::cout<<"0. ����� "<<std::endl;
                        std::cout<<"1. ����� ����� �������� ������ ����� " << std::endl;
                        std::cout<<"2. ����� ����� �������� ������ ����� " << std::endl;
                        std::cout<<"3. ����� ����� �������� ������ ��������� ������ "<<std::endl;
                        std::cout<<"4. ����� ����� �������� ������ ��������� ������ "<<std::endl;
                    std::cout << std::endl;
                    std::cout << "������� � ������: ";
                    std::cin >> counter3;
                    system("cls");

                while (counter3 != 0)
                {

                switch(counter3) {
                        case 0:{
                            break;
                        }

                        case 1:{
                            if(p.listSize == 0)
                            {
                                std::cout << "������� ���� ������ ��� � ������ !\n" << std::endl;
                                break;
                            }
                           int ind;
                           std::cout << "������ ����� �����" << std::endl;
                           std::cout << "������� ����� ��������: ";
                           std::cin >> ind;


                           p.findById(ind).PrintInfo();
                           std::cout << "\n������� ������� ���������� !\n" << std::endl;


                        break;
                        }


                        case 2:{
                             if(m.listSize == 0)
                            {
                                std::cout << "������� ���� ������ ��� � ������ !\n" << std::endl;
                                break;
                            }
                           int ind;
                           std::cout << "������ ����� �����" << std::endl;
                           std::cout << "������� ����� ��������: ";
                           std::cin >> ind;

                           m.findById(ind).PrintInfo();
                           std::cout << "\n������� ������� ���������� !\n" << std::endl;

                        break;
                        }


                        case 3:{
                             if(c.listSize == 0)
                            {
                                std::cout << "������� ���� ������ ��� � ������ !\n" << std::endl;
                                break;
                            }
                           int ind;
                           std::cout << "������ ����� ��������� ������" << std::endl;
                           std::cout << "������� ����� ��������: ";
                           std::cin >> ind;

                           c.findById(ind).PrintInfo();

                           std::cout << "\n������� ������� ���������� !\n" << std::endl;


                        break;
                        }


                        case 4:{
                             if(s.listSize == 0)
                            {
                                std::cout << "������� ���� ������ ��� � ������ !\n" << std::endl;
                                break;
                            }
                           int ind;
                           std::cout << "������ ����� ��������� ������" << std::endl;
                           std::cout << "������� ����� ��������: ";
                           std::cin >> ind;

                           s.findById(ind).PrintInfo();

                           std::cout << "\n������� ������� ���������� !\n" << std::endl;


                        break;
                        }




                        default:{ std::cout<<"������, ������� �������� ��������, ��������� �������!"<<std::endl; break;
                        }

                }
                ///std::cout << "������� ������� ���������� !" << std::endl;

                break;
                }
break;
}

            case 8:{

                int counter4;
                        system("cls");
                        std::cout<<"0. ����� "<<std::endl;
                        std::cout<<"1. ������� ������� �� ������ ������ ����� "<<std::endl;
                        std::cout<<"2. ������� ������� �� ������ ������ ����� "<<std::endl;
                        std::cout<<"3. ������� ������� �� ������ ������ ��������� ������ "<<std::endl;
                        std::cout<<"4. ������� ������� �� ������ ������ ��������� ������ "<<std::endl;
                    std::cout << std::endl;
                    std::cout << "������� � ������: ";
                    std::cin >> counter4;
                    system("cls");

                while (counter4 != 0)
                {

                switch(counter4) {
                        case 0:{
                            break;
                        }

                        case 1:{
                           int ind;
                           if (p.listSize == 0)
                                {
                                std::cout << "������ ���� !" << std::endl;
                                }
                                else
                                {
                           std::cout << "������� ����� ��������: " ;
                           std::cin >> ind;

                           p.deleteElement(ind);
                           std::cout <<"������� ����� !" << std::endl;}
                                    //p.clear();
                        break;
                        }

                        case 2:{
                           int ind;
                           if (m.listSize == 0)
                                {
                                std::cout << "������ ���� !" << std::endl;
                                }
                                else
                                {
                            std::cout << "������� ����� ��������: " ;
                           std::cin >> ind;

                           m.deleteElement(ind);
                           std::cout <<"������� ����� !" << std::endl;}
                                    //p.clear();
                        break;
                        }

                        case 3:{
                           int ind;

                           if (c.listSize == 0)
                                {
                                std::cout << "������ ���� !" << std::endl;
                                }
                                else
                                {
                           std::cout << "������� ����� ��������: " ;
                           std::cin >> ind;
                           c.deleteElement(ind);
                           std::cout <<"������� ����� !" << std::endl;}

                        break;
                        }

                        case 4:{
                           int ind;

                           if (s.listSize == 0)
                                {
                                std::cout << "������ ���� !" << std::endl;
                                }
                                else
                                {

                           std::cout << "������� ����� ��������: " ;
                           std::cin >> ind;
                           s.deleteElement(ind);
                           std::cout <<"������� ����� !" << std::endl;
                                }
                                    //p.clear();
                        break;
                        }




                        default:{ std::cout<<"\n������, ������� �������� ��������, ��������� ������� !\n"<<std::endl; break;
                        }
                }
                ///std::cout << "\n�������� ������ ������� ! " << std::endl;
                //std::cin>>counter1;
                break;
                }
break;
}


                    default:       /// ����������� � 1 ������ �� �������
                         system("cls");
                        std::cout << "\n������, ������� �������� ��������, ��������� ������� !\n"<< std::endl;
                        break;

            }


            std::cout << "----------------------------------------" << std::endl;
            std::cout << "|                 ����                 |" << std::endl;
            std::cout << "----------------------------------------" << std::endl;
            std::cout << " �������� ��������: " << std::endl;
            std::cout << " 0. �����" << std::endl;
            std::cout << " 1. ���������� � ��������� " << std::endl;
            std::cout << " 2. ��������� ����� " << std::endl;
            std::cout << " 3. �������� ������" << std::endl;
            std::cout << " 4. �������� ������� � ������ " << std::endl;
            std::cout << " 5. ��������� ������ � ���� " << std::endl;
            std::cout << " 6. �������� ������ �� ����� " << std::endl;
            std::cout << " 7. ����� �������� �� ������ " << std::endl;
            std::cout << " 8. �������� �������� �� ������ " << std::endl;

            std::cout << std::endl;
            std::cout << "������� � ������: ";
            std::cin >> counter0;                                           // ������ ��������

        }   /// ����� �����
}











 /* �������� ��� switch */


 //system("pause");
 //break;




































