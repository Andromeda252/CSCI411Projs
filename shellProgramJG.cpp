#include <iostream>
#include <string>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sstream>

using namespace std;

int main() {
    string input;
    fstream history;
    history.open("historyFile.txt", ios::in);
    cout << "InsertFunnyPromptHere:\\$";
    //Get the line, if = myprocess, call getpid, else, system(fjnifs)
    getline(cin, input);
    history << input << endl;
    if (input == "myprocess") {
        system("ps -u");
    }
    else if (input == "allprocesses") {
        system("ps -a");
    }
    else if (input.substr(0, 4) == "chgd") { //Take up to first space -> command, param
        string command;
        string params;
        stringstream inputstream(input);
        inputstream >> command >> params;
        system("chdir(params.c_str())");
    }
    else if (input == "clr") {
        system("clear");
    }
    else if (input == "dir") {
        system("ls");
    }
    else if (input == "environ") {
        system("env");
    }
    else if (input == "quit") {
        history.close();
        history.open("historyFile.txt", ios::out);
        string content;
        while(getline(history, content)) {
            cout << content;
        }
        system("quit");
    }
    else if (input == "help") {
        system("help"); //cout functions for YOUR shell 
    }
    else {
        system("input.c_str()");
    }
}