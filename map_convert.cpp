//@Description:“单词转换”map对象
// 给出一个string对象，把它转换为另一个string对象。输入为两个文件
//第一个文件包含了若干单词对，第二个文件提供了需要转换的文本
//即：遇到文件1中第一个单词时，应该替换为第二个单词
//@Author: zlchen
//@Date: 2/3/2019

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<map>
#include<stdexcept>

using namespace std;

//opens in binding it to the given file
ifstream& open_file(ifstream &in, const string &file)
{
	in.close();	//close in case it was already open
	in.clear();	//clear any existing errors
	// if the open fails, the stream will be in an invalid state
	in.open(file.c_str());
	return in;
}

int main(int argc, char **argv)
{
	//map to hold the word transformation pairs:
	//key is the word to look for in the input; value is word to use in the output
	map<string, string> trans_map;
	string key, value;
	if (argc != 3)
	{
		//throw runtime_error("wrong number of arguments");
		cerr << "wrong number of arguments" << endl;
	}
	//open transformation file and check that open succeeded
	ifstream map_file;
	if (!open_file(map_file, argv[1]))
		throw runtime_error("no transformation file");
	//read the transformation file and build the map
	while (map_file >> key >> value)
		trans_map.insert(make_pair(key, value));
	//ok, now we're ready to do the transformations
	//open the input file and check that the open succeeded
	ifstream input;
	if (!open_file(input, argv[2]))
		throw runtime_error("no input file");
	string line;	// hold each line from the input
	//read the text to transform it a line at a time
	while (getline(input, line))
	{
		istringstream stream(line);	//read the line in a word at a time
		string word;
		bool firstword = true;	 //controls whether a space is printed
		while (stream >> word)
		{
			//ok: the actual mapwork, this part is the heart of the program
			map<string, string>::const_iterator map_it = trans_map.find(word);
			//if this word is in the transformation map
			if (map_it != trans_map.end())
				//replace it by the transformation value in the map
				word = (*map_it).second; //or map_it->second
			if (firstword)
				firstword = false;
			else
				cout << " "; //print space between words
			cout << word;
		}
		cout << endl;
	}
	return 0;
}