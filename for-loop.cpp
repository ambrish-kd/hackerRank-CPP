// For loop - HackerRank
// Link to Problem:- https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem


// Approach-1 :- Using if-else with for loop
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    for (int i = a; i<=b; i++) {
        if(i > 9){
            if(i%2==0)
                cout<<"even"<<endl;
            else
                cout<<"odd"<<endl;
        }
        else{
            if(i==1)
                cout<<"one"<<endl;
            if(i==2)
                cout<<"two"<<endl;
            if(i==3)
                cout<<"three"<<endl;
            if(i==4)
                cout<<"four"<<endl;
            if(i==5)
                cout<<"five"<<endl;
            if(i==6)
                cout<<"six"<<endl;
            if(i==7)
                cout<<"seven"<<endl;
            if(i==8)
                cout<<"eight"<<endl;
            if(i==9)
                cout<<"nine"<<endl;
        }
    }
    return 0;
}

// Approach-2:- Using map to store these english representation

// map<int, string> numbers = {{1,"one"}, {2,"two"}, {3,"three"}, {4,"four"}, {5,"five"}, {6,"six"}, {7,"seven"}, {8,"eight"}, {9,"nine"}};
