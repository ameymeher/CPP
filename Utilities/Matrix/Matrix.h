//
// Created by Amey on 16-05-2019.
//

#ifndef SAMPLEPROJECT_MATRIX_H
#define SAMPLEPROJECT_MATRIX_H

#include <iostream>
#include <vector>

using namespace std;

template<typename indexType, typename valueType>
class Matrix {

    private:
        indexType rows;
        indexType columns;
        vector<vector<valueType>> matrix;

    public:

        Matrix(){

        }

        Matrix(indexType rows, indexType columns){
            this->rows = rows;
            this->columns = columns;
            matrix.resize(rows,vector<valueType>(columns));
        }

        void setMatrix(){
            std::cout<<"Enter the data:"<<std::endl;
            for(int i=0;i<rows;i++){
                for(int j=0;j<columns;j++){
                    valueType number;
                    std::cin>>number;
                    matrix[i][j] = number;
                }
            }
        }

        void setMatrix(indexType rows, indexType columns){

            this->rows = rows;
            this->columns = columns;
            matrix.resize(rows,vector<valueType>(columns));

            std::cout<<"Enter the data:"<<std::endl;
            for(int i=0;i<rows;i++){
                for(int j=0;j<columns;j++){
                    valueType number;
                    std::cin>>number;
                    matrix[i][j] = number;
                }
            }
        }
        void printMatrix(){
            for(int i=0;i<rows;i++){
                for(int j=0;j<columns;j++){
                    cout<<matrix[i][j]<<" ";
                }
                std::cout<<std::endl;
            }
        }

        const vector<vector<valueType>> &getMatrix() const {
            return matrix;
        }
};

void testMatrix();

#endif //SAMPLEPROJECT_MATRIX_H
