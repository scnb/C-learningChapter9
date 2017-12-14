#include <string>
//创建两个名称空间
namespace pers
{
	struct Person
	{
		std::string fname;
		std::string lname;
	};
	void getPerson(Person & rp);//引用不是指针
	void showPerson(const Person & rp);
}

namespace debts
{
	using namespace pers;//因为要用到pers名称空间中的结构或函数，所以需要适应using编译指令
	struct Debt
	{
		Person name;
		double amount;
	};
	void getDebt(Debt & rd);//引用不是指针
	void showDebt(const Debt & rd);
	double sumDebts(const Debt ar[], int n);
}
