#include <iostream>
#include <fstream>

#include "ArgumentManager.h"

using namespace std;

int main(int argc, char* argv[]){

    ArgumentManager am(argc, argv);

    //ifstream input(am.get("input.txt"));
    //ofstream output(am.get("output.txt"));

    ifstream input("input1.txt");

    string lineRead;
    int counter;

    while(getline(input, lineRead)){

    }

    return 0;
}
