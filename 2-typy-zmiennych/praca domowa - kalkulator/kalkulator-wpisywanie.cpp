#include <iostream>
#include <cstdio>
#include <locale.h>
#include <windows.h>

using namespace std;
int main(){	
  setlocale(LC_CTYPE, "Polish");
  SetConsoleTitleA("Kalkulator prosty - dane wpisywane");

  cout <<"================================== \n";
  cout<< "KALKULATOR DWÓÆH LICZB CA£KOWITYCH \n";
  cout <<"================================== \n";
  
  cout<< "Podaj wartoœæ dla a: ";
  int a;
  cin>>a;
  
  cout<<"Podaj wartoœæ dla b: ";
  int b;
  cin>>b;

  int suma=a+b;
  int roznica=a-b;
  int iloczyn=a*b;
  int iloraz=a/b;
  
  cout <<"================================== \n";
  cout << "PODANE WARTOŒÆI: \n";
  cout << "a = "<<a<<", b = "<<b<<endl;
  cout <<"================================== \n";
   
  cout << "OTRZYMANE WYNIKI: \n";
  cout << "-->Suma jest równa: "<<suma<<endl;
  cout << "-->Ró¿nica wynosi: "<<roznica<<endl;
  cout << "-->Iloczyn jest równy: "<<iloczyn<<endl;
  cout << "-->Iloraz wynosi: "<<iloraz<<endl;
  cout <<"================================== \n";

  cin.ignore();
  return 0;

}




