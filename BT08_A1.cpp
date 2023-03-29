#include <iostream>
using namespace std;
void f(int xval)
{
   int x;
   x = xval;
   cout << &x << endl;
}
void g(int yval)
{
   int y;
   cout << &y << endl;
}
int main()
{
   f(7);
   g(11);
   return 0;
}
// x và y có cùng địa chỉ
// vị trí của stack frame cho hàm f khi chạy trùng với vị trí của g khi được gọi, 2 hàm cùng có tham số đầu vào và kết quả trả về kiểu int,
// x, y là các biến địa phương đầu tiên của 2 hàm -> chương trình sắp xếp 2 biến cùng địa chỉ
