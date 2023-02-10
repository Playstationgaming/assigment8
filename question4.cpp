#include<iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter number ";
    cin>>n;
    vector <int> array(n);
    for(int &ele:array){
        cout<<"enter the input";
        cin>>ele;
    }
    int i=0;
    int j=n-1;
    int k=0;
    int newarray[n];
    while(j>=i){
if(array[i]*array[i]>array[j]*array[j]){
  newarray[k++]=array[i]*array[i];
 i++;
}
else{
    newarray[k++]=array[j]*array[j];
    j--;
}
    }
    for(int &ele:newarray){
        cout<<ele<<endl;
    }
return 0;
}