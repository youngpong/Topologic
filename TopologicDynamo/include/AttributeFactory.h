#pragma once

using namespace System;
using namespace Autodesk::DesignScript::Runtime;

#include <Attribute.h>

namespace TopologicUtilities
{
	class Attribute;
}

namespace Topologic
{
	public ref class AttributeFactory abstract
	{
	public:
		[IsVisibleInDynamoLibrary(false)]
		virtual Attribute^ Create(String^ key, Object^ value) abstract;

		[IsVisibleInDynamoLibrary(false)]
		virtual bool CheckType(Type^ type) abstract;

	public protected:
		virtual bool CheckType(const std::shared_ptr<TopologicUtilities::Attribute>& kpSupportAttribute) abstract;

		virtual Object^ CreateValue(const std::shared_ptr<TopologicUtilities::Attribute>& kpSupportAttribute) abstract;

	protected:
		AttributeFactory() {}
	};
}