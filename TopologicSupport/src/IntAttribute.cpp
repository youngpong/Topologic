#include <DoubleAttribute.h>
#include "..\include\IntAttribute.h"

namespace TopologicSupport
{
	IntAttribute::IntAttribute(const long long int kValue)
		: m_value(kValue)
	{

	}

	void * IntAttribute::Value()
	{
		return &m_value;
	}
}