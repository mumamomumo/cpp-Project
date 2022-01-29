#include <iostream>
#include <vector>
using namespace std;

int main()
{
    return 0;
    int num;
    vector< int > test = {1, 1};
    cout << "Hello world!" << endl;
    for(int i = 0; i<test.size();i++){
        cout<<"Add number?"<<endl;
        cin>>num;
        if(num != false){
            test.push_back(num);
        }
        else{
            break;
        }
    }
     cout << "test = { ";
    for (int n : test) {
        cout << n << ", ";
    }
    cout << "}; \n";

}
