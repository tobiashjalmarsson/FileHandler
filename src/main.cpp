#include <iostream>
#include "File.hpp"
using namespace std;
// ctrl+shift+b to build
// run through debugger in terminal tab
int main(){
    cout << "test" << endl;
    File f(false, "test", "test");
    f.addFile(false, "test");
    return 0;
}
