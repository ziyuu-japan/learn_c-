//疑問要素無しでpop_backするとどうなる
#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> v{2, 3};

  cout << *v.begin() << endl;
  v.erase(v.begin()+1);
  cout << v[1] << endl;
}
