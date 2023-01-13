#include "secret_handshake.h"

namespace secret_handshake {

    Handshake commands(int num) {
        Handshake secret_code;
        
        if (num & 1) {
            secret_code.push_back("wink");
        }
        if (num & 2) {
            secret_code.push_back("double blink");
        }
        if (num & 4) {
            secret_code.push_back("close your eyes");
        }
        if (num & 8) {
            secret_code.push_back("jump");
        }
        if (num & 16) {
            std::reverse(secret_code.begin(), secret_code.end());
        }

        return secret_code;
    }

}  // namespace secret_handshake
