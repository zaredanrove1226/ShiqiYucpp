#include <iostream>
using namespace std;

int main()
{
    float f1 = 2.34E+10f;
    float f2 = f1 + 10;

    cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;
    cout << "f1 - f2 = " << f1 - f2 << endl;
    cout << "(f1 - f2 == 0) = " << (f1 - f2 == 0) << endl;
    return 0;
    // if(fabs(f1 - f2) < FLT_EPSILON)
}
// 因为 float的精度有限，当进行 f1 + 10这个操作时，
// 计算结果被硬件​​舍入​​到了最接近那个可以被 float表示的数，而这个数恰好就是 f1本身
