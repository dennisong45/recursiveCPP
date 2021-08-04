#include <iostream>
#include <string>
using namespace std;

bool isPalin(string input){
  if(input.length() == 0 || input.length() == 1){
    return true;
  }
//KAYAK

  if(input[0] == input[input.length()-1]){
    
    return isPalin(input.substr(1,input.length()-2));
  }

  return false;
}

int main(){
  cout << isPalin("KAYAK");
  
}