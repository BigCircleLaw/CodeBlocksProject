#include <iostream>
using namespace std;
/*ģ���� ���ֺ����������ʵ��*/

template <typename T>
class AA
{
public:
    AA(T a, T b);
    void printAA();
    AA operator+(AA &tmp);
    //��Ԫ��������<<
//    friend ostream& operator<< <T>(ostream& out, AA<T>& tmp);
private:
    T a;
    T b;
};

template <typename T>
AA<T>::AA(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <typename T>
void AA<T>::printAA()
{
    cout << "a:" << a << " b:" << b << endl;
}
//����ʵ�ֺ���ʱ����T�ĵط��� ��������ֵ������:: ���βα���
template <typename T>
AA<T> AA<T>::operator+(AA<T> &tmp)
{
    AA tt(this->a + tmp.a, this->b + tmp.b);
    return tt;
}

//��Ԫ��������<<
//template <typename T>
//ostream& operator<< (ostream& out, AA<T>& tmp)
//{
//    out << "a=" << tmp.a << " b=" << tmp.b << endl;
//    return out;
//}
int main()
{
    AA<int> tmp(5, 6);
    AA<int> tmp1(5, 7);
    AA<int> tmp2 = tmp1 + tmp;
    tmp2.printAA();
//    cout << tmp2 << endl;
    return 0;
}
