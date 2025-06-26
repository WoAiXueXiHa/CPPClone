//#include "Show.h"
//// 函数定义
//void Stack::Init(int n) {
//	_arr = (int*)malloc(sizeof(int) * n);
//	if (_arr == nullptr) {
//		perror("申请空间失败");
//		return;
//	}
//	_capacity = n;
//	_top = 0;
//}
//
//void Stack::Push(int input) {
//	if (_top == _capacity) {
//		size_t _newcapacity = 2 * sizeof(int);
//		int* tmp = (int*)realloc(_arr, _newcapacity * sizeof(int));
//		if (tmp == nullptr) {
//			perror("realloc() err!");
//			return;
//		}
//		_arr = tmp;
//		_capacity = _newcapacity;
//	}
//	_arr[_top++] = input;
//}
//
//int Stack::Top() {
//	assert(_top > 0);
//	return _arr[_top - 1];
//}
//
//void Stack::Destroy() {
//	free(_arr);
//	_arr = nullptr;
//	_top = _capacity = 0;
//}
