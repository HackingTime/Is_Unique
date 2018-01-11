#include <iostream>
#include <string>

using namespace std;

string let;

bool isUnique(string s){
    let = "";
    bool ans = true;
    int y = s.length();
    for(int x=0;x<y;x++){
        for(int v=x+1; v<y;v++){
            if(s[x] == s[v]){
                if(let.length() == 0) let = let+s[x];
                else let = let+", "+s[x];

            }

        }
    }
    //return ans;
    //cout<<"true"<<endl;
    if(let.length() == 0) return true;
    else return false;
}

int main()
{
    cout<<"Press Ctl + C to Exit"<< endl;
    while(true){
        string in;

        cout<<"Input string to be tested for repetitions: ";
        cin>>in;
        bool uni = isUnique(in);
        if(uni == 1){
        cout<<"No repetitions detected!"<<endl;
        }
        else cout<<"Repetitions detected: "+ let<<endl;

    }
    return 0;
}
