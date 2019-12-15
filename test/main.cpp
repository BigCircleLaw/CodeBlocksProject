#include <iostream>
#include <string>
using namespace std;
/**
 * �����ࣺStudent
 * ���ݳ�Ա��m_strName
 * �޲ι��캯����Student()
 * �вι��캯����Student(string _name)
 * �������캯����Student(const Student& stu)
 * ����������~Student()
 * ���ݳ�Ա������setName(string _name)��getName()
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
    // module_obj_content_t *self=MP_OBJ_TO_PTR(self_in);  //�ӵ�һ����������ȡ�������ָ��
    // self->value1=100;
    // self->value2=mp_obj_get_int(data);    //�ӵڶ�����������ȡ��������ֵ
	return NULL;  //���ؼ���Ľ��
}
int main(void)
{
    mp_rom_obj_t aa = (void *)module_do_update_value;
    // ͨ��new��ʽʵ��������*stu
    Student *stu = new Student();
    // ���Ķ�������ݳ�ԱΪ��Ľ������
	stu->setName("Ľ����");
    // ��ӡ��������ݳ�Ա
	cout<<stu->getName()<<endl;
	return 0;
}
