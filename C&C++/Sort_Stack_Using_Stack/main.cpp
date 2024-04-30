#include <iostream>
#include <stack>
using namespace std;
stack<int> mergeStack(stack<int>& left, stack<int>& right){
  stack<int> tmpAns;

  while(!left.empty() && !right.empty()){
    if(left.top() > right.top()){
      tmpAns.push(right.top());
      right.pop();
    }
    else{
      tmpAns.push(left.top());
      left.pop();
    }
  }

  while(!left.empty()){
    tmpAns.push(left.top());
    left.pop();
  }
  while(!right.empty()){
    tmpAns.push(right.top());
    right.pop();
  }

  stack<int> finalResult;
  while (!tmpAns.empty()) {
    finalResult.push(tmpAns.top());
    tmpAns.pop();
  }
  return finalResult;
}

stack<int> mergeSort(stack<int>& s){
  if(s.size() <= 1)
    return s;
  stack<int> left, right;

  // Split stack into two halves
  int count = 0;
  while(!s.empty()){
    if(count < s.size() / 2)
      left.push(s.top());
    else
      right.push(s.top());
    s.pop();
    ++count;
  }

  left  = mergeSort(left);
  right = mergeSort(right);

  return mergeStack(left, right);
}

int main(){
  stack<int> s;

  s.push(5);
  s.push(3);
  s.push(8);
  s.push(1);
  s.push(2);

  cout << "Check original Stack:\n";
  stack<int> tmp = s;
  while(!tmp.empty()){
    cout << tmp.top() << ' ';
    tmp.pop();
  }

  stack<int> sortedStack = mergeSort(s);

  cout << "\nSorted Stack\n";
  while(!sortedStack.empty()){
    cout << sortedStack.top() << ' ';
    sortedStack.pop();
  }
  return 0;
}
