#include <iostream>
using namespace std;

int x; //グローバル変数(グローバル名前空間)

namespace nameA{
  int x = 1;
}

namespace nameB{
  int x = 2;
}

int main(){
  int x = 3;
  cout << x << endl;
  cout << ::x << endl;
  cout << nameA::x << endl;
  cout << nameB::x << endl;
}
