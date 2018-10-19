/*
 * Book.h
 *
 *  Created on: 2018. 10. 18.
 *      Author: daum
 */

#ifndef BOOK_H_
#define BOOK_H_

#include "Product.h"
#include <iostream>
#include <string>
using namespace std;


class Book : public Product{
	string isbn; //isbn번호
	string author; //저자
	string booktitle; //책제목
public:
	Book();
	virtual ~Book();
	Book(int ID,string Explanation,string producer,int price,string booktitle,string author,string isbn):Product(ID,Explanation,producer,price){
		this->isbn=isbn;
		this->author=author;
		this->booktitle=booktitle;
	}

	void print(){
		cout << "--- 상품ID : " << getID() << endl;
		cout << "상품설명 : " << getEx() << endl;
		cout << "생산자 : " << getpr() << endl;
		cout << "가격 : " << getpri() << endl;
		cout << "ISBN : " << this->isbn << endl;
		cout << "책제목 : " << this->booktitle << endl;
		cout << "저자 : " << this->author << endl;
	}

	string getis(){
		return isbn;
	}
	string getau(){
		return author;
	}
	string getbo(){
		return booktitle;
	}

};

#endif /* BOOK_H_ */
