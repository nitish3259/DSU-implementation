//EXAMPLE IMPLEMENTATION

#include<iostream>
using namespace std;
#include <vector>
#include"DSU.h"


int main(){
    DSU myDSU(4);
    myDSU.MakeSet();
    myDSU.MakeSet();
    myDSU.Union(1,2);
    myDSU.Union(4,3);
    cout<<myDSU.Find(5);
}
