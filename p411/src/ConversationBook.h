/*
 * ConversationBook.h
 *
 *  Created on: 2018. 10. 18.
 *      Author: daum
 */

#ifndef CONVERSATIONBOOK_H_
#define CONVERSATIONBOOK_H_

#include "Book.h"
#include <iostream>
#include <string>
using namespace std;

class ConversationBook : public Book {
	string language; //언어
public:
	ConversationBook(int ID, string Explanation, string producer, int price, string booktitle, string author, string language, string isbn) : Book(ID,Explanation,producer,price,booktitle,author,isbn){
		this->language=language;
	}
	ConversationBook();
	virtual ~ConversationBook();

	void print(){
		cout << "--- 상품ID : " << getID() << endl;
		cout << "상품설명 : " << getEx() << endl;
		cout << "생산자 : " << getpr() << endl;
		cout << "가격 : " << getpri() << endl;
		cout << "ISBN : " << getis() << endl;
		cout << "책제목 : " << getbo() << endl;
		cout << "저자 : " << getau() << endl;
		cout << "언어 : " << this->language << endl;
	}
};

#endif /* CONVERSATIONBOOK_H_ */
