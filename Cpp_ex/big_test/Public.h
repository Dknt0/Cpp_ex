#ifndef PUBLIC_H
#define PUBLIC_H

#include <iostream>
#include <string>
#include <vector>

inline void stars();// 输出一行*
void showMenu();// 显示目录

/**
 * 输出一行* 用于分隔
*/
inline void stars(){
    std::cout << "************************" << std::endl;
}

/**
 * 显示选择目录
*/
void showMenu(){
    stars();
    std::cout << "****  1.新建联系人  ****" << std::endl;
    std::cout << "****  2.显示联系人  ****" << std::endl;
    std::cout << "****  3.删除联系人  ****" << std::endl;
    std::cout << "****  4.查找联系人  ****" << std::endl;
    std::cout << "****  5.修改联系人  ****" << std::endl;
    std::cout << "****  6.清空联系人  ****" << std::endl;
    std::cout << "****  0.退出系统    ****" << std::endl;
    stars();
}

#endif