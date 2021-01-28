/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    //cout<<"Hello World";
    vector<char> ch;
    vector<char>::iterator it;
    
    string k = "pendyala";
    
    char c;
    char *p = &c;
    for (int i = 0; i < k.length(); i++)
    {
        it = std::find (ch.begin(), ch.end(), k.at(i)); 
    
        if (it != ch.end()) 
        { 
            
        } 
        else
        {
            ch.push_back(k[i]);
        }
    }
     
     
    for (int i = 0; i < ch.size(); i++)       
    {
        cout << ch[i] << endl;
    }
    /*cout << "before " << endl;
    for (int i = 0; i < ch.size(); i++)
    {
        cout << ch[i];
    }
    ch.push_back('k');
    ch.push_back('k');
    ch.push_back('k');
    ch.push_back('k');
    for (int i = 0; i < ch.size(); i++)
    {
        cout << ch[i];
    }*/                       
    return 0;
}
