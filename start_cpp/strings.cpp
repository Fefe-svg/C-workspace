#include <iostream>
using namespace std;
 int main() {
    string a = "monika";
    string b = "rana";
    // string concatenation 
    string c = a+b;
    string d = a.append(b);
    string e = "It is a \"sunny\" day today";
    string f = "It\'s ok";
    cout << c << endl;
    cout << d << endl;
    //we can use both length and size it's upto us
    cout << c.length() << endl;
    cout << c.size() << endl;
    //access characters in string by using their indices under square bracket
    cout << c[4] << endl;
    //special character
    // put forward slash before what special charater you want
    cout << e << endl;
    cout << f << endl;

    

    return 0;

 }

 //only string+string, int+int, not string+ing