#include <iostream>
using namespace std;
void func( );

namespace A
{
    int a = 5;
    int b = 10;
}

int main()
{
    func();
    cout <<__FILE__<<" "<<__func__<<" " << __LINE__ << "a = " << A::a << endl;
    cout <<__FILE__<<" "<<__func__<<" " << __LINE__ <<"b = " << A::b << endl;
    
    return 0;
}
