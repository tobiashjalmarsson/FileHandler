// File.hpp
#include <string>
#include <vector>
using namespace std;
#ifndef FILE_CPP
#define FILE_CPP

/*
Structure to manage the files/folders, folders will be a type of file that can point to another subset of files
*/


class File {
    private:
        bool isFolder;
        string location;
        string name;
        vector<File> subFiles;
    
    public:
        File(bool isFolder, string location, string name);
        int addFile(bool isFolder, string name);
        int deleteFile(string name);
        void printFiles();
};


#endif