#include<iostream>
#include "Section1-5-1.h"
using namespace std;
int main()
{
    //读取售买信息，并写出
	//for (Sales_item item; cin >> item; cout << item << endl);
    
    //读取两个具有相同ISBN的信息，并将其相加
    /*
    Sales_item item1,item2;
    cin>>item1>>item2;
    if(item1.isbn()==item2.isbn()){
        cout<<"The total is "<<item1+item2<<endl;
    }
    else{
        cout<<"The item1 is "<<item1<<endl;
        cout<<"The item2 is "<<item2<<endl;
    }*/
    Sales_item sum;
    for(Sales_item item;cin>>item;){
        sum+=item;
    }
    cout<<"The total is"<<sum<<endl;
    cout<<"1"<<endl;
	return 0;
}