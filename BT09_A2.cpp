#include <bits/stdc++.h>
using namespace std;
int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p; // Lỗi : giải phóng p làm p2 trở thành con trỏ trỏ tới vùng nhớ không còn hiệu lực
    *p2 = 100;
    cout << *p2;
    delete p2;
    return 0;
}
