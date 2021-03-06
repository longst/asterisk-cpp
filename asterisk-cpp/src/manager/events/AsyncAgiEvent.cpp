/*
 * AsyncAgiEvent.cpp
 *
 *  Created on: Sep 6, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/AsyncAgiEvent.h"
#include "vector"
#include <boost/algorithm/string.hpp>

namespace asteriskcpp {

	AsyncAgiEvent::AsyncAgiEvent(const std::string & values) :
			ResponseEvent(values) {
	}
	AsyncAgiEvent::~AsyncAgiEvent() {
	}

	std::string AsyncAgiEvent::getChannel() const {
		return (getProperty("Channel"));
	}

	std::string AsyncAgiEvent::getSubEvent() const {
		return (getProperty("SubEvent"));
	}

	std::string AsyncAgiEvent::getCommandId() const {
		return (getProperty("CommandId"));
	}

	std::string AsyncAgiEvent::getResult() const {
		return (getProperty("Result"));
	}

	std::vector<std::string> AsyncAgiEvent::decodeResult() {
		return (decode(getResult()));
	}

	std::string AsyncAgiEvent::getEnv() const {
		return (getProperty("Env"));
	}

	std::vector<std::string> AsyncAgiEvent::decodeEnv() {
		return (decode(getEnv()));
	}

	std::vector<std::string> AsyncAgiEvent::decode(std::string s) {
		std::vector<std::string> rt;
		boost::split(rt, s, boost::is_any_of(std::string("\n")));
		return (rt);
	}

} //NS

