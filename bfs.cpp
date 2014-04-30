//codificado por Ciro Garcia - David Dager - Camilo Neiva

#include<map>
#include<iostream>
#include<queue>
using namespace std;

#define mpi(it,table) for(map<int,int>::iterator it = table.begin();it!=table.end();++it)

int main(){

    queue<int> nodes;
    while(!nodes.empty()){
        int nx = nodes.front();
        nodes.pop();
        cout<<nx<<endl;
    }
    cout<<"LOL"<<endl;
    return 0;
}

