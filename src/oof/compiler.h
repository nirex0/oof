// © 2019 NIREX ALL RIGHTS RESERVED

#ifndef _OOF_COMPILER_H_
#define _OOF_COMPILER_H_

#include <string>
#include <iostream>
#include <vector>
#include <algorithm> 
#include <cctype>
#include <stack>

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

auto bf(const std::string& cmd) -> void
{
	std::vector<int> data(1, 0);
	std::vector<int>::iterator ptr = data.begin();
	std::string::const_iterator op = cmd.begin();
	std::stack<std::string::const_iterator> opstack;

	while (op != cmd.end())
	{
		switch (*op)
		{
		case '<': { ptr--; break; }
		case '>': { ptr++; if (ptr == data.end()) { data.push_back(0); ptr = data.end() - 1; } break; }
		case '+': { (*ptr) += 1;	break; }
		case '-': { (*ptr) -= 1; break; }
		case '.': { std::cout << char(*ptr); break; }
		case ',': { char input; std::cin >> input; *ptr = input; }
		case '[': { opstack.push(op); if (*ptr == 0) { auto startInstructionPtr = op; while (++op != cmd.end()) { if (*op == '[') opstack.push(op); else if (*op == ']') { auto tempInstructionPtr = opstack.top(); opstack.pop(); if (startInstructionPtr == tempInstructionPtr) break; } } } break; }
		case ']': { if (*ptr != 0) op = opstack.top(); else opstack.pop(); break; }
		default: { break; }
		}

		op++;
	}
}

auto parse(std::string cmd) -> void
{
	std::string szbf = "";

	for (size_t i = 0; i < cmd.length(); i++) cmd[i] = tolower(cmd[i]);
	cmd.erase(std::remove(cmd.begin(), cmd.end(), '\n'), cmd.end());
	cmd.erase(std::find_if(cmd.rbegin(), cmd.rend(), [](int ch) { return !std::isspace(ch); }).base(), cmd.end());
	cmd.erase(cmd.begin(), std::find_if(cmd.begin(), cmd.end(), [](int ch) { return !std::isspace(ch); }));

	if (cmd[cmd.length() - 1] == 'f')
	{
		std::vector<std::string> oofs = utl_split(cmd, "f");

		for (const auto& s : oofs)
		{
			if (s == "") continue;

			size_t cmdSize = 8;
			size_t slm6 = s.length() % cmdSize;
			size_t sld6 = s.length() / cmdSize;

			slm6 += 1;
			size_t i = 0;
			do {
				switch (slm6)
				{
				case 1: { szbf += ">"; } break;
				case 2: { szbf += "<"; } break;
				case 3: { szbf += "+"; } break;
				case 4: { szbf += "+";  } break;
				case 5: {szbf += "+";  } break;
				case 6: { szbf += "+";  } break;
				case 7: { szbf += "["; } break;
				case 8: { szbf += "]"; } break;
				default: break;
				}
			} while (i++ < sld6);
		}
	}

	bf(szbf);
}

#endif // !_OOF_COMPILER_H_
