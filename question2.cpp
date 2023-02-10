#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter length of sorted array ";
    cin>>n;
    int array[n];
    for(int &ele:array){
        cin>>ele;
    }
    cout<<"enter the target sum ";
    int y;
    cin>>y;
    bool sum=false;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]+array[j]==y){
                sum=true;
            }
        }
    }
    if(sum==true){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
   
return 0;
}