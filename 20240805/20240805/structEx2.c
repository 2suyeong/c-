//파일명: structEx2.c

#include"myheader.h"

//구조체 만들기
struct Phone {
	char phoneName[30];
	int price;
	char phoneNumber[30];
};

struct Pizza {
	char name[30];
	int price;
	int deliveryTime;
};

// 피자 정보를 출력하는 함수
void pizzaInfo(struct Pizza p) {

	printf("이름:%s\n",p.name);
	printf("사이즈 가격:%d\n", p.price);
	printf("배달시간:%d\n", p.deliveryTime);

}


struct Student {

	char stuName[30];
	int stuKor;
	int stuEng;
	int stuMath;
	int total;
};

// 총점을 구하는 함수 
int stuTotal(struct Student stu) {
	stu.total = stu.stuKor +
		stu.stuEng +
		stu.stuMath;
	// 계산한 결과를 정수타입으로 
	// 원본에 저장하기 main안에있는 
	// 학생변수에 저장하기
	return stu.total;
}

// 함수의 매개변수로 데이터를 전달할 때 
// 두가지 방법이있다.
// 1. 값에 의한 복사! call-by-value

void stuShow(struct Student stu) {
	printf("이름: %s\n", stu.stuName);
	printf("국어: %d\n", stu.stuKor);
	printf("수학: %d\n", stu.stuMath);
	printf("영어: %d\n", stu.stuEng);
	printf("총점: %d\n", stu.total);
}


int main(void) {

	//학생 변수 두개 만들기
	struct Student stu1 = { "홍길동",100,50,20 };
	struct Student stu2 = { "둘리",60,80,90 };

	int num;
	//printf("num:%d\n", num);
	// 총점 구하기
	// 원래 c언어에서는 변수를 만들고 
	// 처음 값을 집어넣지 않으면 쓰레기값이
	// 들어있다. 

	// 구조 장점 
	//   - 안에 만들어진 변수들을 자동으로
	//     초기화해준다. int 0
	//             double 0.0
	//             char ''
	printf("총점:%d\n", stu1.total);

	stu1.total = stuTotal(stu1);
	stu2.total = stuTotal(stu2);

	stuShow(stu1);
	stuShow(stu2);


	struct Pizza pizza1 = {"피자콜드",700,15};
	struct Pizza pizza2 = { "미스에스피자",500,25 };

	pizzaInfo(pizza1);
	pizzaInfo(pizza2);

	printf("두 피자를 모두 구매:%d\n",
		  pizza1.price + pizza2.price);

	if (pizza1.deliveryTime <
		pizza2.deliveryTime) {
		printf("%s\n", pizza1.name);
	}
	else {
		printf("%s\n", pizza2.name);
	}

	
	/*struct Phone phone1 = {
		"스마트폰",800,"010-1212-1212"
	};

	printf("%s\n",phone1.phoneName);
*/

	return 0;
}