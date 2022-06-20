#include <iostream>
#include <string>
#include <windows.h>
#include "Cursor.h"
#include "Data.h"
#include "Scene.h"
#include "Rain.h"
#include "Engine.h"
using namespace std;

int main() {
	system("mode con: cols=150 lines=50");
	Cursor::hideCursor();

	Engine engine;				//���� ��ü ����

	while(1) {
		Scene::sceneBox();			//ù��° ȭ��
		Scene::sceneTitle();
		Scene::scene1();
		system("cls");

		Scene::sceneBox();			//�ι�° ȭ��
		Scene::scene2();
		system("cls");

		Scene::sceneBox2();			//���� ȭ��
		engine.startGame();
	}

}