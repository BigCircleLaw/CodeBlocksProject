#include <iostream>
using namespace std;
/*模板类 各种函数在类外的实现*/

template <typename T>
class AA
{
public:
    AA(T a, T b);
    void printAA();
    AA operator+(AA &tmp);
    //友元函数重载<<
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
//类外实现函数时，加T的地方有 函数返回值，类名:: ，形参变量
template <typename T>
AA<T> AA<T>::operator+(AA<T> &tmp)
{
    AA tt(this->a + tmp.a, this->b + tmp.b);
    return tt;
}

//友元函数重载<<
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
