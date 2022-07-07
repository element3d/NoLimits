#include "MainWindow.h"

int main()
{
	e3::WindowCreateInfo info;
	info.Name = "NoLimits";
	info.Size.Width = 1280;
	info.Size.Height = 720;
	info.Resoluction.Width = 2 *1280;
	info.Resoluction.Height = 2 * 720;

	MainWindow manWindow(&info);
	manWindow.Show();

	return 0;
}
