#include<iostream>
using namespace std;
/*int main(){
    int val=0,currVal=0;
    if(cin>>currVal){
        int cnt=1;
        while(cin>>val){
            if(val==currVal)
                cnt++;
            else{
                cout<< currVal <<" occurs "<< cnt<<" times "<<endl;
                cnt=1;
                currVal=val;
            }
        }
        cout<< currVal <<" occurs "<<cnt<<" times "<<endl;
    }
    return 0;
}*/
int main(){
    int v1=0,v2=3;
    cout<<"v1 is "<<v1++<<endl;
    cout<<"v2 is "<<++v2<<endl;
}