
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
 
}

void exercise_2(string s1) {
  // TODO: YOUR CODE HERE
}

void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
}

void exercise_4(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
}

int exercise_6(int n) {
  int expected=0;
  while (n>0){
    expected= expected + n%10;
    n= n/10;
 }
  return expected;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_8(string s) {
    string sinespacio;
    string resultante;
    int i=0;
    
    
    for(i=0;i<s.length();i++){
        if(s[i]!=' '){
            sinespacio+=s[i];
        }
        
    }
    
    for(i=sinespacio.size()-1;i>=0;i--){
        resultante+=sinespacio[i];
    }
    if(sinespacio==resultante){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  int sum =0;
  for(int i=1; n>=i; ++i){
    sum = sum + pow(i,k);
  }
  return sum;
 
}

string exercise_14(int n) {
    string s=to_string(n);
    string sinespacio;
    string resultante;
    int i=0;
    
    
    for(i=0;i<s.length();i++){
        if(s[i]!=' '){
            sinespacio+=s[i];
        }
        
    }
    
    for(i=sinespacio.size()-1;i>=0;i--){
        resultante+=sinespacio[i];
    }
    if(sinespacio==resultante){
        return "Es palindrome";
    }
    else{
        return "No es palindrome";
    }
  
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}