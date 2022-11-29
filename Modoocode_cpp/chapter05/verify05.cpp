/* p.178 q1. */
MyString& MyString::erase(int loc, int num) {
    if (num < 0 || loc < 0 || loc > string_length || num > string_length - loc) return *this;

    for (int i = loc + num; i < string_length; i--) {
        string_content[i - num] = string_content[i];
    }

    string_length -= num;
    return *this;
}