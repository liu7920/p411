#include <iostream>
#include <string>
using namespace std;

#include "ConversationBook.h"
#include "CompactDisk.h"

int main() {

	int i,p=0,l=0,m=0;
	int id=0,price;
	string str1,str2,str3,str4,str5, isbn;
	ConversationBook *b = new ConversationBook[100];
	Book *k = new Book[100];
	CompactDisk *d = new CompactDisk[100];

	cout << "***** 상품 관리 프로그램을 작동합니다 *****" << endl;
	while(1){
		cout << "상품 추가(1), 모든 상품 조회(2), 끝내기(3) ? "<< endl;
		cout << "입력 : ";
		cin >> i;
		if(i==1){
			if(p+l==100){
				cout << "더이상 상품을 등록할 수 없습니다." << endl;
			}
			else{
				cout << "상품 종류 책(1), 음악CD(2), 회화책(3) ? " <<endl;
				cout << "입력 : ";
				cin >> i;
				if(i==1){
					cout << "상품설명>>";
					cin >> str1;
					cout << "생산자>>";
					cin >> str2;
					cout << "가격>>";
					cin >> price;
					cout << "책제목>>";
					cin >> str3;
					cout << "저자>>";
					cin >> str4;
					cout << "ISBN>>";
					cin >> isbn;
					Book B(id,str1,str2,price,str3,str4,isbn);
					k[m]=B;
					m++;
					id++;
				}
				else if(i==2){
					cout << "상품설명>>";
					cin >> str1;
					cout << "생산자>>";
					cin >> str2;
					cout << "가격>>";
					cin >> price;
					cout << "앨범제목>>";
					cin >> str3;
					cout << "가수>>";
					cin >> str4;
					CompactDisk D(id, str1, str2, price, str3, str4);
					d[p]=D;
					p++;
					id++;
				}
				else if(i==3){
					cout << "상품설명>>";
					cin >> str1;
					cout << "생산자>>";
					cin >> str2;
					cout << "가격>>";
					cin >> price;
					cout << "책제목>>";
					cin >> str3;
					cout << "저자>>";
					cin >> str4;
					cout << "언어>>";
					cin >> str5;
					cout << "ISBN>>";
					cin >> isbn;
					ConversationBook B(id,str1,str2,price,str3,str4,str5,isbn);
					b[l]=B;
					l++;
					id++;
				}
				else{
					cout << "잘못된 입력" << endl;
				}
			}
		}
		else if(i==2){
			for(int q=0; q<m; q++){
				k[q].print();
			}
			for(int q=0; q<p; q++){
				d[q].print();
			}
			for(int q=0; q<l; q++){
				b[q	].print();
			}
		}
		else if(i==3){
			cout <<"종료" << endl;
			break;
		}
		else{
			cout << "잘못된 입력" << endl;
		}
	}
	return 0;
}
