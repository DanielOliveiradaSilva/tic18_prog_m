#include <iostream>
using namespace std;
int main (){
    int num1, num2;
    int res=0, i=0,s,s1=1,s2=1;

    std::cout<<"Digite o primeiro número: ";
    std::cin>>num1;
    std:: cout<<"Digite o segundo número: ";
    std:: cin >>num2;

    
    if (num1<0)
    {
        num1 = -(num1);//positivo
        s1 =-1;// s1 =0

    }

    //positivo
    if (num2<0)
    {
        num2 = -(num2);//positivo
        s2 =-1;//0
    }
    
    
    s= s1 * s2;// 0

    while (/* condition */)
    {
        /* code */
    }
    

    return 0;
}