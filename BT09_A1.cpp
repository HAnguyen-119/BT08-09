#include <bits/stdc++.h>
using namespace std;
char* concat(const char* a, const char* b)
{
    int m = strlen(a);
    int n = strlen(b);
    char* res = new char[m + n];
    strcpy(res, a);
    strcpy(res + m, b);
    return res;
}
int main()
{
    const char a[10] = "hello";
    const char b[10] = "world";
    cout << concat(a, b);
    return 0;
}
