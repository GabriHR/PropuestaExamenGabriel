#include <iostream>
#include <cmath>
using namespace std;
int main(){
    for (int a=1;a<=17;a++){
        for(int b=a+1;b<=17;b++){
            double c = sqrt(a*a +b*b);

            if(c == (int)c) {
                int c_int=(int)c;

                if(a+b>c_int){
                    cout<<a<<"-"<<b<<"-"<<c_int<<endl;

                }
            }
        }

    }

    return 0;
}