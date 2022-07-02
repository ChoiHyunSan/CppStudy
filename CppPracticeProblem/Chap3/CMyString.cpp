#include "CMyString.h"

CMyString::CMyString() : m_pszData(nullptr), m_nLength(0)
{

}

CMyString::~CMyString()
{
	Release();
}

int CMyString::SetString(const char* pszParam)
{
	if (pszParam == nullptr)
	{
		return 0;
	}

	int nLength = strlen(pszParam);

	if (m_nLength == 0)
	{
		return 0;
	}

	m_pszData = new char[nLength + 1];
	if (m_pszData == nullptr)
	{
		cout << "동적할당 오류" << endl;
		return 0;
	}
	
	strcpy(m_pszData, pszParam);

	return nLength;

	return 0;
}

const char* CMyString::GetString() const
{
	return m_pszData;
}

void CMyString::Release()
{
	if (m_pszData != nullptr)
	{
		delete[] m_pszData;
	}
	
	m_pszData = nullptr;
	m_nLength = 0;
}