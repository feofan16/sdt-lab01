#include <conio.h>
#include <iostream>
 
using namespace std;
 
void showSum(int a, int b){
    setlocale(LC_ALL, "Russian");
cout<<"����� �����: "<<(a+b)<<endl;
cout<<"�������� �����: "<<(a-b);
}


 //RepoB

int main(){
 
int a , b;
cin>>a>>b;
showSum(a, b);
 
_getch();
return 0;
}