#include <iostream>
using namespace std;
int main()
{
    // 在变量第一次要使用的地方，定义变量

    int i = 42;
    int *p = nullptr;
    p = &i;
    *p = 30;
    // double d = 3.5, &r2 = d;
    /*int *p = nullptr;
     *p = i; p是空指针，解引用空指针会造成错误
    */
    int a = sizeof(int *);
    cout << a << endl;
    // 引用不是对象，不占用内存，它知识一个已经存在对象的名字
    // 引用后，两个声明占用一个内存，对A的修改等同于对B的修改
}