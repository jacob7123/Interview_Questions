#include <iostream>
#include <stack>
using namespace std;

int main(){
  stack<int> s;

  s.push(5);
  s.push(3);
  s.push(8);
  s.push(1);
  s.push(2);

  cout << "Check original Stack:\n";
  stack<int> tmp = s;
  while(!s.empty()){
    cout << tmp.top() << ' ';
    tmp.pop();
  }
  
}
