


#pragma once
#include "List.h"
#include <iostream>
#include <fstream>
#include <ostream>
#include "TypesOfWolves.h"
#include <stdlib.h>
#include <cassert>


using namespace std;
template<typename T>
List<T>::List()
{
	Size = 0;
	head = NULL;
}

template<typename T>
List<T>::~List()
{
	clear1();
}

/* Добавление в конец списка */

template<typename T>
void List<T>::push_back1(T data)
{
	if (head == NULL)
	{
		head = new Node<T>(data);
	}
	else
	{
		Node<T> *current = this->head;

		while (current->pNext != NULL)
		{
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);

	}

	Size++;
}




/* Удаление первого элемента списка */

template<typename T>
void List<T>::pop_front1()
{
	Node<T> *temp = head;

	head = head->pNext;

	delete temp;

	Size--;

}

/* Очистка первого элемента */

template<typename T>
void List<T>::clear1()
{
	while (Size)
	{
		pop_front1();
	}
}

/* Возвращает количество элементов */

template <typename T>
int List<T>::Sizee()
{
    return Size;
}

/* Вывод */

template <typename T>
void List<T>::P1rint()
{
    Node<T> *head = this->head;
    if (head != NULL)
    {
        while (head!= NULL)
        {
            head = head->data;
            head = head->pNext;
        }

    }

    if (this->Size == 0)
    {
        std::cout<<"Список пуст!"<<std::endl;
    }
}





template<typename T>
void List<T>::removeAt(int index)
{
	if (index == 0)
	{
		pop_front1();
	}
	else
	{
		Node<T> *previous = this->head;
		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}


		Node<T> *toDelete = previous->pNext;

		previous->pNext = toDelete->pNext;

		delete toDelete;

		Size--;
	}

}




template <typename T>
int List <T>::Load_List(List<T> &object,const char* namefile)
{
    std::ifstream f;
    T g;
    f.open(namefile,std::ifstream::binary);
    if(!f.is_open())
    {
        std::cout<<"Ошибка открытия файла!"<<std::endl;
        return 0;
    }
    else
    while(f.read((char*)&g,sizeof(T)))
    {
        object.push_back1(g);

    }
    f.close();
    return 1;
}





template <typename T>
void List<T>::Save_List(List<T> object,const char* namefile)
{
    Node<T>* tmp = head;
    std::ofstream f;
    f.open(namefile,std::ios::out|std::ios::trunc);
    if (tmp != NULL)
    {
        while (tmp!= NULL)
        {
           f.write((char*)&tmp->data,sizeof(T));
           tmp = tmp->pNext;
        }
    f.close();
    }
}


template <typename T>
void List<T>::Poisk (int pos)
{
// Счетчик
int i = 1;
Node<T> *tmp = head;
if(pos<=Sizee())
{
     while(i < pos)
    {
    tmp = tmp->pNext;
    i++;
    }
    std:: cout<< tmp->data;
}
else
{
   std::cout<<"Такого объекта не существует"<<std::endl;
}
}






