//
// Created by Amey on 12-05-2019.
//

#ifndef SAMPLEPROJECT_BOX_H
#define SAMPLEPROJECT_BOX_H
#include<bits/stdc++.h>
using namespace std;

class Box{

private:
    long l,b,h;

public:
    Box(){
        this->l = 0;
        this->b = 0;
        this->h = 0;
    }

    Box(int l, int b, int h){
        this->l = l;
        this->b = b;
        this->h = h;
    }

    Box(Box &b){
        this->l = b.l;
        this->b = b.b;
        this->h = b.h;
    }

    int getLength(){
        return l;
    }

    int getBreadth(){
        return b;
    }

    int getHeight(){
        return h;
    }

    long long CalculateVolume(){
        return l*b*h;
    }

    bool operator <(Box &b){
        if(l < b.l){
            return true;
        }
        else if(l == b.l && this->b < b.b){
            return true;
        }
        else if(l == b.l && this->b == b.b && h < b.h){
            return true;
        }
        else{
            return false;
        }
    }

    friend ostream &operator<<(ostream &output, const Box &b) {
        output << b.l << " " << b.b << " " << b.h;
        return output;
    }
};

void twoDMatrix();
#endif //SAMPLEPROJECT_BOX_H
