#include<iostream>
using namespace std;
//1-9
/*int main(){
    int val=50;
    int sum=0;
    while(val<=100){
        sum+=val;
        val++;
    }
    cout<<"The sum is "<<sum <<endl;
}*/
//1-10
/*int main(){
    int val=10;
    while(val>=0){
        cout<<val<<endl;
        val--;
    }
}*/
//1-11
int main(){
    int v1=0,v2=0;
    cout<<"Please Enter two different integers "<<endl;
    cin>>v1>>v2;
    while(v1 > v2){
        cout<<v1<<endl;
        v1--;
    }
    while(v2 >= v1){
        cout<<v1<<endl;
        v1++;
    }
}