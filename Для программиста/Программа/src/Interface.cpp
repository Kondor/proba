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
        std::cout << "|                 Меню                 |" << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        std::cout << " Выберите действие: " << std::endl;
        std::cout << " 0. Выход" << std::endl;
        std::cout << " 1. Информация о программе " << std::endl;
        std::cout << " 2. Отчистить экран " << std::endl;
        std::cout << " 3. Показать список" << std::endl;
        std::cout << " 4. Добавить элемент в список " << std::endl;
        std::cout << " 5. Сохранить список в файл " << std::endl;
        std::cout << " 6. Загрузка списка из файла " << std::endl;
        std::cout << " 7. Поиск элемента по номеру " << std::endl;
        std::cout << " 8. Удаление элемента из списка " << std::endl;
        int counter0;


        std::cout << std::endl;
        std::cout << "Введите № пункта: ";
        std::cin >> counter0;               // вводим значение

        ///const char* Namefile = "art2.txt";
        //const char* Namefile = "art3.pr";
        while (counter0 != 0)
        {

            switch (counter0)
            {
                    case 0:                     /// CASE 0

                    break;                      // Выходит

                    case 1:                     /// CASE 1
                    system("cls");
                    std::cout << std::endl;
                    std::cout << " Курсовая работа по Основам Программирования               " << std::endl;
                    std::cout << " Выполнил: Ульянин Артём Альбертович. Группа - ИСТбд - 11  " << std::endl;
                    std::cout << " Тема: Связный список семейства волчьих.                   " << std::endl;
                    std::cout << "-----------------------------------------------------------" << std::endl << std::endl;
                    break;

                    case 2:     /// CASE 2

                        system("cls");
                        break;

                    case 3:     /// CASE 3
                        {

                int counter5;
                        system("cls");
                        std::cout<<"0. Вернуться в основное меню "<<std::endl;
                        std::cout<<"1. Вывести содержимое списка "<<std::endl;

                    std::cout << std::endl;
                    std::cout << "Введите № пункта: ";
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
                                std::cout << "Список пуст!\n" << std::endl;
                                break;
                            }


                           if (p.listSize != 0)
                           {

                             //  if (type == 1)
                               std::cout<<std::endl;

                               std::cout << "Название класса: Волки" << std::endl;
                               std::cout<<std::endl;

                                p.printAll();

                           }

                            if (m.listSize != 0)
                           {
                               std::cout<<std::endl;

                               std::cout << "Название класса: Динго" << std::endl;
                               std::cout<<std::endl;

                               m.printAll();
                           }

                            if (c.listSize != 0)
                           {
                               std::cout<<std::endl;

                               std::cout << "Название класса: Служебные собаки" << std::endl;
                               std::cout<<std::endl;

                               c.printAll();
                           }

                            if (s.listSize != 0)
                           {
                               std::cout<<std::endl;

                               std::cout << "Название класса: Охотничьи собаки" << std::endl;
                               std::cout<<std::endl;

                               s.printAll();
                           }

                           ///std::cout << std::endl;
                           ///std::cout << "-----------------------------------------------------------" << std::endl;
                           std::cout <<"Список выведен на экран !\n" << std::endl;

                        break;
                        }






                        default:{ std::cout<<"Ошибка, введено неверное значение, повторите попытку!"<<std::endl; break;
                        }
                }
                ///std::cout << "Выбери 0(Написано для проверки) " << std::endl;
                //std::cin>>counter1;
                break;
                }
