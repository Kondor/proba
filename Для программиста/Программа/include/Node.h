#ifndef NODE_H
#define NODE_H

template<typename T>
class Node /// класс одного элемента списка
{
    public:
                Node *next; /// указатель на следующий элемент
                T *data;    /// поле данных
                Node *current;




                Node(T *data, Node *next)
                {
                    this->data = data;
                    this->next = next;
                }
};

#endif // NODE_H
