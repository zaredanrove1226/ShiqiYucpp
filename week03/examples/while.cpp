#include <iostream>
using namespace std;
int main()
{
    int num = 10;
    while(num > 0)
    {
        cout << "num = " << num << endl;
        num--;
    }

    // int num = 10;
    // do
    // {
    //     cout << "num = " << num << endl;
    //     num--;
    // }while (num > 0);

    // int num = 10;
    // while (num > 0)
    // {
    //     if (num == 5)
    //         break;
    //     cout << "num = " << num << endl;
    //     num--;
    // }
    // return 0;
}
// 一定要注意==不能写成=，==是相等，=是赋值，while的条件如果写成赋值语句，可能会造成死循环