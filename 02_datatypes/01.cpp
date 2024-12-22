//datatype:
// **bool	1	true or false
// **char	1	-128 to 127 (signed) or 0 to 255 (unsigned)
// signed char	1	-128 to 127
// unsigned char	1	0 to 255
// short	2	-32,768 to 32,767
// unsigned short	2	0 to 65,535
// **int	4	-2,147,483,648 to 2,147,483,647
// unsigned int	4	0 to 4,294,967,295
// long	4 or 8	Depends on the system: 32-bit (4 bytes) or 64-bit (8 bytes)
// unsigned long	4 or 8	Depends on the system
// long long	8	-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
// unsigned long long	8	0 to 18,446,744,073,709,551,615
// **float	4	Approximately ±3.4e-38 to ±3.4e+38
// **double	8	Approximately ±1.7e-308 to ±1.7e+308
// long double	8, 12, or 16	Depends on the compiler and platform
#include<iostream>
#include<string>

using namespace std;

int main() {
    int y = 1;
    cout << y;
    cout << endl;
    float x = 4.1;
    cout << x;
     cout << endl;
    char v = 'a';
    cout << v;
     cout << endl;
    string a = "akash";
    cout << a;
     cout << endl;
    bool boolean = true;
    cout << boolean;
    cout << endl;
     


//for cin the first space after input is considerd as null character so avoid that and print all string we use  getline
string myuser;
// cin >> myuser;
cout << "enter your name: ";
getline(cin,myuser);
cout << "your name is: " << myuser;
}