#include<iostream>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;

//  variaveis

string palavraSecreta;
string mascara;

int chances=0;
bool perdeu = false;
bool acertou=false;

char letra;
vector<char> tentativas;

// criar um dicionario para o jogo escolher sozinho a palavra secreta


int main(){

    cout<<"Digite a palavra secreta: "<<endl;
    cin>>palavraSecreta;

    mascara = string(palavraSecreta.length(), '_');

    cout<<mascara;

    while(!perdeu){

        cout<<"\nEssa e  tentativa "<<chances+1<<endl;

        cout<<"Digite uma letra: "<<endl;
        cin>>letra;     //fazer com que ignore espacos em bracno

    
        if(find(tentativas.begin(), tentativas.end(), letra) != tentativas.end()){
            cout<<"Opa! vc ja chutou essa letra"<<endl;
        }else{
            tentativas.push_back(letra);
        }

        acertou=false;

        for(int i=0;i<mascara.length();i++){
            if(letra==palavraSecreta[i]){
                mascara[i]=letra;
                acertou=true;
            }              
        }
        
        if(acertou) {
            cout << "Correto!" << endl;
        } else {
            cout << "Errado!" << endl;
            chances++;
        }

        cout<<mascara;

        if(chances==6){
            perdeu=true;
            cout<<"\nVOCE PERDEU :( ";
        }else if (mascara==palavraSecreta){
            cout<<"\nVOCE GANHOU !!";
            break;
        }

    }





    

}