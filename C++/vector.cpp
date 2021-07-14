#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> vect{{5},{6,4},{2}};
    vect.push_back({89,53,43});
    vect.push_back({65,43,34});
    cout<<vect.size()<<endl;
    for (int i=0; i<vect.size();i++){
        for (int j=0; j<vect.at(i).size();j++)
        cout << vect.at(i).at(j) << " ";
    }
    cout<<"\n"<<sizeof(vect.at(0).at(0))<<endl;

    int * ptr_int;
    int * ptr_int2;
    int * ptr_int3;

    int i{1};
    while(true){
        ptr_int= new int[1000];
        ptr_int2= new int[1000];
        ptr_int3= new int[1000];
        cout<<i<<endl;
        i++;
    }
    return 0;
}