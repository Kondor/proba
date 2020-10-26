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
class Node /// ����� ������ �������� ������
{
    public:







                Node *next; /// ��������� �� ��������� �������
                T *data;    /// ���� ������

                Node(T *data, Node *next)
                {
                    this->data = data;
                    this->next = next;
                }
};

#endif // NODE_H
