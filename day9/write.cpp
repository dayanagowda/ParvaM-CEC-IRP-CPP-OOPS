#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //we type define the write object from the ofstream class
    ofstream write("a.txt"); //opening the file & writing in the file using write object
    write<<"Good Morning Students, "<<endl; 
    write<<"We shall work on File Handling! "<<endl; 
    write.close(); //closing the file after writing
    
    ofstream fout("b.txt");
    fout<<"written in the file using another user-defined object: fout ";
    fout.close();

    //we can use any word to make an object,ex:write , out,fout,fwrite,w

    ofstream out("a.txt");
    out.put('G'); //Adding the single character to the file using put method
    out<<"ood Morning!";
    out.close();
}