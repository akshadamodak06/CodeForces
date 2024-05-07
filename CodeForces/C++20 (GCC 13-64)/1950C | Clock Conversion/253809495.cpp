#include <iostream>
using namespace std;
 
int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int h, m;
        char c;
        cin >> h >> c >> m;
        int hr = h;
        if(h==0){
            h=24;
            hr=24;
        }
        if(h>12){
            h = h-12;
        }
        if(hr<12 || hr==24){
            if(h<10){
                if(m<10){
                    cout << 0 << h << c << 0 << m << " " << "AM" << endl;
                }
                else{
                    cout << 0 << h << c << m << " " << "AM" << endl;
                }
            }
            else if(m<10){
                if(h<10){
                    cout << 0 << h << c << 0 << m << " " << "AM" << endl;
                }
                else{
                    cout << h << c << 0 << m << " " << "AM" << endl;
                }
            }
            else{
                cout << h << c << m << " " << "AM" << endl;
            }
        }
        else{
            if(h<10){
                if(m<10){
                    cout << 0 << h << c << 0 << m << " " << "PM" << endl;
                }
                else{
                    cout << 0 << h << c << m << " " << "PM" << endl;
                }
            }
            else if(m<10){
                if(h<10){
                    cout << 0 << h << c << 0 << m << " " << "PM" << endl;
                }
                else{
                    cout << h << c << 0 << m << " " << "PM" << endl;
                }
            }
            else{
                cout << h << c << m << " " << "PM" << endl;
            }
        }
    }
    return 0;
}