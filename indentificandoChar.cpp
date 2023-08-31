#include <iostream>

int main(void){

    char ch1;

    std:: cin >>ch1;
    
   

    if(int(ch1)>=97 && int(ch1)<= 122 ){
        std:: cout<<"Letra minuscula \n";
    }else if(int(ch1)>=65 && int(ch1)<=90){
        std:: cout<<"Letra Maiuscula \n";
    }else if ( int(ch1)>= 48 && int(ch1)<= 57){
         std:: cout<<"Digito \n";
    }else std:: cout<<"Outro tipo \n";
   
    //outra forma é usando método;

    return 0;
}