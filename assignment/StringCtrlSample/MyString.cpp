#include "pch.h"
#include "MyString.h"

CMyString::CMyString()
	: m_pszData(NULL)
	, m_nLength(0)
{
}

CMyString::CMyString(const CMyString& rhs)
	: m_pszData(NULL)
	, m_nLength(0)
{
	this->SetString(rhs.m_pszData);
	this->m_nLength = rhs.m_nLength;
}

CMyString::CMyString(const char* pszParam)
	: m_pszData(NULL)
	, m_nLength(0)
{

	SetString(pszParam);
}

CMyString::~CMyString()
{
	CMyString::Release();
}

int CMyString::SetString(const char* pszParam)
{
	if (this->m_nLength != 0)
		CMyString::Release();
	//cout << pszParam << endl;
	int i = 0;
	while (pszParam[i] != '\0')
		i++;
	//cout << i << endl;
	this->m_nLength = i;
	//cout << this->m_nLength << endl;
	if (m_nLength != 0) {
		this->m_pszData = new char[this->m_nLength + 1];
		for (int j = 0; j <= i; j++)
			this->m_pszData[j] = pszParam[j];
		//cout << this->m_pszData << endl;
	}
	return 0;
}


const char* CMyString::GetString() const
{
	return this->m_pszData;
}


void CMyString::Release()
{
	if (this->m_nLength != 0)
		delete[] this->m_pszData; // array에 delete 적용하는 부분 틀림.
}
