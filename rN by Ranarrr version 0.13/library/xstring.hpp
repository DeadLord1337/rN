#ifndef _XSTRING_H_
#define _XSTRING_H_

#include "main.hpp"

class XString {
public:
	XString( int hashlen, int strlen, int key, ... );
	virtual ~XString();

public:
	char *		c();
	std::string s();

private:
	char *	m_charList;
	char *	m_retBuf;
	int		m_strLength;
	int		m_hashLength;
	int		m_key;
};

#endif //xstring.h