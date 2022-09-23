#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack <string> timesA, timesB;
    int topo, tamanho;
    string aux;

    timesA.push("Avai");
    timesA.push("Vasco");
    timesA.push("Cruzeiro");
    timesA.push("Real Madrid");
    timesA.push("Palmeiras");
    timesA.push("CSA");

    while (!(timesA.empty()))
    {
        cout << timesA.top() << endl;
        aux = timesA.top();
        timesA.pop();
        timesB.push(aux);
    }
    cout << endl;

    while (timesB.size() > 0)
    {
        cout << timesB.top() << endl;
        timesB.pop();
    }
    return 0;
}