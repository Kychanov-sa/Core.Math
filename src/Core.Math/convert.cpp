#include "stdafx.h"
#include "registers.h"

namespace GlacialBytes
{
	namespace Core
	{
		namespace Math
		{
			const __declspec(align(16)) float Convert::rad2deg = (180.0f / GM_PI);
			const __declspec(align(16)) float Convert::deg2rad = (GM_PI / 180.0f);
		}
	}
}