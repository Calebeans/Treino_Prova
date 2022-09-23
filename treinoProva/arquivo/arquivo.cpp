#include <iostream>
#include <fstream>
#include <windows.h>
 
using namespace std;

int soma(int a, int b, int c);
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  ofstream arquivo;

  arquivo.open("soma.txt");

  if(arquivo.fail()){
    cerr << "F criar arquivo" << endl;
    arquivo.clear();
  }else{
    cout << "Criado com sucesso" << endl;
  }

  int result;
  result = soma(70, 21, 50);

  arquivo << result;

  arquivo.clear();
  arquivo.close(); 
 
  cout << endl << endl;
  return 0;
}

int soma(int a, int b, int c){
    return a + b + c;
}