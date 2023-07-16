#include <iostream>
using namespace std;
int main()
{
    // unsigned char a=256; /*溢出，超出了unsigned char的范围，要避免数据赋值时出现溢出*/
    //-1的无符号数是4294967295
    cout << "1" << endl;
    unsigned u = 10, u2 = 42;
    cout << u2 - u << endl;
    cout << u - u2 << endl;//42947264
    int i = 10;
    cout << i - u << endl;
    cout << u - i << endl;
}