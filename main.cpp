#include <conio.h>
#include <iostream>
 
using namespace std;
 
//RepoA


void showSum(int a, int b){
    setlocale(LC_ALL, "Russian");
cout<<"Сумма чисел: "<<(a+b)<<endl;
cout<<"Разность чисел: "<<(a-b);
cout<<"Произведение чисел: "<<(a*b);
}


 //RepoB

int main(){
 
int a , b;
cin>>a>>b;
showSum(a, b);
 
_getch();
return 0;
}
