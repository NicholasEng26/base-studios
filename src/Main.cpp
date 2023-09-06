/**
 * Main.cpp
 * CSE 332S
 * Studio Num:
 * Author:
*/

#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b;
    cout << sizeof(a) << endl;
    cout << &a << endl;
    int* const p_a = &a;
    char c_str[] = {'C', 'S', 'E', '\0'};
    char* c_p = c_str;
    cout << c_str << endl;
    cout << p_a << endl;
    *p_a = 100;
    *p_a += 100;
    return 0;
}