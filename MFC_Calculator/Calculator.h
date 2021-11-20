#pragma once

#include <stack>
#include <vector>
#include <string>
using namespace std;


//��������
class Calculator
{
public:
	Calculator();
	void calculate(string infix);		//���㷽��
	void getFormat(string infix);		//���ʽ�Զ����׼��ʽ��
	int getPrior(char c);				//��ȡ�����������ȼ�
	void getPostfix();					//��׺���ʽת��
	void calResult();					//������
	double getResult();					//��ȡ���
	//string getErrorImfo();				//��ȡ�쳣��Ϣ
	string operatorSym;					//�������

private:
	vector<string> postfix;				//��׺���ʽ����
	stack<char> symStack;				//����ջ
	stack<double> figStack;				//����ջ
	string stdInfix;					//�Զ����׼��ʽ�����ʽ
	double result;						//���ռ�����
	//string cal_ErrorImfo;					//�������⴫���쳣��Ϣ
};

