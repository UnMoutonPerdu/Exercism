#if !defined(RNA_TRANSCRIPTION_H)
#define RNA_TRANSCRIPTION_H

#include <string>
#include <map>
#include <stdexcept>

namespace rna_transcription {
    const std::map<char, char> transcription = {
        {'A', 'U'},
        {'C', 'G'},
        {'G', 'C'},
        {'T', 'A'}
    };
    char to_rna(char);
    std::string to_rna(std::string);
}  // namespace rna_transcription

#endif // RNA_TRANSCRIPTION_H