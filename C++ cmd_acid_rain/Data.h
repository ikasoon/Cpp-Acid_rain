#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Data {
	vector<string> database;	//������ ��� �ܾ ������ database
	
public:
	Data();						//���Ͽ��� �ܾ �ҷ��� database�� �����ϴ� ������
	string data(int i);				//���Ϳ��� ���� �ܾ �����ϴ� �Լ�
	int size() { return database.size(); }
};

Data::Data(){
	ifstream fin("word.txt");
	string line;
	while (getline(fin, line)) {
		database.push_back(line);
	}
	fin.close();
}

string Data::data(int i) {
	return database.at(i);
}