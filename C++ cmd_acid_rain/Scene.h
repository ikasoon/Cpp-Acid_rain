#pragma once
#include <iostream>
#include <string>
#include "Cursor.h"
using namespace std;

class Scene {
public:
	static int difficulty;			//���̵� ����
	static void sceneBox();			//ȭ�� Ʋ ��� 
	static void sceneTitle();		//���� ���
	static void scene1();			//ȭ�� 1 ���� ���
	static void scene2();			//ȭ�� 2 ���� ��� �� ���̵� ����
	static void sceneBox2();		//���� ȭ�� Ʋ ���
	static void endingScene1();
	static void endingScene2();
};

int Scene::difficulty = 1;

void Scene::sceneBox() {
	Cursor::gotoxy(25, 5);
	for (int i = 0; i < 51; i++) {
		cout << "��";
	}
	for (int i = 6; i < 30; i++) {
		Cursor::gotoxy(25, i);
		cout << "��";
	}
	for (int i = 6; i < 30; i++) {
		Cursor::gotoxy(125, i);
		cout << "��";
	}
	Cursor::gotoxy(25, 30);
	for (int i = 0; i < 51; i++) {
		cout << "��";
	}
}

void Scene::sceneTitle() {
	Cursor::gotoxy(37, 11);
	cout << "      ######        #           #                #   #     #     #          # " << endl;
	Cursor::gotoxy(37, 12);
	cout << "    #               #           #               # #  ##   # #   ##  #    #  #  " << endl;
	Cursor::gotoxy(37, 13);
	cout << "  #              #######     #######           #   # #   #   #   #  ######  #  " << endl;
	Cursor::gotoxy(37, 14);
	cout << "   #                #           #                              #    #    #  #  " << endl;
	Cursor::gotoxy(37, 15);
	cout << "    #               #           #                  #          # #   ######  #  " << endl;
	Cursor::gotoxy(37, 16);
	cout << "      ######                                       ###         #            #  " << endl;
}

void Scene::scene1() {
	Cursor::gotoxy(41, 23);
	cout << "���� C++ ���α׷����� ���� Ÿ�ڿ������� <C++ �꼺��>�� ���Ű� ȯ���մϴ�.";
	Cursor::gotoxy(41, 25);
	cout << "�����Ϸ��� �ƹ�Ű�� ��������";
	system("pause>null");
}

void Scene::scene2() {
	Cursor::gotoxy(63, 19);
	cout << "���ϴ� ���̵��� ������.";
	Cursor::gotoxy(63, 21);
	cout << "1. �ʱ�   2. �߱�   3. ���";
	int tmp;
	
	for (;;) {
		Cursor::gotoxy(76, 25);
		cin >> tmp;
		if (tmp < 4) {
			if (0 < tmp) { 
				difficulty = tmp;
				break; 
			}
			else {
				Cursor::gotoxy(76, 25);
				cout << "                 ";
				Cursor::gotoxy(76, 25);
			}
		}
		else {
			Cursor::gotoxy(76, 25);
			cout << "                 ";
			Cursor::gotoxy(76, 25);
		}
	}
}

void Scene::sceneBox2() {
	for (int i = 0; i < 30; i++) {
		Cursor::gotoxy(25, i);
		cout << "��";
	}
	for (int i = 0; i < 30; i++) {
		Cursor::gotoxy(125, i);
		cout << "��";
	}
	Cursor::gotoxy(25, 30);
	for (int i = 0; i < 51; i++) {
		cout << "��";
	}
	Cursor::gotoxy(27, 23);
	for (int i = 0; i < 98; i++) {
		cout << "-";
	}
	Cursor::gotoxy(65, 29);
	for (int i = 0; i < 21; i++) {
		cout << "-";
	}
	Cursor::gotoxy(5, 4);
	cout << "Score : " << '0';
	Cursor::gotoxy(5, 6);
	cout << "Life : " << "100";
}

void Scene::endingScene1() {
	sceneBox();
	Cursor::gotoxy(60, 15);
	cout << "c++�� ���� ���ϴ±���? ���ϵ帳�ϴ�!";
}

void Scene::endingScene2() {
	sceneBox();
	Cursor::gotoxy(65, 15);
	cout << "�� �� ������ �ʿ��ؿ�!";
}