/*
 * ConfbridgeListCompleteEvent.h
 *
 *  Created on: Aug 7, 2011
 *      Author: a-campos
 */

#ifndef CONFBRIDGELISTCOMPLETEEVENT_H_
#define CONFBRIDGELISTCOMPLETEEVENT_H_

#include "ResponseEvent.h"

namespace asteriskcpp {

	class ConfbridgeListCompleteEvent: public ResponseEvent {
	public:
		inline static std::string getEventName() {
			return ("ConfbridgeListCompleteEvent");
		}
		ConfbridgeListCompleteEvent(const std::string& values) :
				ResponseEvent(values) {
		}
		virtual ~ConfbridgeListCompleteEvent() {
		}

		/**
		 * Returns the status of the list e.g. complete.
		 */
		std::string getEventList() const {
			return (getProperty("EventList"));
		}

		/**
		 * Returns the number listitems.
		 */
		std::string getListItems() const {
			return (getProperty("ListItems"));
		}

	};

}

#endif /* CONFBRIDGELISTCOMPLETEEVENT_H_ */
