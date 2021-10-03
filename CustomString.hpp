#pragma once

namespace custom_string
{
    class MyString
    {
    public:
        MyString(const char *s);
        MyString(const MyString &other);
        MyString();
        ~MyString();
    private:
        char *mChar;
        unsigned int mSize;
    };
}