//
// Created by Amey on 17-05-2019.
//

#ifndef SAMPLEPROJECT_MATRIXGRAPH_H
#define SAMPLEPROJECT_MATRIXGRAPH_H


#include "../../../Utilities/Matrix/Matrix.h"

template <typename valueType>
class MatrixGraph {

    private:
        Matrix<unsigned int, valueType> graph;

    public:

        MatrixGraph(){

        }

        MatrixGraph(int vertices){
            graph.setMatrix(vertices,vertices);
        }

        void setGraph(int vertices){
            graph.setMatrix(vertices,vertices);
        }
};

void testMatrixGraph();

#endif //SAMPLEPROJECT_MATRIXGRAPH_H
