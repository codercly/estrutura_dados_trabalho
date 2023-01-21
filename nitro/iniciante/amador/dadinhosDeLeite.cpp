    #include<iostream>
    using namespace std;

    int main(){
        int n, c, d, cost;

        while(cin >> n >> c >> d){
        
            if(n != 0 && c != 0 && d != 0){
                cout << n * c * d << endl;
               
            }else{
                break;
            }
            
        }
        
        return 0;
    }