#include <iostream>
using namespace std;

int main() {
   int n;
    long long a=1,b=1;
    cin >> n;
        for (int i=0; i<n; i++){
            if(i<n && a<=n){
                cout << a << endl;
               if (n==1){
                cout << a << endl;
            }
                }
            i++;
            if(i<n && b<=n){
                cout << b << endl;
                }
            a+=b;
            b+=a;
        }
   return 0;
}
