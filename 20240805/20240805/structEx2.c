//���ϸ�: structEx2.c

#include"myheader.h"

//����ü �����
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

// ���� ������ ����ϴ� �Լ�
void pizzaInfo(struct Pizza p) {

	printf("�̸�:%s\n",p.name);
	printf("������ ����:%d\n", p.price);
	printf("��޽ð�:%d\n", p.deliveryTime);

}


struct Student {

	char stuName[30];
	int stuKor;
	int stuEng;
	int stuMath;
	int total;
};

// ������ ���ϴ� �Լ� 
int stuTotal(struct Student stu) {
	stu.total = stu.stuKor +
		stu.stuEng +
		stu.stuMath;
	// ����� ����� ����Ÿ������ 
	// ������ �����ϱ� main�ȿ��ִ� 
	// �л������� �����ϱ�
	return stu.total;
}

// �Լ��� �Ű������� �����͸� ������ �� 
// �ΰ��� ������ִ�.
// 1. ���� ���� ����! call-by-value

void stuShow(struct Student stu) {
	printf("�̸�: %s\n", stu.stuName);
	printf("����: %d\n", stu.stuKor);
	printf("����: %d\n", stu.stuMath);
	printf("����: %d\n", stu.stuEng);
	printf("����: %d\n", stu.total);
}


int main(void) {

	//�л� ���� �ΰ� �����
	struct Student stu1 = { "ȫ�浿",100,50,20 };
	struct Student stu2 = { "�Ѹ�",60,80,90 };

	int num;
	//printf("num:%d\n", num);
	// ���� ���ϱ�
	// ���� c������ ������ ����� 
	// ó�� ���� ������� ������ �����Ⱚ��
	// ����ִ�. 

	// ���� ���� 
	//   - �ȿ� ������� �������� �ڵ�����
	//     �ʱ�ȭ���ش�. int 0
	//             double 0.0
	//             char ''
	printf("����:%d\n", stu1.total);

	stu1.total = stuTotal(stu1);
	stu2.total = stuTotal(stu2);

	stuShow(stu1);
	stuShow(stu2);


	struct Pizza pizza1 = {"�����ݵ�",700,15};
	struct Pizza pizza2 = { "�̽���������",500,25 };

	pizzaInfo(pizza1);
	pizzaInfo(pizza2);

	printf("�� ���ڸ� ��� ����:%d\n",
		  pizza1.price + pizza2.price);

	if (pizza1.deliveryTime <
		pizza2.deliveryTime) {
		printf("%s\n", pizza1.name);
	}
	else {
		printf("%s\n", pizza2.name);
	}

	
	/*struct Phone phone1 = {
		"����Ʈ��",800,"010-1212-1212"
	};

	printf("%s\n",phone1.phoneName);
*/

	return 0;
}