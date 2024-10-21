#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<pair<int, int>> v = {{1,2}, {3,4}, {5,8}};

    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;

    for (int i = 0; i < v.size(); i++){
        sum3 = v[i].second;
    }

    cout << sum3 << endl;

    for (auto n:v){
        sum1 += n.first;
        sum2 += n.second;
    }

    cout << sum1 << endl;
    cout << sum2 << endl;

    return 0;
}