break;
}



                        /// Показать список
                        break;

                    case 4:{

                int counter1;
                        system("cls");
                        std::cout<<"0. Выход "<<std::endl;
                        std::cout<<"1. Добавить класс Волки в список "<<std::endl;
                        std::cout<<"2. Добавить класс Динго в список "<<std::endl;
                        std::cout<<"3. Добавить класс Служебные собаки в список "<<std::endl;
                        std::cout<<"4. Добавить класс Охотничьи собаки в список "<<std::endl;

                    std::cout << std::endl;
                    std::cout << "Введите № пункта: ";
                    int type;    /// ТИП КЛАССОВ
                    bool mistake = true;
                    //std::cin >> counter1;
                    std::cin >> type;   /// ВВОДИМ 1 ИЗ 4 ТИПОВ
                    system("cls");

                        if (type == 0)
                        {
                            mistake = false;
                        }

                if (type == 1)
            {
                std::cout << "Выбран тип класса: Волки" << std::endl;
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
                std::cout << "Выбран тип класса: Динго" << std::endl;
                Dingo* ml = new Dingo;
                                    ml->Characters();
                                    m.Add(ml);
                                    system("cls");
                mistake = false;

            }

            if (type == 3)
            {
                std::cout << "Выбран тип класса: Служебные собаки" << std::endl;
                Service* cl = new Service;
                                    cl->Characters();
                                    c.Add(cl);
                                    system("cls");
                mistake = false;
            }

            if (type == 4)
            {
             std::cout << "Выбран тип класса: Охотничьи собаки" << std::endl;
             Hunting* sl = new Hunting;
                                    sl->Characters();
                                    s.Add(sl);
                                    system("cls");
                mistake = false;
            }
            if (mistake)
            {

                ///std::cerr << "Введена некорректная величина!" << std::endl;
                std::cout<<"Ошибка, введено неверное значение, повторите попытку !" << std::endl;
                break;
            }









                      /*                ЭТО РАБОТАЕТ ТОЖЕ!!!!!

                        case 0:{
                            break;
                        }

                        case 1:{

                            //Wolves* pl = new Wolves("ня",10,20.5,30.5,100,500,false);
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
                            //Wolves* pl = new Wolves("ня",10,20.5,30.5,100,500,false);
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
                            //Wolves* pl = new Wolves("ня",10,20.5,30.5,100,500,false);
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
                            //Wolves* pl = new Wolves("ня",10,20.5,30.5,100,500,false);
                            //pl->PrintInfo();
                             Hunting* sl = new Hunting;
                                    sl->Characters();
                                    s.pushBack1(sl);
                                    //s.SaveList(s,Namefile);
                                    system("cls");
                                    //p.clear();
                        break;
                        }

                        default:{ std::cout<<"Ошибка, введено неверное значение, повторите попытку!"<<std::endl; break;
                        } */
                ///}
                std::cout << "Элемент класса добавлен в список !" << std::endl;

                ///break;
               /// }
break;
}

                    case 5:{

                int counter2;
                        system("cls");
                        std::cout<<"0. Выход "<<std::endl;
                        std::cout<<"1. Сохранить список класса Волки в файл"<<std::endl;
                        std::cout<<"2. Сохранить список класса Динго в файл"<<std::endl;
                        std::cout<<"3. Сохранить список класса Служебные собаки в файл "<<std::endl;
                        std::cout<<"4. Сохранить список класса Охотничьи собаки в файл "<<std::endl;
                    std::cout << std::endl;
                    std::cout << "Введите № пункта: ";
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
                                std::cout << "Список пуст!\n" << std::endl;
                                }
                                else
                                {

                               std::cout << "Сохраняем список класса Волки" << std::endl;

                               p.Output();




                                std::cout << "\nСохрание выполнено !" << std::endl;
                                }
                                    //p.clear();
                        break;
                        }

                        case 2:{
                            if (m.listSize == 0)
                                {
                                std::cout << "Список пуст !" << std::endl;
                                }
                                else
                                {


                               m.Output();









                                std::cout << "\nCохрание выполнено !" << std::endl;
                                }
                                    //p.clear();
                        break;
                        }

                        case 3:{
                            if (c.listSize == 0)
                                {
                                std::cout << "Список пуст !" << std::endl;
                                }
                                else
                                {



                                c.Output();
                                std::cout << "\nCохрание выполнено!" << std::endl;
                                }
                                    //p.clear();
                        break;
                        }
                        case 4:{
                            if (s.listSize == 0)
                                {
                                std::cout << "Список пуст !" << std::endl;
                                }
                                else
                                {


                                s.Output();
                                std::cout << "\nCохрание выполнено!" << std::endl;
                                }
                                    //p.clear();
                        break;
                        }




                        default:{ std::cout<<"Ошибка, введено неверное значение, повторите попытку!"<<std::endl; break;
                        }
                }
                ///std::cout << "Выбери 0(написано для проверки)\n" << std::endl;
                //std::cin>>counter1;
                break;
                }
