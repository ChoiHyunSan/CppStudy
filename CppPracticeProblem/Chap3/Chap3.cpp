#include "stdafx.h"
#include "CMyString.h"

void TestFunc(const CMyString& param)
{
    cout << param.GetString() << endl;
}

int _tmain(int argc, TCHAR* argv[])
{
    CMyString strData;
    strData.SetString("Hello");
    TestFunc(strData);

    return 0;
}


