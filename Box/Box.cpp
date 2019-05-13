//
// Created by Amey on 12-05-2019.
//

#include "Box.h"

typedef vector<vector<int>> Matrix;
typedef vector<int> Row;

void twoDMatrix(){
    int n,q;
    cin>>n>>q;

    Matrix matrix;
    for(int i=0;i<n;i++){
        Row row;
        int k;
        cin>>k;
        for(int j=0;j<k;j++){
            int temp;
            cin>>temp;
            row.push_back(temp);
        }
        matrix.push_back(row);
    }

    cout<<matrix[1][1]<<endl;
}



