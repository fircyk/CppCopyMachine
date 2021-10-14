#include <iostream>
#include <fstream>
#include <cstdlib>


using namespace std;

int main() {
    
	//file with names to replace the source file
	ifstream list("file.txt");
	string name;

	while(!list.eof()){
		getline(list, name);
    		//replace file1 with proper path of the file to be copied
		ifstream source("file1.ext", ios::binary);
		//provide extennsion
    		ofstream dest(name + ".ext", ios::binary);

   		dest << source.rdbuf();
	}
    	source.close();
    	dest.close();

   

    return 0;
}