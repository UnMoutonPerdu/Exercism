#include "rna_transcription.h"

namespace rna_transcription {
    char to_rna(char nucleo) {
        try {
            return transcription.at(nucleo);
        }
        catch (const std::exception& e) {
            throw std::invalid_argument("invalid nucleo");
        }
    }

    std::string to_rna(std::string sequence) {
        std::string rna = "";
        for (char letter: sequence) {
            rna += to_rna(letter);
        }
        return rna;
    }
}  // namespace rna_transcription
