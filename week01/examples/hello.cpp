//C++ example in C++11
#include <iostream>
#include <vector>
#include <string>

using namespace std;
// 将标准库（Standard Library）中的所有标识符（如 cout、vector、string）
// 从 std命名空间暴露到当前作用域，​​无需再写 std::前缀

// using namespace std;的作用域从声明处开始，直到当前代码块结束（如函数、文件）

int main()
{
    vector<string> msg {"Hello", "C++", "World", "!"};
    
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
