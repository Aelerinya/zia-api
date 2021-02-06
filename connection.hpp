#include "event.hpp"
#include <cstdint>
#include <string>
#include <vector>

namespace zia::api
{

class NewConnectionEvent : public IEvent
{
    static constexpr char event_name[] = "New connection";
    static inline const EventDescriptor event =
        event_base<NewConnectionEvent, NewConnectionEvent::event_name>;
    // TODO: mettre les trucs de asio
};

// const auto NewConnectionEvent::event =
// event_base<NewConnectionEvent, NewConnectionEvent::event_name>;
} // namespace zia::api