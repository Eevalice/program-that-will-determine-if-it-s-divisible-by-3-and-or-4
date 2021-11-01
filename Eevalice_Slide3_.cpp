#include <iostream>
using namespace std;


int main(){
  int n;
  cout << "Enter a number: ";
  cin >> n;

  if ((n % 3 == 0 && n % 4 == 0 )){
    cout << n << " is divisible by 3 and 4";
  }
  else if(n % 3 == 0){
    cout << n << " is divisible by 3 but not 4";
  }
  else if (n % 4 == 0 ){
    cout << n << " is divisible by 4 but not 3";
  }
  else{
    cout << n << " is not divisible by 3 and 4";
  }
  return 0;
}
