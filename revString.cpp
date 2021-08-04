#include <iostream>
#include <string>
using namespace std;

//Problem reverse a string Recursively


string revStr(string input){
  if(input.size() == 0){
    return input;
  }

 
  // hello    

  // ello
  // llo
  // ll
  // l
  //
  return revStr(input.substr(1)) + "H";
}

