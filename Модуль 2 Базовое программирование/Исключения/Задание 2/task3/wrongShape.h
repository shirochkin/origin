#pragma once


class wrongNumSides : public std::exception {
public:
	const char* what();
};

class wrongValueAngles : public std::exception {
public:
	const char* what();
};

class wrongValueSides : public std::exception {
public:
	const char* what();
};

class wrongSumAngles : public std::exception {
public:
	const char* what();
};