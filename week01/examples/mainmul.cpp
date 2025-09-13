#include <iostream>

using namespace std;

int mul(int a, int b)
{
    return a * b;
}
int main()
{
    int a, b;
    int result;

    cout << "Pick two integers:";
    cin >> a;
    cin >> b;

    result = mul(a, b);

    cout << "The result is " << result << endl;
    return 0;
}

// ​cin​​
// 是 C++ 标准库中的​​输入流对象​​（定义在<iostream>头文件中），代表“标准输入”（Standard Input），通常指向键盘输入
// ​​>>​​
// 称为​​提取运算符​​（Extraction Operator），作用是从输入流中提取数据，并将其赋值给右侧的变量
// ​​a​​
// 是程序中的变量（需提前声明），用于存储输入的数据。变量类型可以是 int、double、char、string等
// ⚙️ ​​执行流程​​
// ​​等待用户输入​​
// 程序执行到 cin >> a时，会暂停并等待用户在控制台输入数据（需按回车键确认）
// ​​读取并转换数据​​
// 根据变量 a的类型，自动将用户输入的字符串转换为对应数据类型（如整数、浮点数等）
// 示例：若 a是 int类型，输入 42会被转换为整数 42。
// ​​存储到变量​​
// 转换后的值被存入变量 a，后续代码可直接使用 a