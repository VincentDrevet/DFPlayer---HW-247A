#include "../headers/DFPlayerClient.hpp"
#include "../headers/DFPlayerMessage.hpp"
#include "../headers/DFPlayerMessageBuilder.hpp"
#include <iostream>
#include "DFPlayerClient.hpp"


DFPlayerClient::DFPlayerClient() {}

void DFPlayerClient::play() {

    
    DFPlayerMessageBuilder builder = DFPlayerMessageBuilder();

    DFPlayerMessage message = builder.set_command(PLAY).set_feedback(DISABLED).set_param1(0x0).set_param2(0x0).Build();

    

}