//���ϸ�: structEx1.c

#include"myheader.h"

struct �ֹε���� {

	char name[30];
	char idNumber[30];
	char address[50];
	int date;
	char auth[30];
};

struct ���ϸ��� {
	char Ÿ��[30];
	double Ű;
	char �з�[30];
	char ����[10]; 
	double ������;
	char Ư��[30];
	char �̸�[30];
};

//��Ű�� ���Ӹ���� ���ؼ� 
// ��Ű���� ������ ���ִ� �������� Ÿ����
// �����. 
struct ��Ű�� {
	char name[50];
	char grade;
	int hp;  
	char attr[50];
};


int main(void) {

	//���� ����
	struct ��Ű�� cook1;

	// �̸� ����
	// cook1.name = "ũ����������Ű";
	strcpy(cook1.name,"ũ����������Ű");

	cook1.grade = 'S';
	cook1.hp = 160;
	//cook1.attr = "������ȯ8��";
	strcpy(cook1.attr, "������ȯ8��");

	printf("�̸�:%s ���: %d\n"
		, cook1.name, cook1.hp);

	// ����� ȸ�������� ����!

	// ����ü
	//   - Ÿ���� �ٸ� �������� ����

	// ȫ�浿�ϴ� ����� ������ �����ϴ�
	// �迭�� �����ϱ� 

	// ����� ���ÿ� �ʱ�ȭ �����ϴ�.
	struct �ֹε���� person1 = {
		"ȫ�浿","123456-7891011"
		,"����Ư���� ������",
		20150122,"���ﱸû��"
	};
	
	printf("�̸�:%s\n", person1.name);
	printf("�ּ�:%s\n", person1.address);

	struct ���ϸ��� ���α�;

	printf("�̸�->Ű->�з�->����->������->Ư��");
	scanf_s("%s %lf %s %s %lf %s",
		&���α�.�̸�, sizeof(���α�.�̸�),
		&���α�.Ű,
		&���α�.�з�, sizeof(���α�.�з�),
		&���α�.����, sizeof(���α�.����),
		&���α�.������,
		&���α�.Ư��, sizeof(���α�.Ư��));

	printf("�̸�:%s Ű:%.1f\n"
			,���α�.�̸�,���α�.Ű);


	// �迭 
	//   - ���� Ÿ������ �������� ������
	//    �����Ѵ�.

	// ������ �����ϴ� ���� 3���� ������.
	int arr[3];



	return 0;
}