#include "Menu.h"

/*
	����������� 3-� ������� ���������� ������� ��������.

	administration - ������� ����������� �����������������.
	chat - ������� ����������� ���.
	perCor - (�� personal correspondence) ����������� ������ ���������
*/


/*
	����������� ������� �����������������

	1. ��������� ������ Admin - �������� ����� �� ������� ����������� �����������������.
	2. ��������� ������ User - ����� ���������� ���������� � �������������.
	3. ��������� ������ LoginMenu ��������� � ����� Admin, ������� ��������� ������������.
	4. ��� ������� ����� �������������� ������������ adminMenu (���� ��������������).

	��� ��������� ������, ���������������� ������� � ������� �������.
*/
void administration()
{
	Admin Admin;
	User user(string, const string&, const string&, const string&);
	Admin.loginMenu();
	if (Admin.getLogin()) Admin.adminMenu();
}

/*
	����������� ������� ����� ���������

	1. ��������� ������ Chat - �������� ����� �� ������� ����������� ����� ���������.
	2. ��������� ������ User - ����� ���������� ���������� � �������������.
	3. ��������� ������ LoginMenu ��������� � ����� Chat, ������� ��������� ������������ � ���������������� ������ ������������.
	4. ��� ������� ����� ������������ ������������ showChat (����� ���).

	��� ��������� ������, ���������������� ������� � ������� �������.
*/
void chat()
{
	Chat Chat;
	User user(string, const string&, const string&, const string&);
	Chat.loginMenu();
	if (Chat.getCurrentUser())Chat.showChat();
}

/*
	����������� ������� ������ ���������

	1. ��������� ������ PerCor - �������� ����� �� ������� ����������� ������ ���������.
	2. ��������� ������ User - ����� ���������� ���������� � �������������.
	3. ��������� ������ LoginMenu ��������� � ����� perCor, ������� ��������� ������������ � ���������������� ������ ������������.
	4. ��� ������� ����� ������������ ������������ userMenuPC (���������������� ����), ����������� ������� �����������
	5. ��� ������ ����������� �������������� showPC (������ ���), ��������� � ��������� �������������.

	��� ��������� ������, ���������������� ������� � ������� �������.
*/
void perCor()
{
	PerCor perCor;
	User user(string, const string&, const string&, const string&);
	perCor.loginMenuPC();
	if (perCor.getCurrentUser())perCor.userMenuPC();
	if (perCor.getParty() != "") perCor.showPC();
}

//�������� ������ ����������� ����������
void regulation()
{
	system("cls");
	cout << "\t\t--- ������� ����������� ���������� ---\n1. �������� ������ � ����� ��� �����������:\n\t(admin)\n\t(0)\n2. � ���������� ���������:\n";
	cout << "\t����������\n\t��������� � �������\n3. ��������� ��������� �� ���������:\n\t��� �� ������\n\t�������� ���������\n\n\n";
	system("pause");
}

