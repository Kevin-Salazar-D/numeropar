#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int num;

    cout<<"Ingresa un numero ";
    cin>>num;

    if (num%2 ==0)
    {
       cout<<"El numero "<<num <<" es par"<<endl;
       system("pause");
       exit(1);
    }

    cout<<"El numero "<<num <<" no es par" <<"\n";

    system("pause");
    return 0;
    
}
