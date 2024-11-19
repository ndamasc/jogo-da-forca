#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

//  variaveis

string palavraSecreta;
string mascara;

int chances=0;
bool perdeu = false;
bool acertou=false;

char letra;
vector<char> tentativas;
vector<string> palavras = { "cachorro", "gato", "macaco", "aranha", "cobra", "abelha", "lagarto","abajur", "cabeceira", "batedeira","liquidificador","televisao","cadeira" };



// criar um dicionario para o jogo escolher sozinho a palavra secreta


void verifica_letra(){
            if(find(tentativas.begin(), tentativas.end(), letra) != tentativas.end()){
                cout<<"Opa! vc ja chutou essa letra"<<endl;
            }else{
                tentativas.push_back(letra);
            }

            cout<<"\nAs letras tentadas foram: ";

            for(int n=0;n<tentativas.size();n++){
                cout<<tentativas[n]<<" ";

            }

}


void verifica_palavra(){

    acertou=false;

    for(int i=0;i<mascara.length();i++){
        if(letra==palavraSecreta[i]){
            mascara[i]=letra;
            acertou=true;
        }              
    }
    
    if(acertou) {
        cout << "\nCorreto!" << endl;
    } else {
        cout << "\nErrado!" << endl;
        chances++;
    }

    cout<<mascara;


}


    void termina_jogo(){

        if(chances==6){
            perdeu=true;
            cout<<"\nVOCE PERDEU :( ";
        }else if (mascara==palavraSecreta){
            cout<<"\nVOCE GANHOU !!";
            perdeu=true;
        }

    }




int main(){

    srand(time(0));

    int index = rand()%palavras.size();


    //cout<<"Digite a palavra secreta: "<<endl;
    palavraSecreta = palavras[index];

    mascara = string(palavraSecreta.length(), '_');

    cout<<mascara;

    while(!perdeu){

        cout<<"\nEssa e  tentativa "<<chances+1<<endl;

        cout<<"Digite uma letra: "<<endl;
        cin>>letra;     //fazer com que ignore espacos em bracno

        verifica_letra();
        verifica_palavra();
        termina_jogo();


    }  

}