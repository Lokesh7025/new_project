#include <iostream>
using namespace std;
class object{
    public:
    int x;
    int operator ()(int y){
        return y*x;
    }
};
int main(){
    object a(2);
    for(int i=0;i<5;i++){
        cout<<a(i)<<endl;
    }
    return 0;
    cout<<"WHAT ARE YOU DOING"
}
