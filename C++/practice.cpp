#include<bits/stdc++.h> 

using namespace std;

struct gurbaaz{
    int myNum;
    string myString;

    int add(int x, int y){
        return x+y;
    }
};

int main(){
    cout<<"Hello"<<endl;
    gurbaaz x={1,"Gill"};
    cout<<x.myNum<<endl<<x.myString<<endl;
    cout<<x.add(5,6)<<endl;
    return 0;
}