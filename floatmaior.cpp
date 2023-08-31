
#include <iostream>
#include<iomanip>
#include <cfloat>

using namespace std;

int main(){
    float pif=3.141592653589793238462643383279502884197169;

    double pid =3.141592653589793238462643383279502884197169;

    cout<< "O maior valor de um tipo Float "<<FLT_MAX<<endl;
    cout<< "O menor valor de um tipo Float "<<FLT_MIN<<endl;

    std:: cout <<setprecision(25)<<pif<<endl;
    std:: cout <<setprecision(25)<<pid<<endl;
    //std:: cout <<"Ciêntifico: "<<scientific << pif<<endl;

    //std:: cout <<setprecision(3)<<pif<<endl;
    //std:: cout <<setprecision(5)<<pif<<endl;
    //std:: cout <<setprecision(9)<<pif<<endl;
    //std:: cout <<setprecision(17)<<pif<<endl;
    
    //std:: cout <<pif<<endl;
    //printf("%.22f\n", pif);
    return 0;
}

