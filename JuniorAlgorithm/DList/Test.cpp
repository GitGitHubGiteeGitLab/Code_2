#define _CRT_SECURE_NO_WARNINGS
#include "DList.h"


int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);//程序退出时检测内存泄漏并显示到“输出”窗口

	DList<int> d1;
	//d1.pop_back();
	//d1.pop_front();
	d1.display();
	d1.push_back(2);
	d1.display();
	d1.push_back(3);
	d1.display();
	d1.push_front(4);
	d1.push_front(5);
	d1.display();
	DNode<int>* dnode = d1.find(4);
	if (dnode != nullptr) {
		std::cout << "Address(dnode(4)): " << dnode << std::endl;
	}
	d1.insert(dnode, 1);
	d1.display();
	d1.pop_back();
	d1.display();
	d1.pop_back();
	d1.display();
	d1.pop_front();
	d1.display();
	d1.pop_front();
	d1.display();
	d1.pop_front();
	d1.display();
	d1.push_back(1);
	d1.push_back(2);
	d1.push_back(3);
	d1.push_back(4);
	d1.push_back(5);
	dnode = d1.find(3);
	d1.display();
	if (dnode != nullptr) {
		d1.erase(dnode);
		d1.display();
	}
	d1.~DList();
	return 0;
}