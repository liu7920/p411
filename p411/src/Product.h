/*
 * Product.h
 *
 *  Created on: 2018. 10. 18.
 *      Author: daum
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_

#include <iostream>
#include <string>
using namespace std;

class Product {
	int ID; //식별자 id
	string Explanation; //상품 설명
	string producer; //생산자
	int price;

public:
	Product();
	virtual ~Product();

	Product(int ID,string Explanation,string producer,int price) {
		this->ID=ID;
		this->Explanation=Explanation;
		this->producer=producer;
		this->price=price;
	}

	int getID(){
		return ID;
	}
	string getEx(){
		return Explanation;
	}
	string getpr(){
		return producer;
	}
	int getpri(){
		return price;
	}
};

#endif /* PRODUCT_H_ */
