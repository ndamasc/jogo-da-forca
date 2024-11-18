#include<iostream>
#include<string>
#include<vector>

using namespace std; 

int main(){

    // variaveis 

    string secretWord;
    vector<char> chars_tempts;
    int num_tempts = 6;
    bool fail=false;

    cout<<"Bem vindo ao jogo da velha!"<<endl;
    cout<<"Digite a palavra secreta: ";
    cin>>secretWord;

    while (!fail){
        int c = secretWord.length();
        
        for(int i=0;i<c;i++){
            cout<<" _ ";
        }

        fail = true;
    }
    


}