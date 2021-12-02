//Segunda parte printar os 2 primeiros valores

#include <iostream>

using namespace std;

class Vetores{
	
	int i;
	
	int vetA[6];
	int vetB[6];
	int vetC[12];
	
	public:
		junta(int vet[12]);
		vet1(int vet[6]);
		vet2(int vet[6]);
};

int Vetores::vet1(int vet[6]){
	
		
	for (i = 0 ; i < 6; i++){
		
		
        cout << "Digite o valor do primeira array na posicao : " << i << endl;
        cin >> vetA[i];
}
}

int Vetores::vet2(int vet[6]){
	
		for (i = 0 ; i < 6 ; i++){

        cout << "Digite o valor do segunda array na posicao : " << i << endl;
		cin >> vetB[i];
}
}

int Vetores::junta(int vet[12]){
for (i = 0;i < 6; i++){
    vetC[i] = vetA[i];
		
}
		for (i = 0; i < 12; i++){
        vetC[i] = vetB[i - 6];
        	
}		
		cout << " " << endl;
		
		for ( i = 0; i < 12 ; i++){
			
			cout << vetC[i] << endl;
		
	}
}

	

int main(){

    int vet[12];

    Vetores Posicao;
    Posicao.vet1(vet);
    Posicao.vet2(vet);
    Posicao.junta(vet);
}
