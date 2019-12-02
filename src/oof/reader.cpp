// © 2019 NIREX ALL RIGHTS RESERVED

#include "compiler.h"

#include <iostream>
#include <fstream>

auto main(int argc, char** argv) -> int
{
	if (argc > 1)
	{
		if (utl_split(argv[1], ".")[utl_split(argv[1], ".").size() - 1] == "oof")
		{
			std::ifstream f(argv[1]);
			std::string result = "";
			std::string str = "";
			while (std::getline(f, str))
			{
				result += str;
				result += "\n";
			}
			parse(result);
			f.close();
		}
	}
}