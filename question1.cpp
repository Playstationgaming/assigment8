#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int array[n];
    int array1[m];
    for(int &ele:array){
        cin>>ele;
    }
    for(int &ele:array1){
        cin>>ele;
    }
    int j=0,k=0;
    int l=0;
int newarray[n+m];
while(j<n&&k<m){
if(array[j]>array1[k]){
    newarray[l++]=array1[k++];
}
else{
    newarray[l++]=array[j++];
}
}
while(j<n){
      newarray[l++]=array[j++];
}
while(k<m){
     newarray[l++]=array1[k++];
}
for(int ele:newarray){
    cout<<ele<<endl;
}
return 0;
}