#pragma once
#include "headers/DFPlayerMessage.hpp"




class DFPlayerMessageBuilder
{
private:
    DFPlayerMessage message;

public:
    DFPlayerMessageBuilder();

    DFPlayerMessageBuilder set_command(ENUM_COMMAND command);
    DFPlayerMessageBuilder set_feedback(ENUM_FEEDBACK feedback);
    DFPlayerMessageBuilder set_param1(uint8_t value);
    DFPlayerMessageBuilder set_param2(uint8_t value);
    DFPlayerMessage Build();

};
