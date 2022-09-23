#include <iostream>
#include <fstream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  ifstream arquivo;
  arquivo.open("soma.txt");

  if(arquivo.fail()){
    cerr << "F abrir arquivo";
    arquivo.clear();
  }

  int a;

  arquivo >> a;

  cout << "Valor: " << a;
 
  cout << endl << endl;
  return 0;
}