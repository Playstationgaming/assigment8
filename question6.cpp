#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    vector<int> array(n);
    for(int &ele:array){
        cin>>ele;
    }
    int x;
    cout<<"target sum ";
    cin>>x;
    for(int i=0;i<=array.size()-3;i++){
for(int j=i+1;j<=array.size()-2;j++){
   for( int k=j+1;k<=array.size()-1;k++){
        if(array[i]+array[j]+array[k]==x){
            count++;
        }
    }
}
    }
cout<<count;
return 0;
}