#include <iostream>
using namespace std;
struct Foo{
};
/*int main()
{
    // 在变量第一次要使用的地方，定义变量

    int i = 42;
    int *p = nullptr;
    p = &i;
    *p = 30;
    // double d = 3.5, &r2 = d;
    //int *p = nullptr;
    // *p = i; p是空指针，解引用空指针会造成错误
    int a = sizeof(int *);
    cout << a << endl;
    int pa[3] = {1, 2, 3};
    cout << '\n'
         << *(pa + 1) << endl;
    // 引用不是对象，不占用内存，它知识一个已经存在对象的名字
    // 引用后，两个声明占用一个内存，对A的修改等同于对B的修改
    double pi = 3.14;
    const double *ptr = &pi;   // 常量指针，地址可以修改，可以指向别的地址，但是值不能之间修改
    double *const ptr1 = &pi; // 指针常量，地址不能修改，但是值可以修改
                                //const指针必须初始化
    double pi1 = 0.9;
    ptr = &pi1;
    *ptr1 = 4.0;
    cout << pi << " " << *ptr1 << " " << *ptr << endl;
    int i1 = 42;
    int &r1 = i1;
    const int &r2 = i1;
    r1 = 0;
    cout << i1 << " " << r1 << r2 << endl;
}*/
int main(){
    /*int i = 0;
    int *const p1 = &i;
    const int c1 = 42;
    const int *p2 = &c1;
    const int *const p3 = p2;//必须具有相同的底层const才能复制
    cout << *p3 << endl;*/
    return 0;
}