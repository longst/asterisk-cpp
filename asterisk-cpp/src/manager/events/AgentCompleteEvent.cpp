/*
 * AgentCompleteEvent.cpp
 *
 *  Created on: Sep 5, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AgentCompleteEvent.h"

namespace asteriskcpp {

	AgentCompleteEvent::AgentCompleteEvent(const std::string & values) :
			AbstractAgentEvent(values) {
	}
	AgentCompleteEvent::~AgentCompleteEvent() {
	}

	std::string AgentCompleteEvent::getHoldTime() const {
		return (getProperty("HoldTime"));
	}

	std::string AgentCompleteEvent::getTalkTime() const {
		return (getProperty("TalkTime"));
	}

	std::string AgentCompleteEvent::getReason() const {
		return (getProperty("Reason"));
	}
}

