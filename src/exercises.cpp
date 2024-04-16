
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
   for(int i=0;i<s1.size();i++){
       if(s1[i]==' '){
           cout<<i<<endl;
           
       }
       
   }
   cout<<s1.size()<<endl;
   
}

void exercise_2(string s1) {
  int finPalabra=0;
  int inicioPalabra=0;
   for(int i=0;i<s1.size();i++){
       if(s1[i]==' ' || i==s1.size()-1){
           if(i==s1.size()-1){
            finPalabra=i;    
           }
           else{
               finPalabra=i-1;
           }
           
           cout<<"[";
            for(int a=inicioPalabra;a<=finPalabra;a++){
                cout<<s1[a];
            }
            cout<<"]"<<endl;
            inicioPalabra=i+1;
   
}


void exercise_3(string s1) {
 
}


void exercise_4(int n) {
    int factorial=1;
    int i=0;
    
    
    if(n<0){
        cout<<"El numero es negativo. Intentelo de nuevo"<<endl;
        
    }
    else if(n>14){
        cout<<"El numero es muy grande. Intentelo de nuevo"<<endl;
    }
    
    else{
        for(i=1;i<=n;i++){
            factorial=factorial*i;
            
        }
         cout<<factorial<<endl;
    }
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
  double suma=0;
   
    
    for(int i=1;i<=n;i++){
        suma+= pow(-1,i+1)/i;
        
        
    }
    cout<<suma<<endl;
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
    double Un=1;
   
   
   cout<<"U0"<<" = "<<Un<<endl;
   for(int n=0;n<10;n++){
    Un=(Un)/(n+1);
    cout<<"U"<<n+1<<" = "<<Un<<endl;
   }
  
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
  unsigned resto,cont=0,numBin=0;
  
  
  while(decimal>0){
      resto=decimal%2;
      decimal/=2;
      numBin+=resto*pow(10,cont);
      cont++;
  }
  cout<<numBin<<endl;
  
}

void exercise_16(int divident, int divider) {
  int cociente = 0;
  int residuo = 0;
  while (divident >= divider) {
  divident -= divider;
  cociente++;
  } 
residuo = divident;
cout << cociente << " " << residuo << endl;
}

void exercise_17(int n) {
   int i = 0; 
  int  c = 2; 
    
    while (n > i) {
        bool esPrimo = true;
        
        for (int i = 2; i <= c/2; ++i) {
            if (c % i == 0) {
                esPrimo = false;
                break; 
            }
        }
        
        if (esPrimo) {
            cout << c << " "; 
            ++i; 
        }
        
        ++c; 
    }
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}