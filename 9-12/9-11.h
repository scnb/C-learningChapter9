#include <string>
//�����������ƿռ�
namespace pers
{
	struct Person
	{
		std::string fname;
		std::string lname;
	};
	void getPerson(Person & rp);//���ò���ָ��
	void showPerson(const Person & rp);
}

namespace debts
{
	using namespace pers;//��ΪҪ�õ�pers���ƿռ��еĽṹ������������Ҫ��Ӧusing����ָ��
	struct Debt
	{
		Person name;
		double amount;
	};
	void getDebt(Debt & rd);//���ò���ָ��
	void showDebt(const Debt & rd);
	double sumDebts(const Debt ar[], int n);
}
