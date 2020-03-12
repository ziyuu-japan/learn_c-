#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, a, b;
  string op;
  
  //opの数と最初の数を受け取る
  cin >> N >> a;

  int i=0;
  while(i < N){
    cin >> op >> b;
    if(op == "+"){
      a = a + b; 
    } else if(op == "-"){
      a = a - b;
    } else if(op == "*"){
      a = a * b;
    } else if(op == "/"){
      if(b==0){
        cout << "error" << endl;
	return 0; //0で割れないので、errorを出力して終了
      }
      a = a / b;
    }
    cout << i + 1 << ":" << a << endl;
    i++;
  }
}
