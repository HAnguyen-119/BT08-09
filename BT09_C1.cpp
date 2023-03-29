#include <bits/stdc++.h>
using namespace std;

int len(const char a[])
{
    int res = 0;
    for (int i = 0; *(a + i) != '\0'; i++){
        res++;
    }
    return res;
}

char* reverse(const char a[])
{
    int n = len(a);
    char* arr = new char[n+1];
    for (int i = 0 ; i < n; i++){
        *(arr + i) = *(a + n - 1 - i);
    }
    *(arr + n) = '\0';
    return arr;
    delete arr;
}
char* delete_char(const char a[], const char c)
{
    int n = len(a);
    char* arr = new char[n+1];
    for (int i = 0 ; i < n; i++){
        *(arr + i) = *(a + i);
    }
    *(arr + n) = '\0';
    int i = 0;
    while (i < n){
        if (*(arr + i) == c){
            for (int j = i; j < n - 1; j++){
                *(arr + j) = *(arr + j + 1);
            }
            n--;
            i--;
        }
        i++;
    }
    for (int i = n; i < len(arr); i++){
        *(arr + i) = '\0';
    }
    return arr;
    delete arr;
}
char* pad_right(const char a[], const int n)
{
    int k = len(a);
    char* arr = new char[n];
    for (int i = 0 ; i < k; i++){
        *(arr + i) = *(a + i);
    }
    //*(arr + k) = '\0';
    if (k < n){
        for (int i = k; i < n; i++){
            *(arr + i) = '_';
        }
        *(arr + n) = '\0';
    }
    return arr;
    delete arr;
}
char* pad_left(const char a[], const int n)
{
    int k = len(a);
    char* arr = new char[n];
    for (int i = 0 ; i < k; i++){
        *(arr + i) = *(a + i);
    }
    if (k < n){
        for (int i = n - 1; i >= n - k; i--){
            *(arr + i) = *(arr + i - (n - k));
        }
        for (int i = 0; i < n - k; i++){
            *(arr + i) = '_';
        }
        *(arr + n) = '\0';
    }
    return arr;
    delete arr;
}
char* truncate(const char a[], const int n)
{
    int k = len(a);
    char* arr = new char[k+1];
    for (int i = 0 ; i < k; i++){
        *(arr + i) = *(a + i);
    }
    *(arr + k) = '\0';
    if (k > n){
        for (int i = n; i < k; i++){
            *(arr + i) = '\0';
        }
    }
    return arr;
    delete arr;
}

char* trim_left(const char a[])
{
    int n = len(a);
    char* arr = new char[n+1];
    for (int i = 0; i < n; i++){
        *(arr + i) = *(a + i);
    }
    *(arr + n) = '\0';
    int k = 0;
    while (*(arr+ k) == ' '){
        k++;
    }
    for (int i = 0; i < n - k; i++){
        *(arr + i) = *(arr + i + k);
    }
    for (int i = n - k; i < n; i++){
        *(arr + i) = '\0';
    }
    return arr;
    delete arr;
}
char* trim_right(const char a[])
{
    int k = len(a);
    char* arr = new char[k+1];
    for (int i = 0 ; i < k; i++){
        *(arr + i) = *(a + i);
    }
    *(arr + k) = '\0';
    while (*(arr + k - 1) == ' '){
        *(arr + k - 1) = '\0';
        k--;
    }
    return arr;
    delete arr;
}

int main()
{
    const char a[20] = "tacocat", b[20] = "    hello   ";

    cout << len(a) << endl;
    cout << reverse(a) << endl << delete_char(a, 'a') << endl << truncate(a, 5) << endl;
    cout << pad_right(a, 10) << " " << len(pad_right(a, 10)) << endl
         << pad_left(a, 10) << " " << len(pad_left(a, 10)) << endl;

    cout << len(b) << endl
         << trim_left(b) << " " << len(trim_left(b)) << endl
         << trim_right(b) << " " << len(trim_right(b)) << endl;

    return 0;
}

