#include <iostream>
using namespace std;
void fn(int* p){
    int* b = (int*)malloc(sizeof(int));
    *b = 2;
    p = b;
}
int main() {
    // Write C++ code here
    int a = 5;
    int* p = &a;
    cout << *p << endl;
    fn(p);
    cout << *p;
    return 0;
}
