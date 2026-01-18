// code before refactoring
#include<iostream>
using namespace std;

class a{
public:
int x,temp,arr[10];

void f(){
for(int i=0;i<10;i++){
cin>>arr[i];
}

temp=0;
for(int i=0;i<10;i++){
temp=temp+arr[i];
}

cout<<temp<<endl;

if(temp/10>=90){
cout<<"A";
}
else if(temp/10>=75){
cout<<"B";
}
else if(temp/10>=60){
cout<<"C";
}
else{
cout<<"D";
}
}
};

int main(){
a obj;
obj.f();
}
