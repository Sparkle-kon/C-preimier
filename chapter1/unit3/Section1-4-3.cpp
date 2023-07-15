#include<iostream>
using namespace std;
int main(){
    int sum=0,value=0;
    //读取数据直到end of File ，windows为ctrl+z
    /*while(cin>>value){
        sum+=value;
    }*/
    for(;cin>>value;)
        sum+=value;
    cout<< "Sum is: "<<sum <<endl;
}