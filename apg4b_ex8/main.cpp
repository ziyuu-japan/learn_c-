#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int p;
  int price;
  string text;
   
  cin >> p;
 
  if(p != 1 && p != 2){
    return 0;
  }
  
  // パターン1
  if (p == 1) {
    cin >> price;
  }
 
  // パターン2
  if (p == 2) {
    cin >> text >> price;
  }
 
  int N;
  cin >> N;
 
  if(p == 2){
    cout << text << "!" << endl;
  }
  cout << price * N << endl;
}
