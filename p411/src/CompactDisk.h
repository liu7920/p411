/*
 * CompactDisk.h
 *
 *  Created on: 2018. 10. 18.
 *      Author: daum
 */

#ifndef COMPACTDISK_H_
#define COMPACTDISK_H_

#include <iostream>
#include <string>
#include "Product.h"

using namespace std;

class CompactDisk : public Product{
	string title; //앨범 제목
	string singer; //가수 이름

public:
	CompactDisk(int ID, string Explanation, string producer, int price, string title, string singer) : Product(ID,Explanation,producer,price){
		this->title=title;
		this->singer=singer;
	}

	CompactDisk();

	virtual ~CompactDisk();
	void print(){
		cout << "--- 상품ID : " << getID() << endl;
		cout << "상품설명 : " << getEx() << endl;
		cout << "생산자 : " << getpr() << endl;
		cout << "가격 : " << getpri() << endl;
		cout << "앨범제목 : " << this->title << endl;
		cout << "가수 : " << this->singer << endl;
	}

};

#endif /* COMPACTDISK_H_ */
