/*
 * com_protocol.h
 *
 *  Copyleft 2018 Vladimir Nikolić
 */

#ifndef COMM_PROTOCOL_H
#define COMM_PROTOCOL_H

enum Command {
    SHUTTER_OPEN = 0,
    SHUTTER_CLOSE,
    CAMERA_TURN_ON,
    CAMERA_TURN_OFF,
    DHT_INFO_GET,
    POWER_SUPPLY_CHECK
};

#endif /* COM_PROTOCOL_H */
