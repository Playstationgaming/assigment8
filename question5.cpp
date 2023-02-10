#include<iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"enter number of elements ";
    cin>>n;
    vector <int> array(n);
    for(int &ele:array){
        cout<<"enter input ;";
        cin>>ele;
    }
    int i=0,j=n-1;
    int x;
    int count=0;
    cout<<"enter target sum ";
    cin>>x;
    while(j>i){
        if(array[i]+array[j]>x){
            j--;
        }
        else if(array[i]+array[j]==x){
      i++;
      j--;  
count++;
        }
        else{
            i++;
        }
    }
    cout<<count;
return 0;
}