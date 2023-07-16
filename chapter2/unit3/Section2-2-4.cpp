#include <iostream>
using namespace std;
int main()
{
    // 在变量第一次要使用的地方，定义变量
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
        sum += i;
    std::cout << i << " " << sum << std::endl;
    // 引用不是对象，不占用内存，它知识一个已经存在对象的名字
}