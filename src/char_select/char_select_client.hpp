
#ifndef _EQP_CHAR_SELECT_CLIENT_HPP_
#define _EQP_CHAR_SELECT_CLIENT_HPP_

#include "define.hpp"
#include "netcode.hpp"
#include "protocol_handler.hpp"
#include "aligned.hpp"
#include "expansion.hpp"
#include "opcodes.hpp"
#include "packet_structs.hpp"

class UdpSocket;

class CharSelectClient : public ProtocolHandler
{
private:
    Expansion::Ordinal  m_expansion;
    
private:
    void processInputPacket(AlignedReader& r);
    bool determineExpansion(uint16_t opcode);

#include "packet_handlers_canonical.inline.hpp"
#include "packet_handlers_titanium.inline.hpp"
    
public:
    CharSelectClient(IpAddress& addr, UdpSocket& socket);
    virtual ~CharSelectClient();

    void processInputPacketQueue();
    // Returns true if the output queue becomes empty
    bool processOutputPacketQueue();
};

#endif//_EQP_CHAR_SELECT_CLIENT_HPP_
