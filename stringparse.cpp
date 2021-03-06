#include <iostream>
#include <string>
#include "StringHelper.h"

using namespace std;

bool checkSimbols(char c) {
  char arr[] = {'e', 'f', 'k', 'm', 's', 'x'};
  bool flag = true;
  for(int i = 0; i <= sizeof(arr) / sizeof(char) && flag; i ++) {
    if(arr[i] == c) flag = false;
  }
  return flag;
}


int main() {
  string  str =  "This text is a bit strange! Yeah!";
  string sep = "!";
  string temp = "?!";
  StringHelper ss(str);

  cout << "replace <<" << endl;
  ss.replace(temp, sep, 0, 0)->reverse(0);
  cout << str << endl;

  cout << "reverse with rules <<" << endl;
  ss.reverse(checkSimbols);
  cout << str << endl;


  cout << "set substring <<" << endl;
  string sset = " Some message: ";
  ss.set(sset, 0);
  cout << str << endl;


  cout << "wrap word <<" << endl;
  ss.wrap("message", "<<", ">>", 0, 0);
  cout << str << endl;

  return 0;   
}


