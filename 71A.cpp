#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore() ;
    string str;
    while (n--)
    {
    getline(cin,str);
    if (str.length()>10)
    {
    cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;
    }

    else
    cout<<str<<endl; 
    }
    return 0;
}
