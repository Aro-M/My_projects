#include <iostream>
#include <fstream>
class Person
{
public:
    void add_data();
    void new_add();
    void edit_add(std::string str,int index);
private:
    std::string id;
    std::string name;
    std::string surname;
    std::string date_of_birth;
    std::string number;
    std::string email;
};

void text(std::string sst, std::ifstream& file, int index);
void search_text(std::string str, std::ifstream& _file, int x);
void list(std::ifstream& fail);
void search(std::ifstream& fail, std::string id, bool true_false);
void delete_(std::ifstream& fail, std::string id);
void edit(std::string str, std::ifstream& fail,int index, std::string id);

Person obj;
int main()
{
    std::ifstream data_all;
    std::string id;
    Person a;
    int value;
    do
    {
    std::cout << "[1] Add a new Contact \n[2] List all Contact \n[3] Search for contact \n[4] Edit a Contact \n[5] delete a Contact \n[0] Exit \n "<< std::endl;
    std::cin >> value;
    switch(value)
    {
        case 1:
            a.add_data();
            a.new_add();
            break;
        case 2:
            list(data_all);
            break;
        case 3:
            std::cout << "id..." << std::endl;
            std::cin >> id;
            search(data_all, id,true);
            id = "";
            break;
        case 4:
            std::cout << "edit id contact... " << std::endl;
            std::cin >> id;
            search(data_all, id,false);
            id = "";
            break;
        case 5:
            std::cout << "delete id... " << std::endl;
            std::cin >> id;
            delete_(data_all,id);
            id = "";
            break;
        case 0:
            break;
    }
    }while(value != 0);
}
void list(std::ifstream& fail)
{
    int index = 1;
    std::ifstream data_all;
    char str[1000];
    data_all.open("data_all.txt");
    while(!data_all.eof()){
        data_all.getline(str,1000);
        if(str == " "){
            std::cout << "exit";
            exit(0);
        }
        text(str, data_all, index);
        ++index;
        if(index == 7) {
            index = 1;
        }
    }
    std::cout << std::endl;
}
void search(std::ifstream& fail, std::string id, bool true_false)
{
    int count = 1;
    bool true_ = false;
    bool _true = true;
    std::ifstream data_all;
    char data[1000];
    data_all.open("data_all.txt");
    while(!data_all.eof()){
        data_all.getline(data,1000);
        if(data == id) {
            true_ = true;
            _true = false;
        }
        if(true_ && count != 7 && true_false) {
            search_text(data,data_all,count);
            ++count;
        }
        if(true_ && count != 7 && true_false == false) {
            edit(data,data_all,count, id);
            ++count;
        }
    }
    if(_true) {
        std::cout << "not id... " << std::endl;
    }
}
void Person::add_data()
{
    std::cout << "Person id... " << std::endl;
    std::cin >> id;
    std::cout << "Person name... " << std::endl;
    std::cin >> name;
    std::cout << "Person surname... " << std::endl;
    std::cin >> surname;
    std::cout << "date_of_birth... " << std::endl;
    std::cin >> date_of_birth;
    std::cout << "Person number (exp.xxx-xx-xx-xx)... " << std::endl;
    std::cin >> number;
    std::cout << "Person email... " << std::endl;
    std::cin >> email;
}
void Person::new_add()
{
    std::ofstream write;
    write.open("data_all.txt",std::ios::app);
    write << id << std::endl;
    write << name << std::endl;
    write << surname << std::endl;
    write << date_of_birth << std::endl;
    write << number << std::endl;
    write << email;
    write.close();
}
void delete_(std::ifstream& fail,std::string id) {
    int count = 1;
    bool true_ = false;
    std::ofstream write;
    write.open("all_data.txt",std::ios::app);
    std::ifstream data_all;
    char tm[1000];
    data_all.open("data_all.txt");
    while(!data_all.eof()){
        data_all.getline(tm,1000);
        if(tm == id) {
            true_ = true;
        }
        if(true_ && count != 7) {
            ++count;
            continue;
        }
        write << tm << std::endl;
    }
    write.close();
    data_all.close();
    remove ("data_all.txt");
    rename ("all_data.txt","data_all.txt");
}
void search_text(std::string str, std::ifstream& _file,int x)
{
    if(str == ""){
        return;
    }
    switch(x){
        case 1:
            std::cout << " id... "  << str << std::endl;
            break;
        case 2:
            std::cout << " name... " << str << std::endl;
            break;
        case 3:
            std::cout << " surname... " << str << std::endl;
            break;
        case 4:
            std::cout << " date_of_birth... " << str << std::endl;
            break;
        case 5:
            std::cout << " number... " << str << std::endl;
            break;
        case 6:
            std::cout << " email... " << str << std::endl;
            break;
    }
}
void text(std::string str, std::ifstream& file, int index)
{
    std::cout << str << std::endl;
}
void edit(std::string str, std::ifstream& fail,int index, std::string id)
{
    std::string str1;
    obj.edit_add(str, index);
    if(index == 6) {
        delete_(fail, id);
        int value;
        do
        {
            std::cout << "edit a contact\nid[1]\nname[2]\nsurname[3]\ndate_of_birth[4]\nnumber[5]\nemail[6]\nexit[0]" << std::endl;
      std::cin >> value;
      switch(value){
          case 1:
              std::cin >> str1;
              obj.edit_add(str1,value);
              str1 = "";
              break;
          case 2:
              std::cin >> str1;
              obj.edit_add(str1,value);
              str1 = "";
              break;
          case 3:
              std::cin >> str1;
              obj.edit_add(str1,value);
              str1 = "";
              break;
          case 4:
              std::cin >> str1;
              obj.edit_add(str1,value);
              str1 = "";
              break;
          case 5:
              std::cin >> str1;
              obj.edit_add(str1,value);
              str1 = "";
              break;
          case 6:
              std::cin >> str1;
              obj.edit_add(str1,value);
              str1 = "";
              break;
          case 0:
              break;
      }
    }while(value != 0);
    obj.new_add();
    }
}
void Person::edit_add(std::string str,int index)
{
    switch(index){
        case 1:
            id = str;
            break;
        case 2:
            name = str;
            break;
        case 3:
            surname = str;
            break;
        case 4:
            date_of_birth = str;
            break;
        case 5:
            number = str;
            break;
        case 6:
            email = str;
            break;
    }
}

