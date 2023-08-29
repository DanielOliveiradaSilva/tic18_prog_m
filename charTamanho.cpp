#include <iostream>
using namespace std;

int main (void){
    char letra = 'a'; //letra é uma variavel de tipo char
    cout<<"A letra "<<letra << " Corresponde ao valor "<<int(letra)<<endl;
    cout<<"O tipo char ocupa "<< sizeof(char)<<" bytes na memoria.\n";
    
    letra = -120;
    cout << "E pode armazenar valores negativos( " << letra;
    letra = 120;

    cout << ") e positivos (" << letra <<")." << endl;

    unsigned char letra2= 120;
    signed char letra3 = -120;
    cout << "o tipo unsigned char ocupa " << sizeof(letra2)<<" bytes na memoria.\n";
    cout<< "o tipo signed char ocupa "<< sizeof(letra3)<<" bytes na memoria.\n";

    wchar_t letra4 = L'ç';
    cout<< "o tipo  wchar_t ocupa "<< sizeof(letra4)<<" bytes na memoria.\n";

    char16_t letra5 = L'ç';
    cout<< "o tipo char16 ocupa "<< sizeof(letra5)<<" bytes na memoria.\n";

    char32_t letra6 = L'ç';
    cout << "o tipo char32_t ocupa "<<sizeof(letra6)<< " bytes na memoria.\n";

    return 0;

}