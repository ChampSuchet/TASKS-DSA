#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter number of rows";
    cin>>n;

    for(int i=0;i<n;i++){
        for(char j='E'-i;j<='E';j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}