#include <stdio.h>
#include <iostream>

#include "lvTestD1.h"

using namespace std;

const char* test();

int main(void) {
#line 1 //"haha"
	
	//cout << __FILE__ << endl;
	//cout << __LINE__ << endl;
	//cout << __DATE__ << endl;
	//cout << __TIME__ << endl;
	//cout << __cpluscplus << endl;
	//int a?;
	//cout << test() << endl;

	int ret = 5;
	DBGDUMP("ret=%d\n", ret);

	return 0;
}

const char* test() {
	return __func__;
}