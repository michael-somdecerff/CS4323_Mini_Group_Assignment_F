#include "socketConnection.h"

#ifndef CS4323_MINI_GROUP_ASSIGNMENT_F_HANDLECLIENTTRAFFIC_H
#define CS4323_MINI_GROUP_ASSIGNMENT_F_HANDLECLIENTTRAFFIC_H

/*
 * A thread handle to manage incoming client traffic on a thread
 *
 * Parameters:
 *     socket ->
 * Returns:
 *     Always returns NULL
 */
void handleClientTraffic(struct socket_t* socket);

#endif //CS4323_MINI_GROUP_ASSIGNMENT_F_HANDLECLIENTTRAFFIC_H
