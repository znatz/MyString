#pragma hdrstop

#include "MyString.h"

MyString::MyString() {
	m_ustr = "";
}

MyString::MyString(UnicodeString param1) {
	m_ustr = param1;

}

UnicodeString MyString::GetStr() {
    return m_ustr;
}

MyString& MyString::operator-(UnicodeString param1){
	while (m_ustr.Pos(param1)!=0 ){
		m_ustr = m_ustr.Delete(m_ustr.Pos(param1),param1.Length());
	}
	return *this;
}
