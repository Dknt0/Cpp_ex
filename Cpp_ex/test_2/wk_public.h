#ifndef WK_PUBLIC_H
#define WK_PUBLIC_H

#include <iostream>

// 显示菜单
void Show_Menu(){
    std::cout << "********************************************" << std::endl;
	std::cout << "*********  欢迎使用职工管理系统！ **********" << std::endl;
	std::cout << "*************  0.退出管理程序  *************" << std::endl;
	std::cout << "*************  1.增加职工信息  *************" << std::endl;
	std::cout << "*************  2.显示职工信息  *************" << std::endl;
	std::cout << "*************  3.删除离职职工  *************" << std::endl;
	std::cout << "*************  4.修改职工信息  *************" << std::endl;
	std::cout << "*************  5.查找职工信息  *************" << std::endl;
	std::cout << "*************  6.按照编号排序  *************" << std::endl;
	std::cout << "*************  7.清空所有文档  *************" << std::endl;
	std::cout << "********************************************" << std::endl;
	std::cout << std::endl;
}

// 退出系统
void exitSystem(){
    std::cout << "退出系统。" << std::endl;
    exit(0);
}

#endif