#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
using namespace std;


int main() {
    
    int innerArr;
    int noOfQuery;
    cin>>innerArr>>noOfQuery;
    vector<int>v[innerArr];
    for(int i=0;i<innerArr;i++){
        int eleInArr;
        cin>>eleInArr;
        for(int j=0;j<eleInArr;j++){
            int elmnts;
            cin>>elmnts;
            v[i].push_back(elmnts);
        }
    }
    int l,m;
    for(int k=0;k<noOfQuery;k++){
        cin>>l>>m;
        cout<<v[l][m]<<endl;
        
    }

    return 0;
}
