#include "../headers/DFPlayerMessage.hpp"



DFPlayerMessage::DFPlayerMessage()
    :start_byte(START_BYTE),
     version(VERSION),
     length(LENGTH),
     end_byte(END_BYTE) {}


const DFPlayerMessage& DFPlayerMessage::get_message() const {
    
    const DFPlayerMessage& r = *this;
}


void DFPlayerMessage::calculate_checksum()
{
    int inv_sum = -(this->version + this->length + this->command + this->feedback + this->param1 + this->param2);

    uint8_t checksum_lsb = inv_sum & 255;

    uint8_t checksum_msb = (inv_sum >> 8) & 255;

    this->checksum_lsb = checksum_lsb;
    this->checksum_msb = checksum_msb;

}

void DFPlayerMessage::set_command(ENUM_COMMAND command) {
    this->command = command;
}

void DFPlayerMessage::set_feedback(ENUM_FEEDBACK feedback) {
    this->feedback = feedback;
}

void DFPlayerMessage::set_param1(uint8_t value) {
    this->param1 = value;
}

void DFPlayerMessage::set_param2(uint8_t value) {
    this->param2 = value;
}