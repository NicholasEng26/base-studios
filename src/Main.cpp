/**
 * Main.cpp
 * CSE 332S
 * Studio Num:
 * Author:
*/

#include <iostream>
#include <sstream>      // std::istringstream

using namespace std;

int main() {
    string s = "this is a sentence";

    istringstream iss(s);

    string s2;

    iss >> s2;

    cout << s2 << endl;
//    int a = 10;
//    int b;
//    cout << sizeof(a) << endl;
//    cout << &a << endl;
//    int* const p_a = &a;
//    char c_str[] = {'C', 'S', 'E', '\0'};
//    char* c_p = c_str;
//    cout << c_str << endl;
//    cout << p_a << endl;
//    *p_a = 100;
//    *p_a += 100;



    return 0;
}