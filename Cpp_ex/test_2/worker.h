#ifndef WOKER_H
#define WOKER_H

#include <iostream>
#include <string>
#include <pthread.h>

class woker{
public:
    virtual void showInfo() = 0;
    virtual std::string getDeptName() = 0;
private:
    unsigned m_Id; // 职工Id
    std::string name; // 职工姓名
    unsigned m_DepId; // 职工所在部门编号
};


#endif