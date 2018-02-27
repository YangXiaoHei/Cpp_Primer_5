//
//  main.cpp
//  Ch2_Studying
//
//  Created by YangHan on 2018/2/26.
//  Copyright © 2018年 YangHan. All rights reserved.
//

#include <iostream>
#include "Tool.hpp"

using namespace std;

/**
 *  C++标准规定的尺寸的最小值
 
    bool        未定义
    char        8 bit
    wchar_t     16 bit
 
    char16_t    16 bit
    char32_t    32 bit  ---> 为 Unicode 字符集服务
 
    short       16 bit
    int         16 bit  ---> int 至少和 short 一样大
 
    long        32 bit
    long long   64 bit  ---> long 至少和 int 一样大
                        ---> long long 至少和 long 一样大
    float       6 位有效数字
    double      10 位有效数字
    long double 10 位有效数字
 
 */



void displayCurrentBits() {
    cout << (sizeof(bool) << 3) << endl;
    cout << (sizeof(char) << 3) << endl;
    cout << (sizeof(wchar_t) << 3) << endl;
    cout << (sizeof(char16_t) << 3) << endl;
    cout << (sizeof(char32_t) << 3) << endl;
    cout << (sizeof(short) << 3) << endl;
    cout << (sizeof(int) << 3) << endl;
    cout << (sizeof(long) << 3) << endl;
    cout << (sizeof(long long) << 3) << endl;
    cout << (sizeof(float) << 3) << endl;
    cout << (sizeof(double) << 3) << endl;
    cout << (sizeof(long double) << 3) << endl;
}

/**
 *  含有无符号类型的表达式
 
 */
void unsignedAndSigned() {
    unsigned u = 10;
    int i = -42;
    cout << "i      =   "; int_binary_str(i);
    cout << "u      =   "; int_binary_str(u);
    cout << "i + u  =   "; int_binary_str(u + i);
    cout << "i + u  =   " << i + u << endl;
    
    cout << endl;
    
    unsigned u1 = 42, u2 = 10;
    cout << "u2       =   "; int_binary_str(u2);
    cout << "u1       =   "; int_binary_str(u1);
    cout << "u2 - u1  =   "; int_binary_str(u2 - u1);
    cout << "u2 - u1  =   " << u2 - u1 << endl;
}

/**
 *  转义序列
 */
void escapeSequence() {
    cout << "Hi \x4dO\115!\n";
    /**
     *  \x 后跟着 1 或多个 十六进制数字
        或者 \ 后跟着 1, 2, 3 个八进制数字
     */
    cout << "\1234" << endl;
    // 如果反斜线后面跟着的八进制数字超过 3 个，只有前3个数字与 \ 构成转义序列
}

void literal() {
    /**
     
        字符和字符串字面量
     
     *  u   Unicode 16 字符           char16_t
        U   Unicode 32 字符           char32_t
        L   w宽字符                    char_t
        u8  UTF-8(仅用于字符串字面量)    char
     
     
        整型字面量
     
        u or U
        l or L
        ll or LL
     
        浮点型字面值
     
        f or F   float
        l or L   long double
     */
    
}

int main(int argc, const char * argv[]) {
    escapeSequence();
    return 0;
}