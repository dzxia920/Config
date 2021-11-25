/*******************************************************
 * Copyright (C) 2021, i2Nav Group, GNSS Research Center of Wuhan University
 *
 * This file is part of Config Class
 *
 * Author: Xia Dazhou (dzxia920@gmail.com)
 * Created on 2021/11/25
 * Last update 2021/11/25
 *******************************************************/

#ifndef CONFIG_H_
#define CONFIG_H_

#include<fstream>
#include <map>
#include <string>

class Config {
	//Data
protected:
	std::string _delimeter;
	std::string _comment;
	std::map<std::string, std::string> _opts;
	//Method
public:
	Config() = default;
	// 感觉使用构造函数列表不太好
	// Config(std::string filename, std::string delimeter = "=", std::string comment = "#") : _delimeter(delimeter), _comment(comment) {}
	Config(std::string filename, std::string delimeter = "=", std::string comment = "#");

};

#endif // !CONFIG_H_

