#include <iostream>
#include <fstream>
#include <algorithm>
#include <stack>

#include "ArgumentManager.h"

using namespace std;

string removeReversePar(string line, int length){       //ngl copied from leetcode solution XD
    stack<char> stack;
    string sorted;

    for(int i = 0; i < line.length(); i++){
        if(line.at(i) != ')'){
            stack.push(line.at(i));
        }else{
            string temp;
            while(!stack.empty() && stack.top() != '('){
                temp += stack.top();
                stack.pop();
            }

            if(!stack.empty() && stack.top() == '(')
                stack.pop();

            for(int x = 0; x < temp.length(); x++){
                stack.push(temp.at(x));
            }
        }
    }

    while(!stack.empty()){
        sorted += stack.top();
        stack.pop();
    }

    reverse(sorted.begin(), sorted.end());

    return sorted;
}

int main(int argc, char* argv[]){

    ArgumentManager am(argc, argv);

    //ifstream input(am.get("input.txt"));
    //ofstream output(am.get("output.txt"));

    ifstream input("input1.txt");

    string lineRead;
    int counter, numConv, parIndex;

    while(getline(input, lineRead)){        //says only linked list is required for recursion
        lineRead.erase(remove(lineRead.begin(), lineRead.end(), '\n'), lineRead.end());
        lineRead.erase(remove(lineRead.begin(), lineRead.end(), '\r'), lineRead.end());

        if(lineRead == "Bar1" || lineRead == "Bar2" || lineRead.empty()){
            continue;
        }else{
            if(lineRead.find("(") >= 0 && lineRead.find(")") > 0){
                lineRead = removeReversePar(lineRead, lineRead.length());
                cout<< lineRead<<endl;
            }else{
                numConv = stoi(lineRead);
                cout<< numConv<<endl;
                //add it into the list itself as list.add(stoi(lineRead));
            }
        }
    }

    return 0;
}
