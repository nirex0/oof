// © 2019 NIREX ALL RIGHTS RESERVED

#ifndef _OOF_COMPILER_H_
#define _OOF_COMPILER_H_

#define PLAYGROUND_SIZE 10000

#include <string>
#include <iostream>
#include <vector>
#include <algorithm> 
#include <cctype>

// string split method
auto utl_split(std::string in_s, const std::string& delim)->std::vector<std::string>
{
	std::vector <std::string> retvec;
	size_t pos = 0;
	std::string token;

	while ((pos = in_s.find(delim)) != std::string::npos)
	{
		token = in_s.substr(0, pos);
		retvec.push_back(token);
		in_s.erase(0, pos + delim.length());
	}

	retvec.push_back(in_s);
	return retvec;
}

// false: no error
// true : error
auto parse(std::string cmd) -> int
{
	for (size_t i = 0; i < cmd.length(); i++) cmd[i] = tolower(cmd[i]);

	// Remove \n
	cmd.erase(std::remove(cmd.begin(), cmd.end(), '\n'), cmd.end());

	// Trim Begin
	cmd.erase(std::find_if(cmd.rbegin(), cmd.rend(), [](int ch) {
		return !std::isspace(ch);
	}).base(), cmd.end());

	// Trim End
	cmd.erase(cmd.begin(), std::find_if(cmd.begin(), cmd.end(), [](int ch) {
		return !std::isspace(ch);
	}));

	if (cmd[cmd.length() - 1] == 'f')
	{
		char* plg = new char[PLAYGROUND_SIZE];
		for (size_t i = 0; i < PLAYGROUND_SIZE; i++) plg[i] = 0;
		char* ptr = &plg[PLAYGROUND_SIZE / 2];

		std::vector<std::string> oofs = utl_split(cmd, "f");

		for (const auto& s : oofs)
		{
			if (s == "") continue;
				
			size_t slm6 = s.length() % 6;
			size_t sld6 = s.length() / 6;
			
			size_t i = 0;
			do {
				switch (slm6)
				{
				case 0: { std::cin >> *ptr; } break;		// 6 CIN
				case 1: { ptr++; } break;					// 1 PTR ++
				case 2: { ptr--; } break;					// 2 PTR --
				case 3: { (*ptr)++; } break;					// 3 VALUE ++
				case 4: { (*ptr)--; } break;					// 4 VALUE --
				case 5: { std::cout << *ptr; } break;		// 5 COUT
				default: break;
				}
			} while (i++ < sld6);
		}
		delete[] plg;
		return false;
	}
	return true;
}

#endif // !_OOF_COMPILER_H_
