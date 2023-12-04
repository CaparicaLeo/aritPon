#include <iostream>
using namespace std;
void minMax(int v[],int n);
int main(){
    int tamanhoMinMax;
    cout << "TAMANHO DO VETOR: ";
    cin >> tamanhoMinMax;
    int vetorMinMax[tamanhoMinMax];
    for(int i=0; i< tamanhoMinMax; i++){
        cout << "Elemento " << i << " : ";
        cin >> vetorMinMax[i];
    }
    cout << endl;
    minMax(vetorMinMax,tamanhoMinMax);
}
void minMax(int v[],int n){
    int menor=INT16_MAX, maior=0;
    for(int i=0;i<n;i++){
        if(v[i]<menor){
            menor = v[i];
        }
    }
    for(int i=0;i<n;i++){
        if(v[i]>maior){
            maior = v[i];
        }
    }
    cout << "MENOR TERMO: " << menor << endl;
    cout << "MAIOR TERMO: " << maior << endl;
}
