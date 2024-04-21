
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
   }
}
void exercise_3(string s1) {
    int i= 0;
    while(i < 20){
        if(s1[i]=='1'){
            cout << "Om-nom-nom :P" << endl;
            i++;
        }else if(s1[i]=='0'){
            cout << "No cake :("<< endl;
            break;
        }else{
            i++;
        }
    
    }
  
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
  for(int a=1;a<n;a++){
        cout<<" ";
    }
    
    for(int i=1;i<=k;i++){
        cout<<i;
        if(i<10){
            cout<<"  ";
        } 
        else{
            cout<<"   "; 
        }
        
        if((i+n-1)%7==0){
            cout<<endl;
        }
        
        
    }
    
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
    int cantidad = 0;
    int efes = 0;

    for(int i=0; i<= s.size(); ++i){
        if(s[i]=='f'){
            efes = i;
            cantidad++;
        }
    }
    switch(cantidad){
        case 0:
            cout << -2 << endl;
            break;
        case 1:
            cout << -1 << endl;
            break;
        case 2:
            cout << efes << endl;
            break;
    }
}

int exercise_10(int a, int b) {
int MCD=1;
if(a==0){
    MCD=b;
}
else if (b==0){
    MCD=a;
}
else{

for(int i=2; i<=a && i<=b;i++){
    if(a%i==0 && b%i ==0){
        MCD=i;
    }
}
}
return MCD;
  
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
    double UI = 1;
    double U = UI;
    for(int i=1; 10>=i; ++i){
        int VI = U;
        double result = UI/(i +1);
        cout << "U" << i << " = " << UI << " " << "V" << i << " = " << VI << endl;
        UI = result;
    }
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
    int residuo = divident;
    int i = 0;
    if(divider!=0){
        for(i; residuo-divider >= 0; ++i){
            residuo = residuo - divider;
            
        }
    cociente = i;
    
    cout << cociente << " ";
    cout << residuo << endl;
    }
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
  int x=debut,contador=0;
    if(debut<=0){
        cout<<"El numero debe de ser positivo y mayor a zero"<<endl;
    }
    else if (fin<debut){
        cout<<"El numero de fin no debe de ser menor al inicial"<<endl;
    }
    else{
         while(debut<=fin ){
            if(x==0){
                cout<<debut<<"->"<<contador<<endl;
                contador=0;
                debut++;
                x=debut;
            }
            else {
                if(x % 3 == 0){
                x=x+4;
                contador++;
                }
                else if (x%4==0){
                x=x/2;
                contador++;
                }
                else { 
                x--;
                contador++;
                }
            }


        } 

    }
}