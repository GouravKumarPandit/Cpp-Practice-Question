#include<iostream>
using namespace std;

template <class tem> 
tem add(tem x,tem y){     //Example of template
    return (x+y);
}

int main(){
    cout<<add(4,5)<<endl;
    cout<<add(4.4,5.5)<<endl;
    return 0;
}


