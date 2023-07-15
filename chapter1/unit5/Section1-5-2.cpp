#include<iostream>
#include"Section1-5-1.h"
using namespace std;
int main(){
    Sales_item item,currItem;
    if(cin>>currItem){
        int cnt=1;
        while(cin>>item){
            if(item.isbn()==currItem.isbn())
            {
                cnt++;
            }
            else{
                cout<<currItem.isbn()<<" transcations occurs "<<cnt<<"times"<<endl;
                cnt=1;
                currItem=item;
            }
        }
        cout<<currItem.isbn()<<" transcations occurs "<<cnt<<"times"<<endl;
    }
    return 0;
}