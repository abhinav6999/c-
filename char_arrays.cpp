// Character array are array of characters
//Declaration- char arr[n+1]; why[n+1] because last character is a null character tell about word or sentence is end.
// why we using null character because in a sentence a spaces are there generally in c++ we take space complier understand after space a new variable take input but we input a sentence in a character array it's does not understand where the word and sentence end that's why we use null character.
#include<iostream>
using namespace std;
int main(){
    /*char arr[100]="apple";
    int i=0;
    while(arr[i]!='\0'){
        cout<<arr[i]<<endl;
        i++;
    }*/
    char arr[100];
    cin>>arr;
    cout<<arr;
    cout<<arr[2];
    return 0;
}