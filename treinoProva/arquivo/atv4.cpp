#include <iostream>
#include <fstream>
#include <time.h>
#include <cstdlib>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int matriz[2][2], aux = 0;
  ofstream arquivo_matriz;
  arquivo_matriz.open("matriz.xls");
  srand(time(NULL));

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; i++)
    {
        cin >> matriz[i][j];
    }
    
  }

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; i++)
    {
        arquivo_matriz << matriz[i][j];
    }
    
  }

  arquivo_matriz.clear();
  arquivo_matriz.close();
  

 
 
  cout << endl << endl;
  return 0;
}