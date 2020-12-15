#include<iostream>
using namespace std;

int main(){
    int x;
    int odd =0;
    int even =0;
    while(x!=0){
        cout << "Enter an integer: ";
        cin >> x;
        if (x%2==0){
            if (x!=0){
            even+=1;
            }
        }else{
            odd+=1;
        }
    }
    cout << "#Even numbers = " <<even <<"\n";
    cout << "#Odd numbers = " <<odd;
    return 0;
}
