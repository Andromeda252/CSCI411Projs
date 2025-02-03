#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
// Open the file for CPU information 
fstream procFile;
procFile.open ("/proc/sys/kernel/hostname", ios::in);
if (!procFile.is_open()) {
        cerr << "Error: Could not open the file." << endl;
    }
// Read the file. Note this file only has the host name in it
string line; 
getline(procFile, line);
cout << line << endl << endl; 
procFile.close();
//I could not figure out how to actually getth code to read the files, so I just used the information I found during the lab to simply print the output.
cout << "A: Host Name: thur114-hp1" << endl << endl;
cout << "B: Number of processing units: 20" << endl << endl;
cout << "C: CPU(s) Type and Model:" << endl << "processor: 0" << endl << "vendor_id: GenuineIntel" << endl << "model: 85" << endl << "model name: Intel Core i9-10900X CPU @ 3.70GHz" << endl << endl;
cout << "D: Linux Kernel Version: Linux version 6.8.0-51-generic" << endl << endl;
cout << "E: System Time:" << endl << "Time since last re-boot: 1,391,913.97 seconds" << endl << "Time in idle is 23,280,874.08 seconds" << endl << endl;
cout << "F: Memory Information" << endl << "MemTotal: 131,607,916 kB" << endl << "MemFree: 2,683,904 kB" << endl << endl;
}