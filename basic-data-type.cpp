// Basic Data type - HackerRank
// Link to problem:- https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long l;
    char c;
    float f;
    double d;
    
    // we can use C functions, input and output methods in C++
    scanf("%d %ld %c %f %lf", &a,&l,&c,&f,&d);
    printf("%d\n%ld\n%c\n%f\n%lf", a,l,c,f,d);
    
    return 0;
}
