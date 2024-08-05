//파일명: structEx1.c

#include"myheader.h"

struct 주민등록증 {

	char name[30];
	char idNumber[30];
	char address[50];
	int date;
	char auth[30];
};

struct 포켓몬스터 {
	char 타입[30];
	double 키;
	char 분류[30];
	char 성별[10]; 
	double 몸무게;
	char 특성[30];
	char 이름[30];
};

//쿠키런 게임만들기 위해서 
// 쿠키들을 저장할 수있는 공통적인 타입을
// 만든다. 
struct 쿠키런 {
	char name[50];
	char grade;
	int hp;  
	char attr[50];
};


int main(void) {

	//변수 생성
	struct 쿠키런 cook1;

	// 이름 저장
	// cook1.name = "크랜베리맛쿠키";
	strcpy(cook1.name,"크랜베리맛쿠키");

	cook1.grade = 'S';
	cook1.hp = 160;
	//cook1.attr = "상태전환8단";
	strcpy(cook1.attr, "상태전환8단");

	printf("이름:%s 목숨: %d\n"
		, cook1.name, cook1.hp);

	// 깃허브 회원가입을 진행!

	// 구조체
	//   - 타입이 다른 변수들의 묶음

	// 홍길동하는 사람의 정보를 저장하는
	// 배열을 선언하기 

	// 선언과 동시에 초기화 가능하다.
	struct 주민등록증 person1 = {
		"홍길동","123456-7891011"
		,"서울특별시 강남구",
		20150122,"서울구청장"
	};
	
	printf("이름:%s\n", person1.name);
	printf("주소:%s\n", person1.address);

	struct 포켓몬스터 꼬부기;

	printf("이름->키->분류->성별->몸무게->특성");
	scanf_s("%s %lf %s %s %lf %s",
		&꼬부기.이름, sizeof(꼬부기.이름),
		&꼬부기.키,
		&꼬부기.분류, sizeof(꼬부기.분류),
		&꼬부기.성별, sizeof(꼬부기.성별),
		&꼬부기.몸무게,
		&꼬부기.특성, sizeof(꼬부기.특성));

	printf("이름:%s 키:%.1f\n"
			,꼬부기.이름,꼬부기.키);


	// 배열 
	//   - 같은 타입으로 여러개의 변수를
	//    생성한다.

	// 정수를 저장하는 변수 3개를 묶었다.
	int arr[3];



	return 0;
}