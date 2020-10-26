#ifndef NODE_H
#define NODE_H

template<typename T>
class Node /// ����� ������ �������� ������
{
    public:
                Node *next; /// ��������� �� ��������� �������
                T *data;    /// ���� ������
                Node *current;




                Node(T *data, Node *next)
                {
                    this->data = data;
                    this->next = next;
                }
};

#endif // NODE_H
