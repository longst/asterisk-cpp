/*
 * NewAccountCodeEvent.cpp
 *
 *  Created on: Mar 14, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/NewAccountCodeEvent.h"

namespace asteriskcpp {

	NewAccountCodeEvent::NewAccountCodeEvent(const std::string & values) :
			ManagerEvent(values) {
	}

	NewAccountCodeEvent::~NewAccountCodeEvent()
	{
	}

	std::string NewAccountCodeEvent::getChannel() const
	{
		return (getProperty("Channel"));
	}

	std::string NewAccountCodeEvent::getUniqueId() const
	{
		return (getProperty("UniqueId"));

	}

	std::string NewAccountCodeEvent::getAccountCode() const
	{
		return (getProperty("AccountCode"));

	}

	std::string NewAccountCodeEvent::getOldAccountCode() const
	{
		return (getProperty("OldAccountCode"));
	}
}
/* namespace asteriskcpp */
