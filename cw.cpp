#include <windows.h>



int main()
{   
	int i;
	for(i=0;;i++)
	{
		Sleep(4000);
		if(i % 2 == 0)
		{
			const wchar_t *filenm = L"pic1.jpg"; //ADDRESS of first image
			bool isWallSet = SystemParametersInfoW(SPI_SETDESKWALLPAPER, 0, (void*)filenm, SPIF_UPDATEINIFILE);  
		}
		else
		{
			const wchar_t *filenm = L"pic2.jpg"; //ADDRESS of second image
			bool isWallSet = SystemParametersInfoW(SPI_SETDESKWALLPAPER, 0, (void*)filenm, SPIF_UPDATEINIFILE);  
		}
	}
	return 0;
}