break;
}


                    case 6:{

                int counter2;
                        system("cls");
                        std::cout<<"0. Выход "<<std::endl;
                        std::cout<<"1. Загрузить список классов из файла "<<std::endl;

                    std::cout << std::endl;
                    std::cout << "Введите № пункта: ";
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
                        std::cout<<"0. Выход "<<std::endl;
                        std::cout<<"1. Загрузить тип класса Волки из файла"<<std::endl;
                        std::cout<<"2. Загрузить тип класса Динго из файла"<<std::endl;
                        std::cout<<"3. Загрузить тип класса Служебные собаки из файла "<<std::endl;
                        std::cout<<"4. Загрузить тип класса Охотничьи собаки из файла "<<std::endl;

                       bool mistake = true;
                    int type;
                    std::cout << "Введите № пункта: ";
                    std::cin >> type;   /// ВВОДИМ 1 ИЗ 4 ТИПОВ
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
                            std::cout << "Загрузка списка выполнена!" << std::endl;
                            std::cout << std::endl;

                            mistake = false;
                        }

                        if (type == 2)
                        {
                            std::ifstream fin1("dingo.txt");
                            m.download(fin1);
                            std::cout << std::endl;
                            std::cout << "Загрузка списка выполнена!" << std::endl;
                            std::cout << std::endl;
                            mistake = false;
                        }

                        if (type == 3)
                        {

                            std::ifstream fin2("service.txt");
                            c.download(fin2);
                            std::cout << std::endl;
                            std::cout << "Загрузка списка выполнена!" << std::endl;
                            std::cout << std::endl;
                            mistake = false;
                        }

                        if (type == 4)
                        {
                            std::ifstream fin3("hunting.txt");
                            s.download(fin3);
                            std::cout << std::endl;
                            std::cout << "Загрузка списка выполнена!" << std::endl;
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





std::cout << "Загрузка списка выполнена!" << std::endl;
std::cout << std::endl;
*/

                        break;
                        }




                        default:{ std::cout<<"Ошибка, введено неверное значение, повторите попытку!"<<std::endl; break;
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
                        std::cout<<"0. Выход "<<std::endl;
                        std::cout<<"1. Найти номер элемента класса Волки " << std::endl;
                        std::cout<<"2. Найти номер элемента класса Динго " << std::endl;
                        std::cout<<"3. Найти номер элемента класса Служебные собаки "<<std::endl;
                        std::cout<<"4. Найти номер элемента класса Охотничьи собаки "<<std::endl;
                    std::cout << std::endl;
                    std::cout << "Введите № пункта: ";
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
                                std::cout << "Данного типа класса нет в списке !\n" << std::endl;
                                break;
                            }
                           int ind;
                           std::cout << "Выбран класс Волки" << std::endl;
                           std::cout << "Введите номер элемента: ";
                           std::cin >> ind;


                           p.findById(ind).PrintInfo();
                           std::cout << "\nЭлемент успешно просмотрен !\n" << std::endl;


                        break;
                        }


                        case 2:{
                             if(m.listSize == 0)
                            {
                                std::cout << "Данного типа класса нет в списке !\n" << std::endl;
                                break;
                            }
                           int ind;
                           std::cout << "Выбран класс Динго" << std::endl;
                           std::cout << "Введите номер элемента: ";
                           std::cin >> ind;

                           m.findById(ind).PrintInfo();
                           std::cout << "\nЭлемент успешно просмотрен !\n" << std::endl;

                        break;
                        }


                        case 3:{
                             if(c.listSize == 0)
                            {
                                std::cout << "Данного типа класса нет в списке !\n" << std::endl;
                                break;
                            }
                           int ind;
                           std::cout << "Выбран класс Служебные собаки" << std::endl;
                           std::cout << "Введите номер элемента: ";
                           std::cin >> ind;

                           c.findById(ind).PrintInfo();

                           std::cout << "\nЭлемент успешно просмотрен !\n" << std::endl;


                        break;
                        }


                        case 4:{
                             if(s.listSize == 0)
                            {
                                std::cout << "Данного типа класса нет в списке !\n" << std::endl;
                                break;
                            }
                           int ind;
                           std::cout << "Выбран класс Охотничьи собаки" << std::endl;
                           std::cout << "Введите номер элемента: ";
                           std::cin >> ind;

                           s.findById(ind).PrintInfo();

                           std::cout << "\nЭлемент успешно просмотрен !\n" << std::endl;


                        break;
                        }




                        default:{ std::cout<<"Ошибка, введено неверное значение, повторите попытку!"<<std::endl; break;
                        }

                }
                ///std::cout << "Элемент успешно просмотрен !" << std::endl;

                break;
                }
