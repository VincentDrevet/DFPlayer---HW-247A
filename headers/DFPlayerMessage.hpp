#pragma once
#include <cstdint>


#define START_BYTE 0x7E
#define VERSION 0xFF
#define LENGTH 0x06
#define END_BYTE 0xEF

enum ENUM_FEEDBACK:uint8_t {
    DISABLED = 0x00,
    ENABLED = 0x01
};


enum ENUM_COMMAND:uint8_t {
    PLAY = 0x01,
    PLAY_PREVIOUS = 0x02,
    SPECIFY_PLAYTRACK = 0x03
};


class DFPlayerMessage {
    private:
        uint8_t start_byte;
        uint8_t version;
        uint8_t length;
        ENUM_COMMAND command;
        ENUM_FEEDBACK feedback;
        uint8_t param1;
        uint8_t param2;
        uint8_t checksum_msb;
        uint8_t checksum_lsb;
        uint8_t end_byte;

        
    public:
        DFPlayerMessage();
        const DFPlayerMessage& get_message() const;
        void set_command(ENUM_COMMAND command);
        void set_feedback(ENUM_FEEDBACK feedback);
        void set_param1(uint8_t value);
        void set_param2(uint8_t value);
        void calculate_checksum();
};
