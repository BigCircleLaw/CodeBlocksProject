#include <iostream>
#include <string>
using namespace std;
/**
 * 定义类：Student
 * 数据成员：m_strName
 * 无参构造函数：Student()
 * 有参构造函数：Student(string _name)
 * 拷贝构造函数：Student(const Student& stu)
 * 析构函数：~Student()
 * 数据成员函数：setName(string _name)、getName()
 */

class Student
{
    private:
    string m_strName;
    public:
    Student():m_strName("")
    {}
    Student(string _name)
    {
        m_strName = _name;
    }
    Student(const Student& stu)
    {
        m_strName = stu.m_strName;
    }
    ~Student()
    {
       m_strName = "";
    }
    void setName(string _name)
    {
        m_strName = _name;
    }
    string getName()
    {
        return m_strName;
    }
};
typedef const void *mp_const_obj_t;
typedef mp_const_obj_t mp_rom_obj_t;
void* module_do_update_value(void* self_in) {
    // module_obj_content_t *self=MP_OBJ_TO_PTR(self_in);  //从第一个参数里面取出对象的指针
    // self->value1=100;
    // self->value2=mp_obj_get_int(data);    //从第二个参数里面取出整型数值
	return NULL;  //返回计算的结果
}
int main(void)
{
    mp_rom_obj_t aa = (void *)module_do_update_value;
    // 通过new方式实例化对象*stu
    Student *stu = new Student();
    // 更改对象的数据成员为“慕课网”
	stu->setName("慕课网");
    // 打印对象的数据成员
	cout<<stu->getName()<<endl;
	return 0;
}
