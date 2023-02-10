#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number of elements ";
cin>>n;
int array[n];
for(int &ele:array){
    cin>>ele;

}int y;
bool ans=false;
cout<<"enter the diffrence number ";
cin>>y;
int i=0,j=1;
while(j>i){
    if(array[j]-array[i]<y){
j++;
    }
    else if(array[j]-array[i]==y){
        ans=true;
        break;
    }
    else{
        i++;
    }
}
if(ans==true){
    cout<<"yes";
}
else{
    cout<<"false";
}
return 0;
}