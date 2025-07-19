#include<iostream>
using namespace std;

int main(){
    int savings;
    cout<<"Enter your savings\n";
    cin>>savings;

    if(savings>5000){
        cout<<"Roadtrip"<<endl;
        if(savings>10000){
            cout<<"Roadtrip to Ladakh";
        }
        else if(savings<10000){
            cout<<"Roadtrip to Goa";
        }
    }
    else{
        cout<<"Shopping";
    }
    return 0;
}
