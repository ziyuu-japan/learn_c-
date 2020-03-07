#include <iostream>
using namespace std;

namespace {
  void f(void); //関数の場合はexternをつけないで外部の関数は利用できる
  void f(void){
    cout << "Hello World! inside nonamespace" << endl;
  }
}

int main(){
  extern int x;
  cout << x << endl;
  f();
}
