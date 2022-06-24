


#pragma once
#include "analyze.h"
//#include "suanshufenxi.h"

int main(){
	
	analyze an;

	an.stCifa();//开始进行词法分析
	an.show();//输出词法分析的结果
	cout << "\n\n\n";

	an.showiden();//输出标识符表
	cout << "\n\n\n";

	an.shownum();//输出常数表
	cout << "\n\n\n";

	cout << "分析栈如下：\n（状态栈      符号栈       动作）";

	an.stYufa();//开始进行语法分析

	an.show4exp();//输出中间代码


	//suanshufenxi bn;//分析算术表达式的，平时的上机实验2
	//bn.stCifa();//开始进行词法分析
	//bn.stYufa();//开始进行语法分析

	//system("explorer / select, E:\\hizengbiao2");
	//system("explorer / select, E:\\hizengbiao2\\a.txt");
	//system("explorer / select, E:\\hizengbiao2\\b.txt");
	//system("explorer / select, E:\\hizengbiao2\\c.txt");
	
	return 0;
}


//测试用例1，测试if,else控制语句
//if (x > y){
//	if (a){
//		m = m + 1;
//	}
//	else{
//		if (b){
//			m = m * 2;
//		}
//		else{
//			m = 3;
//		}
//		
//	}
//}
//else{
//	x = y;
//}


//测试用例2，测试while循环语句
//while (a < b){
//	while (x>y){
//		c = 9;
//	}
//	y = 4;
//	z = 45;
//}



//测试用例3，测试布尔语句
//if ((c<a) && b || (c != 8)){
//			m = m + 1;
//}
//else
//{
//	n = 45;
//}


//测试用例4，测试算术表达式语句

//if (a){
//	b = (c + 2)*(d + 4 + (e + 6 * f));
//}
//else{
//	g=((hd + e) * 3 + 42;
//}

//测试用例5，综合测试
//while (a || b){
//	if (x < y){
//		while (c&&d){
//			k = k + 1;
//		}
//	}
//	else{
//		if (m < n&&k < q){
//			m = k;
//		}
//		else{
//			while (m != k){
//				m = m + 1;
//			}
//		}
//	}
//}

//测试用例6，布尔表达式错误测试
//if (<=9){
//			m = m + 1;
//}
//else
//{
//	n = 45;
//}

//测试用例7，算术表达式错误测试1
//if (a<=9){
//			m=1 + 2 + (*3 + 4);
//}
//else
//{
//	n = 45;
//}

//测试用例8，算术表达式错误测试2
//if (a<=9){
//			m = m ++ 1;
//}
//else
//{
//	 n=7 + () + 3;
//}

//测试用例9，程序语句错误测试



//if (a<=9){
//			m = m +1;
//}
//else
//{
//	else
//	{
//		n = 45;
//	}
//}








//其他：
//if (a < b){
//	x = 3;
//}
//else{ y = 3; }

//4.5
//if (x > y){
//	if (a&&b){
//		m = m + 1;
//	}
//	else{
//		m = m - 1;
//	}
//}
//else{
//	x = y;
//}

//4.9
//


