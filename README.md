### Competitive-Programming
##### Variable sized Array / Vectors
1. Consider an n-element array, a, where each index  in the array contains a reference to an array of Ki integers (where the value of Ki varies from array to array). See the Explanation section below for a diagram.

Given a, you must answer q queries. Each query is in the format i j, where i  denotes an index in array a and j denotes an index in the array located at a[i]. For each query, find and print the value of element j in the array at location a[i] on a new line.
**Input Format**
The first line contains two space-separated integers denoting the respective values of n (the number of variable-length arrays) and  (the number of queries).
Each line i of the n subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 … a[i]k-1 describing the k-element array located at a[i].
Each of the q subsequent lines contains two space-separated integers describing the respective values of i  (an index in array a) and j (an index in the array referenced by a[i] ) for a query.
**Output Format**
For each pair of i and j values (i.e., for each query), print a single integer that denotes the element located at index j of the array referenced by a[i]. There should be a total of q lines of output.
**Sample Input**
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
**Sample Output**
5
9

**Solution**
<code>

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
} ;

</code>
