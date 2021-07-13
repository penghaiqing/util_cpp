#include"stringUtil.h"
#include<string.h>



// 移除 string str中，左边的 trimmed 元素，此时 trimmed 为 空格
void StringUtil::trimLeft(std::string& str, char trimmed){ // trimmed = ' '
    std::string tmp = str;
    size_t len = tmp.length();
    for(size_t i=0; i<len; ++i){
        if(tmp[i] != trimmed){
            str = tmp.substr(i); // get from pos = i to the end
            break;
        }
    }
}

// 移除 string str中，右边的 trimmed 元素，此时 trimmed 为 空格
void StringUtil::trimRight(std::string& str, char trimmed){
    std::string tmp = str;
    size_t len = tmp.length();
    for(size_t i = len - 1; i>=0; --i){
        if(tmp[i] != trimmed){
            str = tmp.substr(0, i + 1); // get from pos = 0, and len = i+1 substring
            break;
        }
    }
}