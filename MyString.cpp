#pragma hdrstop

#include "MyString.h"

MyString::MyString()
{
	m_ustr = "";
}

MyString::MyString(UnicodeString param1)
{
	m_ustr = param1;

}

MyString::MyString(const MyString& obj)
{
		m_ustr = obj.m_ustr;
}

MyString::~MyString()
{
	m_ustr = "";
}

//                                                                            //
UnicodeString MyString::GetStr()
{
	return m_ustr;
}

void MyString::SetStr(UnicodeString param1)
{
	m_ustr = param1;
}

//                                                                            //
MyString& MyString::operator-(UnicodeString param1)
{
	while (m_ustr.Pos(param1)!=0 )
	{
		m_ustr = m_ustr.Delete(m_ustr.Pos(param1),param1.Length());
	}
	return *this;
}

MyString& MyString::operator+(UnicodeString param1)
{
	m_ustr = m_ustr + param1;
	return *this;
}

void MyString::operator+=(UnicodeString param1)
{
	m_ustr = m_ustr + param1;
}
