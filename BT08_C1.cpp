#include <iostream>
using namespace std;

int len(char a[])
{
    int res = 0;
    char* p = a;
    while (*p != '\0'){
        res++;
        p++;
    }
    return res;
}
void reverse(char a[])
{
    int n = len(a);
    for (int i = 0 ; i <= n/2; i++){
        char x = *(a + i);
        *(a + i) = *(a + n - 1 - i);
        *(a + n - 1 - i) = x;
    }
}
void delete_char(char a[], char c)
{
    int n = len(a);
    int i = 0;
    while (i < n){
        if (*(a + i) == c){
            for (int j = i; j < n - 1; j++){
                *(a + j) = *(a + j + 1);
            }
            n--;
            i--;
        }
        i++;
    }
    for (int i = n; i < len(a); i++){
        *(a + i) = '\0';
    }
}
void pad_right(char a[], int n)
{
    if (len(a) < n){
        for (int i = len(a); i < n; i++){
            *(a + i) = '_';
        }
    }
}
void pad_left(char a[], int n)
{
    int k = len(a);
    if (k < n){
        for (int i = n - 1; i >= n - k; i--){
            *(a + i) = *(a + i - (n - k));
        }
        for (int i = 0; i < n - k; i++){
            *(a + i) = '_';
        }
    }
}
void truncate(char a[], int n)
{
    int k = len(a);
    if (k > n){
        for (int i = n; i < k; i++){
            *(a + i) = '\0';
        }
    }
}
bool is_palindrome(char a[])
{
    bool res = true;
    for (int i = 0; i <= len(a)/2; i++){
        if (*(a + i) != *(a + len(a) - 1 - i)){
            res = false;
            break;
        }
    }
    return res;
}
void trim_left(char a[])
{
    int k = 0;
    while (*(a + k) == ' '){
        k++;
    }
    for (int i = 0; i < len(a) - k; i++){
        *(a + i) = *(a + i + k);
    }
    for (int i = len(a) - k; i < len(a); i++){
        *(a + i) = '\0';
    }
}
void trim_right(char a[])
{
    int n = len(a) - 1;
    while (*(a + n) == ' '){
        *(a + n) = '\0';
        n--;
    }
}
int main()
{
    char a[20] = "tacocat", b[20] = "   hello  ";
    cout << len(a) << endl << is_palindrome(a) << endl;
    delete_char(a, 'a');
    cout << a << " " << len(a) << endl;
    pad_left(a, 8);
    cout << a << endl;
    pad_right(a, 15);
    cout << a << endl;
    truncate(a, 7);
    cout << a << endl;
    cout << b << endl;
    trim_left(b);
    cout << b << endl;
    trim_right(b);
    cout << b << endl;
    return 0;
}
