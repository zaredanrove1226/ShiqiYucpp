#include <iostream>
using namespace std;

int main()
{
    char c1 = 'C';
    char c2 = 80;
    char c3 = 0x50;
    char16_t c4 = u'于';
    char32_t c5 = U'于';
    cout << c1 << ":" << c2 << ":"<< c3 << endl;
    cout << +c1 << ":" << +c2 << ":" << +c3 << endl;
    cout << c4 << endl;
    cout << c5 << endl;
    
    return 0;
}
// 中文需要用 ​​char16_t​​（2字节，用于 UTF-16 编码）或 ​​char32_t​​（4字节，用于 UTF-32 编码）来存储
// 如 char32_t c = U'于'。但它们的本质依然是​​存储字符对应的整型编号（码点）