// File.cpp
#include "File.hpp"
#include<iostream>
using namespace std;
// Default constructor
File::File(bool isFolder, string location, string name){
    isFolder = isFolder;
    location = location;
    name = name;
    subFiles;
}


// addFile - Insert a file into the current file, has to be a folder
int File::addFile(bool isFolder, string name)
{
    std::cout << "Addinaaaag File" << endl;
    return 0;
}

// deleteFile - Prompt user if it is a folder for confirmation

int File::deleteFile(string name)
{
    return 0;
}

// printFiles - Display filestructure

void File::printFiles()
{
    cout << "printing files" << endl;
}