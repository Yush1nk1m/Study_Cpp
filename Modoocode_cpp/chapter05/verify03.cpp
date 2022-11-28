/* p.108 */

#include <string.h>
#include <iostream>

class string {
    private :
        char* str;
        int len;

    public :
        string(char c, int n);
        string(const char* s);
        string(const string& s);
        ~string();

        void add_string(const string& s);       // paste 's' after str
        void copy_string(const string& s);      // copy 's' to str
        int strlen() const;       // return length
};

int string::strlen() const {
    return len;
}

void string::add_string(const string& s) {
    if (len) {
        char* temp = new char[len];
        strcpy(temp, str);
        delete[] str;
        str = new char[len + s.strlen() + 1];
        strncpy(str, temp, len);
        strncpy(str + len, s.str, s.strlen());
        len += s.strlen();
    } else {
        len = s.strlen();
        str = new char[s.strlen() + 1];
        strcpy(str, s.str);
    }
}

void string::copy_string(const string& s) {
    len = s.strlen();
    str = new char[s.strlen() + 1];
    strcpy(str, s.str);
}

string::string(char c, int n) {
    str = new char[n + 1];
    len = n;
    for (int i = 0; i < n; i++) str[i] = c;
}

string::string(const char* s) {
    len = ::strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
}

string::string(const string& s) {
    len = s.strlen();
    str = new char[len + 1];
    strcpy(str, s.str);
}

string::~string() {
    if (str) delete[] str;
}