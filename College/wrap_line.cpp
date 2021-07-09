#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int width, spaceCount = 0, widthCount = 0;
    string line,i;
    stringstream ss;
    ifstream myfile ("sample3.txt");
    if (myfile.is_open())
    {
        while ( getline(myfile,line) )
        {
        ss << line;
        }
        myfile.close();
    }
    s = ss.str();
    cout << "Enter the width: ";
    cin >> width;
    for(auto i=0; i!=s.size(); i++){
        if(width==widthCount){
            if(s[i]==' '){
                s[i]='\n';
            }
            else if(s[i+1]==' '){
                s[i+1]='\n';
                i=i+1;
            }
            else{
                s[spaceCount]='\n';
                i=spaceCount+1;
            }
            widthCount = 0;
        }
        if(s[i] == ' '){
            spaceCount = i;
        }
        widthCount++;
    }
    ofstream file ("output.txt");
    if (file.is_open())
    {
        file << s;
        file.close();
    }
    for(auto &i: s){
        cout << i;
    }
    return 0;
}