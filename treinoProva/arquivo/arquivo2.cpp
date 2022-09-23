#include <iostream>
#include <fstream>
#include <windows.h>
 
using namespace std;

int numeros();
void imprimeResultado(int num);
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int num = 0;

  num = numeros();

  cout << "Soma dos númeos: " << num;

  imprimeResultado(num); 
 
  cout << endl << endl;
  return 0;
}

int numeros(){
  int num[3];
  int total = 0;

  ifstream arquivo;
  arquivo.open("numeros.txt");

  if(!arquivo.is_open()){
    cout << "F abrir arquivo" << endl;
    arquivo.clear();
  }

  cout << "Numeros: " << endl;

  for (int i = 0; i < 3; i++)
  {
    arquivo >> num[i];
    cout << num[i] << endl;
    total += num[i];
  }
  return total;
}


void imprimeResultado(int num){
  ofstream arquivo;
  arquivo.open("soma.dat");

  if(arquivo.is_open()){
    cout << "Criado com sucesso .dat" << endl;
  }

  arquivo << num;
}