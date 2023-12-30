#pragma once
#include<iostream>
#include<assert.h>

/*
	类模板的成员函数定义与声明必须放在同一个文件中
*/
/*
	当实例化一个模板时，编译器必须看到模板确切的定义，而不仅仅是它的声明。
	因此，最好的办法就是将模板的声明和定义都放置在同一个头文件（.h）中。
	这就是为什么所有的STL头文件都包含模板定义的原因。
*/
template <typename T>
struct DNode {
	T data;
	DNode<T>* prev;
	DNode<T>* next;
};

template <typename T>
DNode<T>* getNewDNode(const T& e) {
	DNode<T>* node = new DNode<T>;
	node->data = e;
	node->prev = nullptr;
	node->next = nullptr;
	return node;
}

template <typename T>
class DList {
private:
	DNode<T>* _head;
	int _len;

public:
	DList();
	~DList();
		
	void insert(DNode<T>* pos, const T& e);
	void push_front(const T& e);
	void push_back(const T& e);
		
	void erase(DNode<T>* pos);
	void pop_front();
	void pop_back();
	void display();
	DNode<T>* find(const T& e);
};
template<typename T>
DList<T>::DList() {
	_head = new DNode<T>;
	_head->prev = _head;
	_head->next = _head;
	_len = 0;
	std::cout << "DList()" << std::endl;
}

template<typename T>
DList<T>::~DList() {
	if (_head == nullptr) {
		return;
	}
	DNode<T>* node = _head->next;
	while (node != _head) {
		DNode<T>* tmp = node->next;
		delete node;
		node = tmp;
	}
	delete _head;
	_head = nullptr;
	_len = 0;
	std::cout << "~DList()" << std::endl;
}

template<typename T>
void DList<T>::insert(DNode<T>* pos, const T& e) {
	DNode<T>* posPrev = pos->prev;
	DNode<T>* node = getNewDNode(e);
	node->next = pos;
	node->prev = posPrev;
	posPrev->next = node;
	pos->prev = node;
}

template<typename T>
void DList<T>::push_front(const T& e) {
	/*DNode<T>* first = _head->next;
	DNode<T>* node = getNewDNode(e);
	node->next = first;
	node->prev = _head;
	_head->next = node;
	first->prev = node;*/
	insert(_head->next, e);
}

template<typename T>
void DList<T>::push_back(const T& e) {
	/*DNode<T>* tail = _head->prev;
	DNode<T>* node = getNewDNode(e);
	node->prev = tail;
	node->next = _head;
	tail->next = node;
	_head->prev = node;*/
	insert(_head, e);
}

template<typename T>
DNode<T>* DList<T>::find(const T& e) {
	if (_head == _head->next) {
		return nullptr;
	}
	DNode<T>* node = _head->next;
	while (node != _head) {
		if (node->data == e) {
			return node;
		}
		else {
			node = node->next;
		}
	}
	return nullptr;
}

template<typename T>
void DList<T>::pop_back() {
	/*assert(_head != _head->next);
	DNode<T>* tail = _head->prev;
	DNode<T>* tailPrev = tail->prev;
	tailPrev->next = _head;
	_head->prev = tailPrev;
	delete tail;
	tail = nullptr;*/
	erase(_head->prev);
}

template<typename T>
void DList<T>::pop_front() {
	/*assert(_head != _head->next);
	DNode<T>* first = _head->next;
	DNode<T>* second = first->next;
	_head->next = second;
	second->prev = _head;
	delete first;*/
	erase(_head->next);
}

template<typename T>
void DList<T>::erase(DNode<T>* pos) {
	assert(pos);
	assert(_head != _head->next);
	DNode<T>* posPrev = pos->prev;
	DNode<T>* posNext = pos->next;
	posPrev->next = posNext;
	posNext->prev = posPrev;
	delete pos;
}

template<typename T>
void DList<T>::display() {
	std::cout << "hnode";
	DNode<T>* node = _head->next;
	while (node != _head) {
		std::cout << "<->" << node->data;
		node = node->next;
	}
	std::cout << "<->hnode" << std::endl;
}



