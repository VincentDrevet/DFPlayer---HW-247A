#include "headers/DFPlayerMessageBuilder.hpp"
#include "headers/DFPlayerMessage.hpp"


DFPlayerMessageBuilder::DFPlayerMessageBuilder()
{
    this->message = DFPlayerMessage();
}

DFPlayerMessageBuilder DFPlayerMessageBuilder::set_command(ENUM_COMMAND command)
{
    this->message.set_command(command);
}

DFPlayerMessageBuilder DFPlayerMessageBuilder::set_feedback(ENUM_FEEDBACK feedback)
{
    this->message.set_feedback(feedback);
}


DFPlayerMessageBuilder DFPlayerMessageBuilder::set_param1(uint8_t value)
{
    this->set_param1(value);
}

DFPlayerMessageBuilder DFPlayerMessageBuilder::set_param2(uint8_t value)
{
    this->set_param2(value);
}

DFPlayerMessage DFPlayerMessageBuilder::Build() {

    this->message.calculate_checksum();

    return this->message;
}