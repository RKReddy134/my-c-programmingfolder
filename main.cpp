#include <iostream>
using namespace std;

int main() 
{

    int a,x,y,z;
    cin >> a;
    while(a--){
        cin >> x >> y >> z;
        if(y==1 && z==1)cout << "NO\n";
        else if(y==2 && z==1){
            if(x%2==0){
                cout << "YES\n" << x/2 << endl;
                for(int i=0;i<x/2;i++)cout << "2 ";
                cout << endl;
            }
            else cout << "NO\n";
        }
        else if(z==1){
            if(x%2==0){
                cout << "YES\n" << x/2 << endl;
                for(int i=0;i<x/2;i++)cout << "2 ";
                cout << endl;
            }
            else if(x%3==0){
                cout << "YES\n" << x/3 << endl;
                for(int i=0;i<x/3;i++)cout << "3 ";
                cout << endl;
            }
            else{
                
                cout << "YES\n" << x/2 << endl << "3 ";
                for(int i=0;i<x/2;i++)cout << "2 ";
                cout << endl;
            }
        }
        else if(z>1){
            cout << "YES\n" << x << endl;
            for(int i=0;i<x;i++)cout << "1 ";
            cout << endl;
        }
    }
}
