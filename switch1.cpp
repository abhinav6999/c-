#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"enter the value of button:"<<endl;
    cin>>button;
    switch(button)
    {
        case 'a':
             cout<<"hello"<<endl;
             break;
        case 'b':
             cout<<"namaste"<<endl;
             break;
        case 'c':
             cout<<"salut"<<endl;
             break;
        case 'd':
             cout<<"hola"<<endl;
             break;
        case 'e':
             cout<<"ciao"<<endl;
             break;
        default:
            cout<<"i am still learning more!"<<endl;
            break;
    }
    return 0;
}