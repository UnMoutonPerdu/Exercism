#if !defined(SECRET_HANDSHAKE_H)
#define SECRET_HANDSHAKE_H

#include <vector>
#include <string>
#include <algorithm>

namespace secret_handshake {

    typedef std::vector<std::string> Handshake;
    Handshake commands(int);

}  // namespace secret_handshake

#endif // SECRET_HANDSHAKE_H
