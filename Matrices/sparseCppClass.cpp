#include <iostream>
#include <stdio.h>
using namespace std;

class Element{

    public:
         int i;
         int j;
         int x;
};

class Sparse{

    private:
         int m;
         int n;
         int num;
         Element *e;

    public:
         Sparse(int m, int n, int num){

            this->m = m;
            this->n = n;
            this->num = num;
         }     
};