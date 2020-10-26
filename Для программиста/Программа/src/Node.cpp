#include "Node.h"
#include "List.h"
#include "Wild.h"
#include "TypesOfWolves.h"

#include <ostream>
#include <fstream>
#include <iostream>

#ifndef NODE_H
#define NODE_H

template<typename T>
class Node /// класс одного элемента списка
{
    public:







                Node *next; /// указатель на следующий элемент
                T *data;    /// поле данных

                Node(T *data, Node *next)
                {
                    this->data = data;
                    this->next = next;
                }
};

#endif // NODE_H
