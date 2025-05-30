#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream read("a.txt");
    string file_content;
    //syntax for using the getline() method:
    //getline(object,string);
    getline(read,file_content);
    cout<<"the first line contains: "<<endl;
    cout<<file_content<<endl;
    //read.close();

    //To print all the lines, we need to make use of some loop
    ifstream show("a.txt");
    string all_lines;
    cout<<"the file contains: "<<endl;
    while(getline(show,all_lines)){
        cout<<all_lines<<endl;
    }
    read.close();

    //to print the first character of the file
    ifstream fin("a.txt");;
    char letter;
    fin.get(letter);
    cout<<"the first letter of the file is: "<<letter;
    fin.close();

    //we can use any word to make an object, Ex:write, out,fout,fwrite,w

    ofstream out("a.txt");
    out.put('G'); //Adding the single character to the file using put method
    out<<"ood Morning!";
    out.close();
}