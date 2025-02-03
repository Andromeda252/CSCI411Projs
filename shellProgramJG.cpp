#include <iostream>
#include <string>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main() {
    string input;
    cout << "InsertFunnyPromptHere:\\$";
    //Get the line, if = myprocess, call getpid, else, system(fjnifs)
    getline(cin, input);
    if (input == "myprocess") {
        system("ps -u");
    }
    else if (input == "allprocesses") {
        system("ps -a");
    }
    else if (input == "chgd") {
        system("chgd");
    }
    else if (input == "clr") {
        system("clr");
    }
    else if (input == "dir") {
        system("dir");
    }
    else if (input == "environ") {
        system("environ");
    }
    else if (input == "quit") {
        system("quit");
    }
    else if (input == "help") {
        system("help");
    }
    else {
        system(input.c_str());
    }
}