break;
}

            case 8:{

                int counter4;
                        system("cls");
                        std::cout<<"0. Выход "<<std::endl;
                        std::cout<<"1. Удалить элемент из списка класса Волки "<<std::endl;
                        std::cout<<"2. Удалить элемент из списка класса Динго "<<std::endl;
                        std::cout<<"3. Удалить элемент из списка класса Служебные собаки "<<std::endl;
                        std::cout<<"4. Удалить элемент из списка класса Охотничьи собаки "<<std::endl;
                    std::cout << std::endl;
                    std::cout << "Введите № пункта: ";
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
                                std::cout << "Список пуст !" << std::endl;
                                }
                                else
                                {
                           std::cout << "Введите номер элемента: " ;
                           std::cin >> ind;

                           p.deleteElement(ind);
                           std::cout <<"Элемент удалён !" << std::endl;}
                                    //p.clear();
                        break;
                        }

                        case 2:{
                           int ind;
                           if (m.listSize == 0)
                                {
                                std::cout << "Список пуст !" << std::endl;
                                }
                                else
                                {
                            std::cout << "Введите номер элемента: " ;
                           std::cin >> ind;

                           m.deleteElement(ind);
                           std::cout <<"Элемент удалён !" << std::endl;}
                                    //p.clear();
                        break;
                        }

                        case 3:{
                           int ind;

                           if (c.listSize == 0)
                                {
                                std::cout << "Список пуст !" << std::endl;
                                }
                                else
                                {
                           std::cout << "Введите номер элемента: " ;
                           std::cin >> ind;
                           c.deleteElement(ind);
                           std::cout <<"Элемент удалён !" << std::endl;}

                        break;
                        }

                        case 4:{
                           int ind;

                           if (s.listSize == 0)
                                {
                                std::cout << "Список пуст !" << std::endl;
                                }
                                else
                                {

                           std::cout << "Введите номер элемента: " ;
                           std::cin >> ind;
                           s.deleteElement(ind);
                           std::cout <<"Элемент удалён !" << std::endl;
                                }
                                    //p.clear();
                        break;
                        }




                        default:{ std::cout<<"\nОшибка, введено неверное значение, повторите попытку !\n"<<std::endl; break;
                        }
                }
                ///std::cout << "\nУдаление прошло успешно ! " << std::endl;
                //std::cin>>counter1;
                break;
                }
break;
}


                    default:       /// ПРИНАДЛЕЖИТ К 1 СВИТЧУ НЕ ТРОГАТЬ
                         system("cls");
                        std::cout << "\nОшибка, введено неверное значение, повторите попытку !\n"<< std::endl;
                        break;

            }


            std::cout << "----------------------------------------" << std::endl;
            std::cout << "|                 Меню                 |" << std::endl;
            std::cout << "----------------------------------------" << std::endl;
            std::cout << " Выберите действие: " << std::endl;
            std::cout << " 0. Выход" << std::endl;
            std::cout << " 1. Информация о программе " << std::endl;
            std::cout << " 2. Отчистить экран " << std::endl;
            std::cout << " 3. Показать список" << std::endl;
            std::cout << " 4. Добавить элемень в список " << std::endl;
            std::cout << " 5. Сохранить список в файл " << std::endl;
            std::cout << " 6. Загрузка списка из файла " << std::endl;
            std::cout << " 7. Поиск элемента по номеру " << std::endl;
            std::cout << " 8. Удаление элемента из списка " << std::endl;

            std::cout << std::endl;
            std::cout << "Введите № пункта: ";
            std::cin >> counter0;                                           // вводим значение

        }   /// конец вайла
}











 /* Концовка для switch */


 //system("pause");
 //break;




































