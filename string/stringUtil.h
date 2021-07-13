/*
    主要实现对字符串分割的工具类
*/

#include<string>
#include<vector>

class StringUtil{
private:
    StringUtil() = delete;
    ~StringUtil() = delete; 
    StringUtil(const StringUtil& rhs) = delete;
    StringUtil& operator=(const StringUtil& rhs) = delete;
    // 禁止编译器自动生成 构造函数、析构函数、拷贝构造函数 和 operator= 
    // 一般工具类都会禁止，防止编译器自动生成，同时减小生成的可执行文件的体积

public:
    static void split(const std::string& str, std::vector<std::string>& v, const char* delimiter = "|");

    static void cut(const std::string& str, std::vector<std::string>& v, const char* delimiter = "|");

    static std::string& replace(std::string& str, const std::string& toReplaced, const std::string& newStr);


    static void trimLeft(std::string& str, char trimmed = ' ');

    static void trimRight(std::string& str, char trimmed = ' ');

    static void tirm(std::string& str, char trimmed = ' ');

};