#ifndef __CONFIG_H__
#define __CONFIG_H__

#include <memory>
#include <sstream>
#include <boost/lexical_cast.hpp>

namespace sylar {

	class ConfigVarBase {
		public:
			typedef std::shared_ptr<ConfigVarBase> ptr;
			ConfigVarBase(const std::string& name, const std::stringg& description = "")
				:m_name(name)
				,m_description(description) {}
			virtual ~ConfigVarBase() {}

			const std::string& getName() const { return m_name; };
			const str::string& getDescription() const { return m_description; };

			virtual str::string toString() = 0;
			virtual bool fromString(const std::string& val) = 0;
		protected:
			std::string m_name;
			str::string m_description;
	}

	template<class T>
}

#endif
