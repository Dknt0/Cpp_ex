#ifndef MAILLIST_H
#define MAILLIST_H

#include <iostream>
#include <string>
#include <vector>
#include "Person.h"

class MailList{
public:
    MailList() = default;
    void addPerson();
    void showPerson();
    void findPerson();
    void deletePerson();
    void modifyPerson();
    void cleanPerson();
private:
    std::vector<Person> list;
    unsigned total_number{0};
};

/**
 * 在通讯录中增加联系人
*/
void MailList::addPerson(){
    Person man;
    list.push_back(man.write_Person());
    total_number++;
}

/**
 * 显示全部联系人信息
*/
void MailList::showPerson(){
    for(auto man:list){
        man.print();
    }
}

/**
 * 根据名字查找联系人
*/
void MailList::findPerson(){
    std::string name;
    std::cout << "请输入姓名:" << std::endl;
    std::cin >> name;
    for(const auto &man:list){
        if(man.isPerson(name.c_str())){
            man.print();
            return;
        }
    }
    std::cout << "通讯录中无\"" << name << "\"" << std::endl;
    this->showPerson();
}

/**
 * 根据名字删除联系人
*/
void MailList::deletePerson(){
    std::string name;
    std::cout << "请输入姓名:" << std::endl;
    std::cin >> name;
    for(auto man = list.begin();man != list.end();man++){
        if(man->isPerson(name.c_str())){
            std::cout << "已删除\"" << name << "\"" << std::endl;
            list.erase(man);
            total_number--;
            return;
        }
    }
    std::cout << "通讯录中无\"" << name << "\"" << std::endl;
    this->showPerson();
}

/**
 * 修改联系人信息
*/
void MailList::modifyPerson(){
    std::string name;
    std::cout << "请输入姓名:" << std::endl;
    std::cin >> name;
    for(auto &man:list){
        if(man.isPerson(name.c_str())){
            std::cout << "修改联系人\"" << name << "\"" << std::endl;
            man.write_Person();
            std::cout << "修改成功" << std::endl;
            return;
        }
    }
    std::cout << "通讯录中无\"" << name << "\"" << std::endl;
    this->showPerson();
}

/**
 * 清空通讯录
*/
void MailList::cleanPerson(){
    list.clear();
    std::cout << "通讯录已清空" << std::endl;
}

#endif