#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std; 

int main(){

    // variaveis 

    string secretWord;
    vector<char> chars_tempts;
    int num_tempts = 0;
    bool fail=false;
    char letra;

    cout<<"Bem vindo ao jogo da velha!"<<endl;
    cout<<"Digite a palavra secreta: ";
    cin>>secretWord;

    while (!fail){
        int c = secretWord.length();
        
        for(int i=0;i<c;i++){
            cout<<" _ ";
        }

        cout<<"\nDigite uma letra: "<<endl;
        cin>>letra;

        if(find(chars_tempts.begin(), chars_tempts.end(), letra) != chars_tempts.end()) {
            cout<<"A letra "<<letra<<" ja foi tentada!" <<endl;            
        }
        else{
            chars_tempts.push_back(letra);
        }

        cout<<"as letras tentadas foram: "<<endl;

        for(char i: chars_tempts){
            cout<<i<< " , ";
        }

        num_tempts++;

        if (num_tempts == 6){
            fail = true;
        }


    }
    
}